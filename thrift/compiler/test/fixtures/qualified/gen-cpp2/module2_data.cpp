/**
 * Autogenerated by Thrift for src/module2.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module2_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<folly::StringPiece, 2> TStructDataStorage<::module2::Struct>::fields_names = {{
  "first",
  "second",
}};
const std::array<int16_t, 2> TStructDataStorage<::module2::Struct>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::module2::Struct>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::module2::BigStruct>::fields_names = {{
  "s",
  "id",
}};
const std::array<int16_t, 2> TStructDataStorage<::module2::BigStruct>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::module2::BigStruct>::fields_types = {{
  TType::T_STRUCT,
  TType::T_I32,
}};

} // namespace thrift
} // namespace apache
