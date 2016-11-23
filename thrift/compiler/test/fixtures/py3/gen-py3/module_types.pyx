#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from cython.operator cimport dereference as deref
from thrift.lib.py3.thrift_server cimport TException

from collections.abc import Sequence, Set, Mapping
from enum import Enum
cimport py3.module_types

class AnEnum(Enum):
    ONE = <int> (AnEnum__ONE)
    TWO = <int> (AnEnum__TWO)
    THREE = <int> (AnEnum__THREE)
    FOUR = <int> (AnEnum__FOUR)

cdef cAnEnum AnEnum_to_cpp(value):
    if value == AnEnum.ONE:
        return AnEnum__ONE
    elif value == AnEnum.TWO:
        return AnEnum__TWO
    elif value == AnEnum.THREE:
        return AnEnum__THREE
    elif value == AnEnum.FOUR:
        return AnEnum__FOUR


cdef class SimpleException(TException):
    def __init__(
        self,
        int err_code
    ):
        self.c_SimpleException = make_shared[cSimpleException]()
        deref(self.c_SimpleException).err_code = err_code
        
    @staticmethod
    cdef create(shared_ptr[cSimpleException] c_SimpleException):
        inst = <SimpleException>SimpleException.__new__(SimpleException)
        inst.c_SimpleException = c_SimpleException
        return inst

    @property
    def err_code(self):
        return self.c_SimpleException.get().err_code


cdef class SimpleStruct:
    def __init__(
        self,
        pbool is_on,
        int tiny_int,
        int small_int,
        int nice_sized_int,
        int big_int,
        float real
    ):
        self.c_SimpleStruct = make_shared[cSimpleStruct]()
        deref(self.c_SimpleStruct).is_on = is_on
        deref(self.c_SimpleStruct).tiny_int = tiny_int
        deref(self.c_SimpleStruct).small_int = small_int
        deref(self.c_SimpleStruct).nice_sized_int = nice_sized_int
        deref(self.c_SimpleStruct).big_int = big_int
        deref(self.c_SimpleStruct).real = real
        
    @staticmethod
    cdef create(shared_ptr[cSimpleStruct] c_SimpleStruct):
        inst = <SimpleStruct>SimpleStruct.__new__(SimpleStruct)
        inst.c_SimpleStruct = c_SimpleStruct
        return inst

    @property
    def is_on(self):
        return <pbool> self.c_SimpleStruct.get().is_on

    @property
    def tiny_int(self):
        return self.c_SimpleStruct.get().tiny_int

    @property
    def small_int(self):
        return self.c_SimpleStruct.get().small_int

    @property
    def nice_sized_int(self):
        return self.c_SimpleStruct.get().nice_sized_int

    @property
    def big_int(self):
        return self.c_SimpleStruct.get().big_int

    @property
    def real(self):
        return self.c_SimpleStruct.get().real


cdef class ComplexStruct:
    def __init__(
        self,
        py3.module_types.SimpleStruct structOne,
        py3.module_types.SimpleStruct structTwo,
        int an_integer,
        str name,
        object an_enum
    ):
        self.c_ComplexStruct = make_shared[cComplexStruct]()
        deref(self.c_ComplexStruct).structOne = deref(structOne.c_SimpleStruct)
        deref(self.c_ComplexStruct).structTwo = deref(structTwo.c_SimpleStruct)
        deref(self.c_ComplexStruct).an_integer = an_integer
        if name is not None:
            deref(self.c_ComplexStruct).name = name.encode('UTF-8')
        
        
    @staticmethod
    cdef create(shared_ptr[cComplexStruct] c_ComplexStruct):
        inst = <ComplexStruct>ComplexStruct.__new__(ComplexStruct)
        inst.c_ComplexStruct = c_ComplexStruct
        return inst

    @property
    def structOne(self):
        cdef shared_ptr[cSimpleStruct] item
        if self.__structOne is None:
            item = make_shared[cSimpleStruct](deref(self.c_ComplexStruct).structOne)
            self.__structOne = SimpleStruct.create(item)
        return self.__structOne
        

    @property
    def structTwo(self):
        cdef shared_ptr[cSimpleStruct] item
        if self.__structTwo is None:
            item = make_shared[cSimpleStruct](deref(self.c_ComplexStruct).structTwo)
            self.__structTwo = SimpleStruct.create(item)
        return self.__structTwo
        

    @property
    def an_integer(self):
        return self.c_ComplexStruct.get().an_integer

    @property
    def name(self):
        return self.c_ComplexStruct.get().name.decode()

    @property
    def an_enum(self):
        cdef int value = <int> deref(self.c_ComplexStruct).an_enum
        return AnEnum(value)
        




