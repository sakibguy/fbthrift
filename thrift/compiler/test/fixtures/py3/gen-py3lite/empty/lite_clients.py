#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from thrift.py3lite.sync_client import SyncClient as _fbthrift_py3lite_SyncClient
from thrift.py3lite.async_client import AsyncClient as _fbthrift_py3lite_AsyncClient
import thrift.py3lite.exceptions as _fbthrift_py3lite_exceptions
import empty.lite_types as _empty_lite_types


class NullService:
    class Sync(_fbthrift_py3lite_SyncClient):
        def __init__(self, channel):
            super().__init__(channel, "NullService")

    class Async(_fbthrift_py3lite_AsyncClient):
        def __init__(self):
            super().__init__("NullService")

