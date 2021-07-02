/**
 * Autogenerated by Thrift for src/simple.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/lazy_deserialization/gen-cpp2/simple_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<folly::StringPiece, 4> TStructDataStorage<::apache::thrift::test::Foo>::fields_names = {{
  "field1",
  "field2",
  "field3",
  "field4",
}};
const std::array<int16_t, 4> TStructDataStorage<::apache::thrift::test::Foo>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::apache::thrift::test::Foo>::fields_types = {{
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::apache::thrift::test::LazyFoo>::fields_names = {{
  "field1",
  "field2",
  "field3",
  "field4",
}};
const std::array<int16_t, 4> TStructDataStorage<::apache::thrift::test::LazyFoo>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::apache::thrift::test::LazyFoo>::fields_types = {{
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::apache::thrift::test::OptionalFoo>::fields_names = {{
  "field1",
  "field2",
  "field3",
  "field4",
}};
const std::array<int16_t, 4> TStructDataStorage<::apache::thrift::test::OptionalFoo>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::apache::thrift::test::OptionalFoo>::fields_types = {{
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::apache::thrift::test::OptionalLazyFoo>::fields_names = {{
  "field1",
  "field2",
  "field3",
  "field4",
}};
const std::array<int16_t, 4> TStructDataStorage<::apache::thrift::test::OptionalLazyFoo>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::apache::thrift::test::OptionalLazyFoo>::fields_types = {{
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
}};

const std::array<folly::StringPiece, 3> TStructDataStorage<::apache::thrift::test::LazyCppRef>::fields_names = {{
  "field1",
  "field2",
  "field3",
}};
const std::array<int16_t, 3> TStructDataStorage<::apache::thrift::test::LazyCppRef>::fields_ids = {{
  1,
  2,
  3,
}};
const std::array<protocol::TType, 3> TStructDataStorage<::apache::thrift::test::LazyCppRef>::fields_types = {{
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
}};

const std::array<folly::StringPiece, 6> TStructDataStorage<::apache::thrift::test::IndexedFoo>::fields_names = {{
  "serialized_data_size",
  "field1",
  "field2",
  "field3",
  "field4",
  "field_id_to_size",
}};
const std::array<int16_t, 6> TStructDataStorage<::apache::thrift::test::IndexedFoo>::fields_ids = {{
  100,
  1,
  2,
  3,
  4,
  101,
}};
const std::array<protocol::TType, 6> TStructDataStorage<::apache::thrift::test::IndexedFoo>::fields_types = {{
  TType::T_DOUBLE,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_MAP,
}};

const std::array<folly::StringPiece, 6> TStructDataStorage<::apache::thrift::test::OptionalIndexedFoo>::fields_names = {{
  "serialized_data_size",
  "field1",
  "field2",
  "field3",
  "field4",
  "field_id_to_size",
}};
const std::array<int16_t, 6> TStructDataStorage<::apache::thrift::test::OptionalIndexedFoo>::fields_ids = {{
  100,
  1,
  2,
  3,
  4,
  101,
}};
const std::array<protocol::TType, 6> TStructDataStorage<::apache::thrift::test::OptionalIndexedFoo>::fields_types = {{
  TType::T_DOUBLE,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_LIST,
  TType::T_MAP,
}};

const std::array<folly::StringPiece, 0> TStructDataStorage<::apache::thrift::test::Empty>::fields_names = {{
}};
const std::array<int16_t, 0> TStructDataStorage<::apache::thrift::test::Empty>::fields_ids = {{
}};
const std::array<protocol::TType, 0> TStructDataStorage<::apache::thrift::test::Empty>::fields_types = {{
}};

} // namespace thrift
} // namespace apache
