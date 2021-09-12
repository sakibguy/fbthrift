/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<::test_cpp2::cpp_reflection::enum1, 3> TEnumDataStorage<::test_cpp2::cpp_reflection::enum1>::values = {{
  type::field0,
  type::field1,
  type::field2,
}};
const std::array<folly::StringPiece, 3> TEnumDataStorage<::test_cpp2::cpp_reflection::enum1>::names = {{
  "field0",
  "field1",
  "field2",
}};

const std::array<::test_cpp2::cpp_reflection::enum2, 3> TEnumDataStorage<::test_cpp2::cpp_reflection::enum2>::values = {{
  type::field0_2,
  type::field1_2,
  type::field2_2,
}};
const std::array<folly::StringPiece, 3> TEnumDataStorage<::test_cpp2::cpp_reflection::enum2>::names = {{
  "field0_2",
  "field1_2",
  "field2_2",
}};

const std::array<::test_cpp2::cpp_reflection::enum3, 2> TEnumDataStorage<::test_cpp2::cpp_reflection::enum3>::values = {{
  type::field0_3,
  type::field1_3,
}};
const std::array<folly::StringPiece, 2> TEnumDataStorage<::test_cpp2::cpp_reflection::enum3>::names = {{
  "field0_3",
  "field1_3",
}};

const std::array<::test_cpp2::cpp_reflection::enum_with_special_names, 28> TEnumDataStorage<::test_cpp2::cpp_reflection::enum_with_special_names>::values = {{
  type::get,
  type::getter,
  type::lists,
  type::maps,
  type::name,
  type::name_to_value,
  type::names,
  type::prefix_tree,
  type::sets,
  type::setter,
  type::str,
  type::strings,
  type::type,
  type::value,
  type::value_to_name,
  type::values,
  type::id,
  type::ids,
  type::descriptor,
  type::descriptors,
  type::key,
  type::keys,
  type::annotation,
  type::annotations,
  type::member,
  type::members,
  type::field,
  type::fields,
}};
const std::array<folly::StringPiece, 28> TEnumDataStorage<::test_cpp2::cpp_reflection::enum_with_special_names>::names = {{
  "get",
  "getter",
  "lists",
  "maps",
  "name",
  "name_to_value",
  "names",
  "prefix_tree",
  "sets",
  "setter",
  "str",
  "strings",
  "type",
  "value",
  "value_to_name",
  "values",
  "id",
  "ids",
  "descriptor",
  "descriptors",
  "key",
  "keys",
  "annotation",
  "annotations",
  "member",
  "members",
  "field",
  "fields",
}};

const std::array<::test_cpp2::cpp_reflection::union1::Type, 4> TEnumDataStorage<::test_cpp2::cpp_reflection::union1::Type>::values = {{
  type::ui,
  type::ud,
  type::us,
  type::ue,
}};
const std::array<folly::StringPiece, 4> TEnumDataStorage<::test_cpp2::cpp_reflection::union1::Type>::names = {{
  "ui",
  "ud",
  "us",
  "ue",
}};

const std::array<::test_cpp2::cpp_reflection::union2::Type, 4> TEnumDataStorage<::test_cpp2::cpp_reflection::union2::Type>::values = {{
  type::ui_2,
  type::ud_2,
  type::us_2,
  type::ue_2,
}};
const std::array<folly::StringPiece, 4> TEnumDataStorage<::test_cpp2::cpp_reflection::union2::Type>::names = {{
  "ui_2",
  "ud_2",
  "us_2",
  "ue_2",
}};

const std::array<::test_cpp2::cpp_reflection::union3::Type, 4> TEnumDataStorage<::test_cpp2::cpp_reflection::union3::Type>::values = {{
  type::ui_3,
  type::ud_3,
  type::us_3,
  type::ue_3,
}};
const std::array<folly::StringPiece, 4> TEnumDataStorage<::test_cpp2::cpp_reflection::union3::Type>::names = {{
  "ui_3",
  "ud_3",
  "us_3",
  "ue_3",
}};

