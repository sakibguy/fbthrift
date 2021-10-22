#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


import folly.iobuf as _fbthrift_iobuf

from thrift.py3.reflection cimport (
    NumberType as __NumberType,
    StructType as __StructType,
    Qualifier as __Qualifier,
)

cimport facebook.thrift.annotation.cpp.cpp.types as _facebook_thrift_annotation_cpp_cpp_types

cimport module.types as _module_types

from thrift.py3.types cimport (
    constant_shared_ptr,
    default_inst,
)


cdef __StructSpec get_reflection__Foo():
    cdef _module_types.Foo defaults = _module_types.Foo.create(
        constant_shared_ptr[_module_types.cFoo](
            default_inst[_module_types.cFoo]()
        )
    )
    cdef __StructSpec spec = __StructSpec.create(
        name="Foo",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec.create(
            id=1,
            name="intField",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec.create(
            id=2,
            name="optionalIntField",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec.create(
            id=3,
            name="intFieldWithDefault",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=defaults.intFieldWithDefault,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec.create(
            id=4,
            name="setField",
            type=_module_types.Set__string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec.create(
            id=5,
            name="optionalSetField",
            type=_module_types.Set__string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec.create(
            id=6,
            name="mapField",
            type=_module_types.Map__string_List__string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec.create(
            id=7,
            name="optionalMapField",
            type=_module_types.Map__string_List__string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec.create(
            id=8,
            name="binaryField",
            type=bytes,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__Baz():
    cdef __StructSpec spec = __StructSpec.create(
        name="Baz",
        kind=__StructType.UNION,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec.create(
            id=1,
            name="intField",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec.create(
            id=4,
            name="setField",
            type=_module_types.Set__string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec.create(
            id=6,
            name="mapField",
            type=_module_types.Map__string_List__string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec.create(
            id=8,
            name="binaryField",
            type=bytes,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__Bar():
    cdef _module_types.Bar defaults = _module_types.Bar.create(
        constant_shared_ptr[_module_types.cBar](
            default_inst[_module_types.cBar]()
        )
    )
    cdef __StructSpec spec = __StructSpec.create(
        name="Bar",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec.create(
            id=1,
            name="structField",
            type=_module_types.Foo,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec.create(
            id=2,
            name="optionalStructField",
            type=_module_types.Foo,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec.create(
            id=3,
            name="structListField",
            type=_module_types.List__Foo,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec.create(
            id=4,
            name="optionalStructListField",
            type=_module_types.List__Foo,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec.create(
            id=5,
            name="unionField",
            type=_module_types.Baz,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec.create(
            id=6,
            name="optionalUnionField",
            type=_module_types.Baz,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__StructWithFieldAdapter():
    cdef _module_types.StructWithFieldAdapter defaults = _module_types.StructWithFieldAdapter.create(
        constant_shared_ptr[_module_types.cStructWithFieldAdapter](
            default_inst[_module_types.cStructWithFieldAdapter]()
        )
    )
    cdef __StructSpec spec = __StructSpec.create(
        name="StructWithFieldAdapter",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec.create(
            id=1,
            name="field",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __SetSpec get_reflection__Set__string():
    return __SetSpec.create(
        value=str,
        kind=__NumberType.NOT_A_NUMBER,
     )

cdef __ListSpec get_reflection__List__string():
    return __ListSpec.create(
        value=str,
        kind=__NumberType.NOT_A_NUMBER,
    )

cdef __MapSpec get_reflection__Map__string_List__string():
    return __MapSpec.create(
        key=str,
        key_kind=__NumberType.NOT_A_NUMBER,
        value=_module_types.List__string,
        value_kind=__NumberType.NOT_A_NUMBER,
    )

cdef __ListSpec get_reflection__List__Foo():
    return __ListSpec.create(
        value=_module_types.Foo,
        kind=__NumberType.NOT_A_NUMBER,
    )

