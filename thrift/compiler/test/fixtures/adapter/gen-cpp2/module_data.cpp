/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<::cpp2::Baz::Type, 4> TEnumDataStorage<::cpp2::Baz::Type>::values = {{
  type::intField,
  type::setField,
  type::mapField,
  type::binaryField,
}};
const std::array<folly::StringPiece, 4> TEnumDataStorage<::cpp2::Baz::Type>::names = {{
  "intField",
  "setField",
  "mapField",
  "binaryField",
}};

const std::array<folly::StringPiece, 8> TStructDataStorage<::cpp2::Foo>::fields_names = {{
  "intField",
  "optionalIntField",
  "intFieldWithDefault",
  "setField",
  "optionalSetField",
  "mapField",
  "optionalMapField",
  "binaryField",
}};
const std::array<int16_t, 8> TStructDataStorage<::cpp2::Foo>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
}};
const std::array<protocol::TType, 8> TStructDataStorage<::cpp2::Foo>::fields_types = {{
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_SET,
  TType::T_SET,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_STRING,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::cpp2::Baz>::fields_names = {{
  "intField",
  "setField",
  "mapField",
  "binaryField",
}};
const std::array<int16_t, 4> TStructDataStorage<::cpp2::Baz>::fields_ids = {{
  1,
  4,
  6,
  8,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::cpp2::Baz>::fields_types = {{
  TType::T_I32,
  TType::T_SET,
  TType::T_MAP,
  TType::T_STRING,
}};

const std::array<folly::StringPiece, 6> TStructDataStorage<::cpp2::Bar>::fields_names = {{
  "structField",
  "optionalStructField",
  "structListField",
  "optionalStructListField",
  "unionField",
  "optionalUnionField",
}};
const std::array<int16_t, 6> TStructDataStorage<::cpp2::Bar>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
}};
const std::array<protocol::TType, 6> TStructDataStorage<::cpp2::Bar>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};

} // namespace thrift
} // namespace apache
