#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.exceptions
from thrift.py3.types import __NotSet, NOTSET
import typing as _typing
from typing_extensions import Final

import sys
import itertools
import thrift.py3.stream


__property__ = property



class ClientBufferedStream__bool(thrift.py3.stream.ClientBufferedStream[bool]):
    def __aiter__(self) -> _typing.AsyncIterator[bool]: ...
    async def __anext__(self) -> bool: ...

class ServerStream__bool(thrift.py3.stream.ServerStream[bool]):
    pass

class ServerPublisher_cbool(thrift.py3.stream.ServerPublisher):
    def complete(self) -> None: ...
    def send(self, item: pbool) -> None: ...

