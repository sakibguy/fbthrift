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

import types
import typing

from thrift.py3lite.client.request_channel import RequestChannel
from thrift.py3lite.serializer import Protocol
from thrift.py3lite.types import Struct, Union

StructOrUnion = typing.TypeVar("StructOrUnion", bound=typing.Union[Struct, Union])

class SyncClient:
    def __init__(self, channel: RequestChannel, service_name: str) -> None: ...
    def __enter__() -> SyncClient: ...
    def __exit__(
        self,
        type: typing.Type[Exception],
        value: Exception,
        traceback: types.TracebackType,
    ) -> None: ...
    def _send_request(
        self,
        function_name: str,
        args: Struct,
        response_cls: typing.Type[StructOrUnion],
    ) -> StructOrUnion: ...

TClient = TypeVar("TClient", bound="SyncClient")

class ClientType(Enum):
    THRIFT_HEADER_CLIENT_TYPE: ClientType = ...
    THRIFT_ROCKET_CLIENT_TYPE: ClientType = ...

def get_client(
    clientKlass: Type[TClient],
    *,
    host: Optional[str] = ...,
    port: Optional[int] = ...,
    path: Optional[str] = ...,
    timeout: float = ...,
    client_type: ClientType = ...,
    protocol: Protocol = ...,
) -> TClient: ...