const std::array<::test_cpp2::cpp_reflection::unionA::Type, 5> TEnumDataStorage<::test_cpp2::cpp_reflection::unionA::Type>::values = {{
  type::i,
  type::d,
  type::s,
  type::e,
  type::a,
}};
const std::array<folly::StringPiece, 5> TEnumDataStorage<::test_cpp2::cpp_reflection::unionA::Type>::names = {{
  "i",
  "d",
  "s",
  "e",
  "a",
}};

const std::array<::test_cpp2::cpp_reflection::union_with_special_names::Type, 28> TEnumDataStorage<::test_cpp2::cpp_reflection::union_with_special_names::Type>::values = {{
  type::get,
  type::getter,
  type::lists,
  type::maps,
  type::name,
  type::name_to_value,
  type::names,
  type::prefix_tree,
  type::sets,
  type::setter,
  type::str,
  type::strings,
  type::type,
  type::value,
  type::value_to_name,
  type::values,
  type::id,
  type::ids,
  type::descriptor,
  type::descriptors,
  type::key,
  type::keys,
  type::annotation,
  type::annotations,
  type::member,
  type::members,
  type::field,
  type::fields,
}};
const std::array<folly::StringPiece, 28> TEnumDataStorage<::test_cpp2::cpp_reflection::union_with_special_names::Type>::names = {{
  "get",
  "getter",
  "lists",
  "maps",
  "name",
  "name_to_value",
  "names",
  "prefix_tree",
  "sets",
  "setter",
  "str",
  "strings",
  "type",
  "value",
  "value_to_name",
  "values",
  "id",
  "ids",
  "descriptor",
  "descriptors",
  "key",
  "keys",
  "annotation",
  "annotations",
  "member",
  "members",
  "field",
  "fields",
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::test_cpp2::cpp_reflection::union1>::fields_names = {{
  "ui",
  "ud",
  "us",
  "ue",
}};
const std::array<int16_t, 4> TStructDataStorage<::test_cpp2::cpp_reflection::union1>::fields_ids = {{
  1,
  3,
  5,
  7,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::test_cpp2::cpp_reflection::union1>::fields_types = {{
  TType::T_I32,
  TType::T_DOUBLE,
  TType::T_STRING,
  TType::T_I32,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::test_cpp2::cpp_reflection::union2>::fields_names = {{
  "ui_2",
  "ud_2",
  "us_2",
  "ue_2",
}};
const std::array<int16_t, 4> TStructDataStorage<::test_cpp2::cpp_reflection::union2>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::test_cpp2::cpp_reflection::union2>::fields_types = {{
  TType::T_I32,
  TType::T_DOUBLE,
  TType::T_STRING,
  TType::T_I32,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::test_cpp2::cpp_reflection::union3>::fields_names = {{
  "ui_3",
  "ud_3",
  "us_3",
  "ue_3",
}};
const std::array<int16_t, 4> TStructDataStorage<::test_cpp2::cpp_reflection::union3>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::test_cpp2::cpp_reflection::union3>::fields_types = {{
  TType::T_I32,
  TType::T_DOUBLE,
  TType::T_STRING,
  TType::T_I32,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::test_cpp2::cpp_reflection::structA>::fields_names = {{
  "a",
  "b",
}};
const std::array<int16_t, 2> TStructDataStorage<::test_cpp2::cpp_reflection::structA>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::test_cpp2::cpp_reflection::structA>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
}};

const std::array<folly::StringPiece, 5> TStructDataStorage<::test_cpp2::cpp_reflection::unionA>::fields_names = {{
  "i",
  "d",
  "s",
  "e",
  "a",
}};
const std::array<int16_t, 5> TStructDataStorage<::test_cpp2::cpp_reflection::unionA>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
}};
const std::array<protocol::TType, 5> TStructDataStorage<::test_cpp2::cpp_reflection::unionA>::fields_types = {{
  TType::T_I32,
  TType::T_DOUBLE,
  TType::T_STRING,
  TType::T_I32,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::test_cpp2::cpp_reflection::structB>::fields_names = {{
  "c",
  "d",
}};
const std::array<int16_t, 2> TStructDataStorage<::test_cpp2::cpp_reflection::structB>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::test_cpp2::cpp_reflection::structB>::fields_types = {{
  TType::T_DOUBLE,
  TType::T_BOOL,
}};

const std::array<folly::StringPiece, 30> TStructDataStorage<::test_cpp2::cpp_reflection::structC>::fields_names = {{
  "a",
  "b",
  "c",
  "d",
  "e",
  "f",
  "g",
  "h",
  "i",
  "j",
  "j1",
  "j2",
  "j3",
  "k",
  "k1",
  "k2",
  "k3",
  "l",
  "l1",
  "l2",
  "l3",
  "m1",
  "m2",
  "m3",
  "n1",
  "n2",
  "n3",
  "o1",
  "o2",
  "o3",
}};
const std::array<int16_t, 30> TStructDataStorage<::test_cpp2::cpp_reflection::structC>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
}};
const std::array<protocol::TType, 30> TStructDataStorage<::test_cpp2::cpp_reflection::structC>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
  TType::T_DOUBLE,
  TType::T_BOOL,
  TType::T_I32,
  TType::T_I32,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_SET,
  TType::T_SET,
  TType::T_SET,
  TType::T_SET,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
}};

const std::array<folly::StringPiece, 6> TStructDataStorage<::test_cpp2::cpp_reflection::struct1>::fields_names = {{
  "field0",
  "field1",
  "field2",
  "field3",
  "field4",
  "field5",
}};
const std::array<int16_t, 6> TStructDataStorage<::test_cpp2::cpp_reflection::struct1>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
}};
const std::array<protocol::TType, 6> TStructDataStorage<::test_cpp2::cpp_reflection::struct1>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
  TType::T_I32,
  TType::T_I32,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 7> TStructDataStorage<::test_cpp2::cpp_reflection::struct2>::fields_names = {{
  "fieldA",
  "fieldB",
  "fieldC",
  "fieldD",
  "fieldE",
  "fieldF",
  "fieldG",
}};
const std::array<int16_t, 7> TStructDataStorage<::test_cpp2::cpp_reflection::struct2>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
  7,
}};
const std::array<protocol::TType, 7> TStructDataStorage<::test_cpp2::cpp_reflection::struct2>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
  TType::T_I32,
  TType::T_I32,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 18> TStructDataStorage<::test_cpp2::cpp_reflection::struct3>::fields_names = {{
  "fieldA",
  "fieldB",
  "fieldC",
  "fieldD",
  "fieldE",
  "fieldF",
  "fieldG",
  "fieldH",
  "fieldI",
  "fieldJ",
  "fieldK",
  "fieldL",
  "fieldM",
  "fieldN",
  "fieldO",
  "fieldP",
  "fieldQ",
  "fieldR",
}};
const std::array<int16_t, 18> TStructDataStorage<::test_cpp2::cpp_reflection::struct3>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
}};
const std::array<protocol::TType, 18> TStructDataStorage<::test_cpp2::cpp_reflection::struct3>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
  TType::T_I32,
  TType::T_I32,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_SET,
  TType::T_SET,
  TType::T_SET,
  TType::T_SET,
  TType::T_MAP,
  TType::T_MAP,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::test_cpp2::cpp_reflection::struct4>::fields_names = {{
  "field0",
  "field1",
  "field2",
  "field3",
}};
const std::array<int16_t, 4> TStructDataStorage<::test_cpp2::cpp_reflection::struct4>::fields_ids = {{
  1,
  2,
  3,
  6,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::test_cpp2::cpp_reflection::struct4>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
  TType::T_I32,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 5> TStructDataStorage<::test_cpp2::cpp_reflection::struct5>::fields_names = {{
  "field0",
  "field1",
  "field2",
  "field3",
  "field4",
}};
const std::array<int16_t, 5> TStructDataStorage<::test_cpp2::cpp_reflection::struct5>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
}};
const std::array<protocol::TType, 5> TStructDataStorage<::test_cpp2::cpp_reflection::struct5>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
  TType::T_I32,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::test_cpp2::cpp_reflection::struct_binary>::fields_names = {{
  "bi",
}};
const std::array<int16_t, 1> TStructDataStorage<::test_cpp2::cpp_reflection::struct_binary>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::test_cpp2::cpp_reflection::struct_binary>::fields_types = {{
  TType::T_STRING,
}};