cdef class List__i16:
    def __init__(self, items=None):
        self._vector = make_shared[vector[int16_t]]()
        if items:
            for item in items:
                deref(self._vector).push_back(item)

    @staticmethod
    cdef create(shared_ptr[vector[int16_t]] c_items):
        inst = <List__i16>List__i16.__new__(List__i16)
        inst._vector = c_items
        return inst

    def __getitem__(self, int index):
        cdef int16_t citem = deref(self._vector).at(index)
        return citem

    def __len__(self):
        return deref(self._vector).size()

Sequence.register(List__i16)

cdef class List__i32:
    def __init__(self, items=None):
        self._vector = make_shared[vector[int32_t]]()
        if items:
            for item in items:
                deref(self._vector).push_back(item)

    @staticmethod
    cdef create(shared_ptr[vector[int32_t]] c_items):
        inst = <List__i32>List__i32.__new__(List__i32)
        inst._vector = c_items
        return inst

    def __getitem__(self, int index):
        cdef int32_t citem = deref(self._vector).at(index)
        return citem

    def __len__(self):
        return deref(self._vector).size()

Sequence.register(List__i32)

cdef class List__i64:
    def __init__(self, items=None):
        self._vector = make_shared[vector[int64_t]]()
        if items:
            for item in items:
                deref(self._vector).push_back(item)

    @staticmethod
    cdef create(shared_ptr[vector[int64_t]] c_items):
        inst = <List__i64>List__i64.__new__(List__i64)
        inst._vector = c_items
        return inst

    def __getitem__(self, int index):
        cdef int64_t citem = deref(self._vector).at(index)
        return citem

    def __len__(self):
        return deref(self._vector).size()

Sequence.register(List__i64)

cdef class List__string:
    def __init__(self, items=None):
        self._vector = make_shared[vector[string]]()
        if items:
            for item in items:
                deref(self._vector).push_back(item.encode('UTF-8'))

    @staticmethod
    cdef create(shared_ptr[vector[string]] c_items):
        inst = <List__string>List__string.__new__(List__string)
        inst._vector = c_items
        return inst

    def __getitem__(self, int index):
        cdef string citem = deref(self._vector).at(index)
        return citem.decode()

    def __len__(self):
        return deref(self._vector).size()

Sequence.register(List__string)

cdef class List__SimpleStruct:
    def __init__(self, items=None):
        self._vector = make_shared[vector[py3.module_types.cSimpleStruct]]()
        if items:
            for item in items:
                deref(self._vector).push_back(deref((<py3.module_types.SimpleStruct> item).c_SimpleStruct))

    @staticmethod
    cdef create(shared_ptr[vector[py3.module_types.cSimpleStruct]] c_items):
        inst = <List__SimpleStruct>List__SimpleStruct.__new__(List__SimpleStruct)
        inst._vector = c_items
        return inst

    def __getitem__(self, int index):
        cdef py3.module_types.cSimpleStruct citem = deref(self._vector).at(index)
        return py3.module_types.SimpleStruct.create(make_shared[py3.module_types.cSimpleStruct](citem))

    def __len__(self):
        return deref(self._vector).size()

Sequence.register(List__SimpleStruct)

cdef class Set__i32:
    def __init__(self, items=None):
        self._set = make_shared[cset[int32_t]]()
        if items:
            for item in items:
                deref(self._set).insert(item)

    @staticmethod
    cdef create(shared_ptr[cset[int32_t]] c_items):
        inst = <Set__i32>Set__i32.__new__(Set__i32)
        inst._set = c_items
        return inst

    def __contains__(self, int item):
        return pbool(deref(self._set).count(item))

    def __len__(self):
        return deref(self._set).size()

    def __iter__(self):
        for citem in deref(self._set):
            yield citem

Set.register(Set__i32)

