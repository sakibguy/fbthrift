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

import typing
from enum import Enum

from folly.iobuf import IOBuf
from thrift.py3lite.types import Struct, Union

sT = typing.TypeVar("sT", bound=typing.Union[Struct, Union])

class Protocol(Enum):
    COMPACT: Protocol = ...
    BINARY: Protocol = ...
    JSON: Protocol = ...
    COMPACT_JSON: Protocol = ...

def serialize_iobuf(strct: sT, protocol: Protocol = Protocol.COMPACT) -> IOBuf: ...
def serialize(struct: sT, protocol: Protocol = Protocol.COMPACT) -> bytes: ...
def deserialize_with_length(
    klass: typing.Type[sT], buf: IOBuf, protocol: Protocol = Protocol.COMPACT
) -> typing.Tuple[sT, int]: ...
def deserialize(
    klass: typing.Type[sT], buf: IOBuf, protocol: Protocol = Protocol.COMPACT
) -> sT: ...
