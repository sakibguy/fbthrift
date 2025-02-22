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

from folly cimport cFollyExecutor
from libcpp.memory cimport unique_ptr
from libcpp.string cimport string
from thrift.py3lite.client.omni_client cimport cOmniClient
from thrift.py3lite.client.request_channel cimport cRequestChannel_ptr


cdef class AsyncClient:
    cdef string _service_name
    cdef cFollyExecutor* _executor
    cdef object _connect_future
    cdef unique_ptr[cOmniClient] _omni_client
    cdef bind_client(self, cRequestChannel_ptr&& channel)