cdef class Set__string:
    def __init__(self, items=None):
        self._set = make_shared[cset[string]]()
        if items:
            for item in items:
                deref(self._set).insert(item.encode('UTF-8'))

    @staticmethod
    cdef create(shared_ptr[cset[string]] c_items):
        inst = <Set__string>Set__string.__new__(Set__string)
        inst._set = c_items
        return inst

    def __contains__(self, str item):
        return pbool(deref(self._set).count(item.encode('UTF-8')))

    def __len__(self):
        return deref(self._set).size()

    def __iter__(self):
        for citem in deref(self._set):
            yield citem.decode()

Set.register(Set__string)

cdef class Map__string_string:
    def __init__(self, items=None):

        self._map = make_shared[cmap[string,string]]()
        if items:
            for key, item in items.items():
                deref(self._map).insert(cpair[string,string](key.encode('UTF-8'), item.encode('UTF-8')))

    @staticmethod
    cdef create(shared_ptr[cmap[string,string]] c_items):
        inst = <Map__string_string>Map__string_string.__new__(Map__string_string)
        inst._map = c_items
        return inst

    def __getitem__(self, str key):
        cdef string ckey = key.encode('UTF-8')
        cdef string citem = deref(self._map)[ckey]
        return citem.decode()

    def __len__(self):
        return deref(self._map).size()

    def __iter__(self):
        cdef string citem
        for pair in deref(self._map):
            citem = pair.first
            yield citem.decode()

Mapping.register(Map__string_string)

cdef class Map__string_SimpleStruct:
    def __init__(self, items=None):

        self._map = make_shared[cmap[string,py3.module_types.cSimpleStruct]]()
        if items:
            for key, item in items.items():
                deref(self._map).insert(cpair[string,py3.module_types.cSimpleStruct](key.encode('UTF-8'), deref((<py3.module_types.SimpleStruct> item).c_SimpleStruct)))

    @staticmethod
    cdef create(shared_ptr[cmap[string,py3.module_types.cSimpleStruct]] c_items):
        inst = <Map__string_SimpleStruct>Map__string_SimpleStruct.__new__(Map__string_SimpleStruct)
        inst._map = c_items
        return inst

    def __getitem__(self, str key):
        cdef string ckey = key.encode('UTF-8')
        cdef py3.module_types.cSimpleStruct citem = deref(self._map)[ckey]
        return py3.module_types.SimpleStruct.create(make_shared[py3.module_types.cSimpleStruct](citem))

    def __len__(self):
        return deref(self._map).size()

    def __iter__(self):
        cdef string citem
        for pair in deref(self._map):
            citem = pair.first
            yield citem.decode()

Mapping.register(Map__string_SimpleStruct)

cdef class Map__string_i16:
    def __init__(self, items=None):

        self._map = make_shared[cmap[string,int16_t]]()
        if items:
            for key, item in items.items():
                deref(self._map).insert(cpair[string,int16_t](key.encode('UTF-8'), item))

    @staticmethod
    cdef create(shared_ptr[cmap[string,int16_t]] c_items):
        inst = <Map__string_i16>Map__string_i16.__new__(Map__string_i16)
        inst._map = c_items
        return inst

    def __getitem__(self, str key):
        cdef string ckey = key.encode('UTF-8')
        cdef int16_t citem = deref(self._map)[ckey]
        return citem

    def __len__(self):
        return deref(self._map).size()

    def __iter__(self):
        cdef string citem
        for pair in deref(self._map):
            citem = pair.first
            yield citem.decode()

Mapping.register(Map__string_i16)

cdef class List__List__i32:
    def __init__(self, items=None):
        self._vector = make_shared[vector[vector[int32_t]]]()
        if items:
            for item in items:
                deref(self._vector).push_back(vector[int32_t](deref(List__i32(item)._vector)))

    @staticmethod
    cdef create(shared_ptr[vector[vector[int32_t]]] c_items):
        inst = <List__List__i32>List__List__i32.__new__(List__List__i32)
        inst._vector = c_items
        return inst

    def __getitem__(self, int index):
        cdef vector[int32_t] citem = deref(self._vector).at(index)
        return List__i32.create(make_shared[vector[int32_t]](citem))

    def __len__(self):
        return deref(self._vector).size()

Sequence.register(List__List__i32)