const std::array<folly::StringPiece, 3> TStructDataStorage<::test_cpp2::cpp_reflection::dep_A_struct>::fields_names = {{
  "b",
  "c",
  "i_a",
}};
const std::array<int16_t, 3> TStructDataStorage<::test_cpp2::cpp_reflection::dep_A_struct>::fields_ids = {{
  1,
  2,
  3,
}};
const std::array<protocol::TType, 3> TStructDataStorage<::test_cpp2::cpp_reflection::dep_A_struct>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_I32,
}};

const std::array<folly::StringPiece, 3> TStructDataStorage<::test_cpp2::cpp_reflection::dep_B_struct>::fields_names = {{
  "b",
  "c",
  "i_a",
}};
const std::array<int16_t, 3> TStructDataStorage<::test_cpp2::cpp_reflection::dep_B_struct>::fields_ids = {{
  1,
  2,
  3,
}};
const std::array<protocol::TType, 3> TStructDataStorage<::test_cpp2::cpp_reflection::dep_B_struct>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_I32,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::test_cpp2::cpp_reflection::annotated>::fields_names = {{
  "a",
}};
const std::array<int16_t, 1> TStructDataStorage<::test_cpp2::cpp_reflection::annotated>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::test_cpp2::cpp_reflection::annotated>::fields_types = {{
  TType::T_I32,
}};

