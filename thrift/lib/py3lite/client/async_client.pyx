# Copyright (c) Facebook, Inc. and its affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# cython: c_string_type=unicode, c_string_encoding=utf8

import asyncio

cimport cython
cimport folly.iobuf
import folly.executor

from cpython.ref cimport PyObject
from cython.operator cimport dereference as deref
from folly cimport cFollyTry
from folly.executor cimport get_executor
from folly.futures cimport bridgeFutureWith, bridgeSemiFutureWith
from folly.iobuf cimport IOBuf
from libc.stdint cimport uint32_t
from libcpp.memory cimport make_unique
from libcpp.utility cimport move as cmove
from thrift.py3lite.serializer cimport Protocol as cProtocol
from thrift.py3lite.serializer import serialize_iobuf, deserialize
from thrift.py3lite.client.omni_client cimport cOmniClientResponseWithHeaders
from thrift.py3lite.client.request_channel cimport (
    createThriftChannelTCP,
    createThriftChannelUnix,
    ClientType as cClientType,
    RequestChannel,
)
from thrift.py3lite.client.request_channel import ClientType


@cython.auto_pickle(False)
cdef class AsyncClient:
    def __init__(self, string service_name):
        self._service_name = service_name

    def __cinit__(AsyncClient self):
        loop = asyncio.get_event_loop()
        self._executor = get_executor()
        # Keep a reference to the executor for the life of the client
        self._executor_wrapper = folly.executor.loop_to_q[loop]
        self._connect_future = loop.create_future()

    cdef bind_client(self, cRequestChannel_ptr channel):
        self._omni_client = make_unique[cOmniClient](
            cmove(channel), self._service_name)

    def __enter__(AsyncClient self):
        raise asyncio.InvalidStateError('Use an async context for thrift clients')

    def __exit__(AsyncClient self):
        raise NotImplementedError()

    async def __aenter__(AsyncClient self):
        await asyncio.shield(self._connect_future)
        return self

    async def __aexit__(AsyncClient self, exc_type, exc_value, traceback):
        self._omni_client.reset()
        # To break any future usage of this client
        badfuture = asyncio.get_event_loop().create_future()
        badfuture.set_exception(asyncio.InvalidStateError('Client Out of Context'))
        badfuture.exception()
        self._connect_future = badfuture

    def _send_request(
        AsyncClient self,
        string function_name,
        args,
        response_cls,
    ):
        protocol = deref(self._omni_client).getChannelProtocolId()
        cdef IOBuf args_iobuf = serialize_iobuf(args, protocol=protocol)

        loop = asyncio.get_event_loop()
        future = loop.create_future()

        if response_cls is None:
            deref(self._omni_client).oneway_send(function_name, args_iobuf.c_clone())
            future.set_result(None)
            return future
        else:
            userdata = (future, response_cls, protocol)
            bridgeSemiFutureWith[cOmniClientResponseWithHeaders](
                self._executor,
                deref(self._omni_client).semifuture_send(function_name, args_iobuf.c_clone()),
                _async_client_send_request_callback,
                <PyObject *> userdata,
            )
            return asyncio.shield(future)


cdef void _async_client_send_request_callback(
    cFollyTry[cOmniClientResponseWithHeaders]&& result,
    PyObject* userdata,
):
    pyfuture, response_cls, protocol = <object> userdata
    response_iobuf = folly.iobuf.from_unique_ptr(cmove(result.value().buf))
    pyfuture.set_result(
        deserialize(response_cls, response_iobuf, protocol=protocol)
    )



def get_client(
    clientKlass,
    *,
    host=None,
    port=None,
    path=None,
    double timeout=1,
    cClientType client_type = ClientType.THRIFT_HEADER_CLIENT_TYPE,
    cProtocol protocol = cProtocol.COMPACT,
):
    if not issubclass(clientKlass, AsyncClient):
        if hasattr(clientKlass, "Async"):
            clientKlass = clientKlass.Async
    assert issubclass(clientKlass, AsyncClient), "Must be a py3lite async client"

    cdef uint32_t _timeout_ms = int(timeout * 1000)

    host = str(host)  # Accept ipaddress objects
    client = clientKlass()

    if host is not None and port is not None:
        if path is not None:
            raise ValueError("Can not set path and host/port at same time")
        bridgeFutureWith[cRequestChannel_ptr](
            (<AsyncClient>client)._executor,
            createThriftChannelTCP(
                host, port, _timeout_ms, client_type, protocol
            ),
            requestchannel_callback,
            <PyObject *>client,
        )
    elif path is not None:
        bridgeFutureWith[cRequestChannel_ptr](
            (<AsyncClient>client)._executor,
            createThriftChannelUnix(
                path, _timeout_ms, client_type, protocol
            ),
            requestchannel_callback,
            <PyObject *>client,
        )
    else:
        raise ValueError("Must set path or host/port")

    return client


cdef void requestchannel_callback(
    cFollyTry[cRequestChannel_ptr]&& result,
    PyObject* userData,
):
    cdef AsyncClient client = <object> userData
    future = client._connect_future
    if result.hasException():
        try:
            result.exception().throw_exception()
        except Exception as pyex:
            future.set_exception(pyex)
    else:
        client.bind_client(cmove(result.value()))
        future.set_result(None)