cdef class Map__string_i32:
    def __init__(self, items=None):

        self._map = make_shared[cmap[string,int32_t]]()
        if items:
            for key, item in items.items():
                deref(self._map).insert(cpair[string,int32_t](key.encode('UTF-8'), item))

    @staticmethod
    cdef create(shared_ptr[cmap[string,int32_t]] c_items):
        inst = <Map__string_i32>Map__string_i32.__new__(Map__string_i32)
        inst._map = c_items
        return inst

    def __getitem__(self, str key):
        cdef string ckey = key.encode('UTF-8')
        cdef int32_t citem = deref(self._map)[ckey]
        return citem

    def __len__(self):
        return deref(self._map).size()

    def __iter__(self):
        cdef string citem
        for pair in deref(self._map):
            citem = pair.first
            yield citem.decode()

Mapping.register(Map__string_i32)

cdef class Map__string_Map__string_i32:
    def __init__(self, items=None):

        self._map = make_shared[cmap[string,cmap[string,int32_t]]]()
        if items:
            for key, item in items.items():
                deref(self._map).insert(cpair[string,cmap[string,int32_t]](key.encode('UTF-8'), cmap[string,int32_t](deref(Map__string_i32(item)._map))))

    @staticmethod
    cdef create(shared_ptr[cmap[string,cmap[string,int32_t]]] c_items):
        inst = <Map__string_Map__string_i32>Map__string_Map__string_i32.__new__(Map__string_Map__string_i32)
        inst._map = c_items
        return inst

    def __getitem__(self, str key):
        cdef string ckey = key.encode('UTF-8')
        cdef cmap[string,int32_t] citem = deref(self._map)[ckey]
        return Map__string_i32.create(make_shared[cmap[string,int32_t]](citem))

    def __len__(self):
        return deref(self._map).size()

    def __iter__(self):
        cdef string citem
        for pair in deref(self._map):
            citem = pair.first
            yield citem.decode()

Mapping.register(Map__string_Map__string_i32)

cdef class List__Set__string:
    def __init__(self, items=None):
        self._vector = make_shared[vector[cset[string]]]()
        if items:
            for item in items:
                deref(self._vector).push_back(cset[string](deref(Set__string(item)._set)))

    @staticmethod
    cdef create(shared_ptr[vector[cset[string]]] c_items):
        inst = <List__Set__string>List__Set__string.__new__(List__Set__string)
        inst._vector = c_items
        return inst

    def __getitem__(self, int index):
        cdef cset[string] citem = deref(self._vector).at(index)
        return Set__string.create(make_shared[cset[string]](citem))

    def __len__(self):
        return deref(self._vector).size()

Sequence.register(List__Set__string)

cdef class Map__string_List__SimpleStruct:
    def __init__(self, items=None):

        self._map = make_shared[cmap[string,vector[py3.module_types.cSimpleStruct]]]()
        if items:
            for key, item in items.items():
                deref(self._map).insert(cpair[string,vector[py3.module_types.cSimpleStruct]](key.encode('UTF-8'), vector[py3.module_types.cSimpleStruct](deref(List__SimpleStruct(item)._vector))))

    @staticmethod
    cdef create(shared_ptr[cmap[string,vector[py3.module_types.cSimpleStruct]]] c_items):
        inst = <Map__string_List__SimpleStruct>Map__string_List__SimpleStruct.__new__(Map__string_List__SimpleStruct)
        inst._map = c_items
        return inst

    def __getitem__(self, str key):
        cdef string ckey = key.encode('UTF-8')
        cdef vector[py3.module_types.cSimpleStruct] citem = deref(self._map)[ckey]
        return List__SimpleStruct.create(make_shared[vector[py3.module_types.cSimpleStruct]](citem))

    def __len__(self):
        return deref(self._map).size()

    def __iter__(self):
        cdef string citem
        for pair in deref(self._map):
            citem = pair.first
            yield citem.decode()

Mapping.register(Map__string_List__SimpleStruct)

cdef class List__List__string:
    def __init__(self, items=None):
        self._vector = make_shared[vector[vector[string]]]()
        if items:
            for item in items:
                deref(self._vector).push_back(vector[string](deref(List__string(item)._vector)))

    @staticmethod
    cdef create(shared_ptr[vector[vector[string]]] c_items):
        inst = <List__List__string>List__List__string.__new__(List__List__string)
        inst._vector = c_items
        return inst

    def __getitem__(self, int index):
        cdef vector[string] citem = deref(self._vector).at(index)
        return List__string.create(make_shared[vector[string]](citem))

    def __len__(self):
        return deref(self._vector).size()