const std::array<folly::StringPiece, 28> TStructDataStorage<::test_cpp2::cpp_reflection::union_with_special_names>::fields_names = {{
  "get",
  "getter",
  "lists",
  "maps",
  "name",
  "name_to_value",
  "names",
  "prefix_tree",
  "sets",
  "setter",
  "str",
  "strings",
  "type",
  "value",
  "value_to_name",
  "values",
  "id",
  "ids",
  "descriptor",
  "descriptors",
  "key",
  "keys",
  "annotation",
  "annotations",
  "member",
  "members",
  "field",
  "fields",
}};
const std::array<int16_t, 28> TStructDataStorage<::test_cpp2::cpp_reflection::union_with_special_names>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
}};
const std::array<protocol::TType, 28> TStructDataStorage<::test_cpp2::cpp_reflection::union_with_special_names>::fields_types = {{
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
}};

const std::array<folly::StringPiece, 28> TStructDataStorage<::test_cpp2::cpp_reflection::struct_with_special_names>::fields_names = {{
  "get",
  "getter",
  "lists",
  "maps",
  "name",
  "name_to_value",
  "names",
  "prefix_tree",
  "sets",
  "setter",
  "str",
  "strings",
  "type",
  "value",
  "value_to_name",
  "values",
  "id",
  "ids",
  "descriptor",
  "descriptors",
  "key",
  "keys",
  "annotation",
  "annotations",
  "member",
  "members",
  "field",
  "fields",
}};
const std::array<int16_t, 28> TStructDataStorage<::test_cpp2::cpp_reflection::struct_with_special_names>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
}};
const std::array<protocol::TType, 28> TStructDataStorage<::test_cpp2::cpp_reflection::struct_with_special_names>::fields_types = {{
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
}};

const std::array<folly::StringPiece, 5> TStructDataStorage<::test_cpp2::cpp_reflection::struct_with_indirections>::fields_names = {{
  "real",
  "fake",
  "number",
  "result",
  "phrase",
}};
const std::array<int16_t, 5> TStructDataStorage<::test_cpp2::cpp_reflection::struct_with_indirections>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
}};
const std::array<protocol::TType, 5> TStructDataStorage<::test_cpp2::cpp_reflection::struct_with_indirections>::fields_types = {{
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_STRING,
}};

} // namespace thrift
} // namespace apache