Sequence.register(List__List__string)

cdef class List__Set__i32:
    def __init__(self, items=None):
        self._vector = make_shared[vector[cset[int32_t]]]()
        if items:
            for item in items:
                deref(self._vector).push_back(cset[int32_t](deref(Set__i32(item)._set)))

    @staticmethod
    cdef create(shared_ptr[vector[cset[int32_t]]] c_items):
        inst = <List__Set__i32>List__Set__i32.__new__(List__Set__i32)
        inst._vector = c_items
        return inst

    def __getitem__(self, int index):
        cdef cset[int32_t] citem = deref(self._vector).at(index)
        return Set__i32.create(make_shared[cset[int32_t]](citem))

    def __len__(self):
        return deref(self._vector).size()

Sequence.register(List__Set__i32)

cdef class List__Map__string_string:
    def __init__(self, items=None):
        self._vector = make_shared[vector[cmap[string,string]]]()
        if items:
            for item in items:
                deref(self._vector).push_back(cmap[string,string](deref(Map__string_string(item)._map)))

    @staticmethod
    cdef create(shared_ptr[vector[cmap[string,string]]] c_items):
        inst = <List__Map__string_string>List__Map__string_string.__new__(List__Map__string_string)
        inst._vector = c_items
        return inst

    def __getitem__(self, int index):
        cdef cmap[string,string] citem = deref(self._vector).at(index)
        return Map__string_string.create(make_shared[cmap[string,string]](citem))

    def __len__(self):
        return deref(self._vector).size()

Sequence.register(List__Map__string_string)

cdef class Map__i32_double:
    def __init__(self, items=None):

        self._map = make_shared[cmap[int32_t,double]]()
        if items:
            for key, item in items.items():
                deref(self._map).insert(cpair[int32_t,double](key, item))

    @staticmethod
    cdef create(shared_ptr[cmap[int32_t,double]] c_items):
        inst = <Map__i32_double>Map__i32_double.__new__(Map__i32_double)
        inst._map = c_items
        return inst

    def __getitem__(self, int key):
        cdef int32_t ckey = key
        cdef double citem = deref(self._map)[ckey]
        return citem

    def __len__(self):
        return deref(self._map).size()

    def __iter__(self):
        cdef int32_t citem
        for pair in deref(self._map):
            citem = pair.first
            yield citem

Mapping.register(Map__i32_double)

cdef class List__Map__i32_double:
    def __init__(self, items=None):
        self._vector = make_shared[vector[cmap[int32_t,double]]]()
        if items:
            for item in items:
                deref(self._vector).push_back(cmap[int32_t,double](deref(Map__i32_double(item)._map)))

    @staticmethod
    cdef create(shared_ptr[vector[cmap[int32_t,double]]] c_items):
        inst = <List__Map__i32_double>List__Map__i32_double.__new__(List__Map__i32_double)
        inst._vector = c_items
        return inst

    def __getitem__(self, int index):
        cdef cmap[int32_t,double] citem = deref(self._vector).at(index)
        return Map__i32_double.create(make_shared[cmap[int32_t,double]](citem))

    def __len__(self):
        return deref(self._vector).size()

Sequence.register(List__Map__i32_double)


A_BOOL = True
A_BYTE = 8
THE_ANSWER = 42
A_NUMBER = 84
A_BIG_NUMBER = 102
A_REAL_NUMBER = 3.140000
A_FAKE_NUMBER = 3.0
A_WORD = cA_WORD().decode('UTF-8')
A_STRUCT = SimpleStruct.create(make_shared[cSimpleStruct](cA_STRUCT()))
WORD_LIST = List__string.create(make_shared[vector[string]](cWORD_LIST()))
SOME_MAP = List__Map__i32_double.create(make_shared[vector[cmap[int32_t,double]]](cSOME_MAP()))
DIGITS = Set__i32.create(make_shared[cset[int32_t]](cDIGITS()))
A_CONST_MAP = Map__string_SimpleStruct.create(make_shared[cmap[string,py3.module_types.cSimpleStruct]](cA_CONST_MAP()))
