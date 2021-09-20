/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <folly/Random.h>
#include <folly/portability/GTest.h>
#include <thrift/lib/cpp2/protocol/detail/index.h>
#include <thrift/lib/cpp2/reflection/testing.h>
#include <thrift/test/lazy_deserialization/MemberAccessor.h>
#include <thrift/test/lazy_deserialization/common.h>
#include <thrift/test/lazy_deserialization/gen-cpp2/simple_constants.h>
#include <thrift/test/lazy_deserialization/gen-cpp2/simple_fatal_all.h>
#include <thrift/test/lazy_deserialization/gen-cpp2/terse_writes_fatal_all.h>

namespace apache::thrift::test {

const int64_t kRandomValue = 1234512345;

// Represent the field header and actual field data in serialized data
struct FieldToken {
  std::string header, value;
  size_t size() const { return header.size() + value.size(); }
};

// Merge field tokens back to serialized data
std::string merge(const std::vector<FieldToken>& tokens) {
  std::string serializedData;
  for (auto&& i : tokens) {
    serializedData += i.header;
    serializedData += i.value;
  }
  serializedData += '\x0'; // STOP FIELD
  return serializedData;
}

// Split serialized data into field token
template <class Reader, class Writer>
std::vector<FieldToken> tokenize(
    std::string serializedData, Serializer<Reader, Writer>) {
  std::string name;
  int16_t id;
  TType ftype;
  auto buf = IOBuf::copyBuffer(serializedData);

  Reader reader;
  reader.readStructBegin(name);
  reader.setInput(buf.get());

  std::vector<FieldToken> tokens;
  while (true) {
    auto fieldBegin = reader.getCursor();
    reader.readFieldBegin(name, ftype, id);

    if (ftype == TType::T_STOP) {
      EXPECT_EQ(merge(tokens), serializedData); // Sanity check
      return tokens;
    }

    auto fieldHeaderEnd = reader.getCursor();
    reader.skip(ftype);
    auto fieldEnd = reader.getCursor();

    FieldToken field;
    field.header = fieldBegin.readFixedString(fieldHeaderEnd - fieldBegin);
    field.value = fieldHeaderEnd.readFixedString(fieldEnd - fieldHeaderEnd);
    tokens.push_back(field);
  }
}

template <class Struct, class Reader, class Writer>
std::vector<FieldToken> tokenize(
    const Struct& obj, Serializer<Reader, Writer> ser) {
  return tokenize(ser.template serialize<std::string>(obj), ser);
}

template <class Reader, class Writer>
std::string genFieldHeader(TType type, int16_t id, Serializer<Reader, Writer>) {
  IOBufQueue output;
  Writer writer;
  writer.setOutput(&output);
  writer.writeFieldBegin("", type, id);
  return output.moveAsValue().moveToFbString().toStdString();
}

template <class Reader, class Writer>
std::string writeI64(int64_t i, Serializer<Reader, Writer>) {
  IOBufQueue output;
  Writer writer;
  writer.setOutput(&output);
  writer.writeI64(i);
  return output.moveAsValue().moveToFbString().toStdString();
}

template <class Serializer>
bool cheapToSkipListOfDouble(Serializer) {
  static_assert(
      std::is_same_v<Serializer, BinarySerializer> ||
      std::is_same_v<Serializer, CompactSerializer>);
  return std::is_same_v<Serializer, BinarySerializer>;
}

template <class IndexedStruct, class Serializer>
IndexedStruct genIndexedStruct(Serializer ser) {
  auto obj = gen<IndexedStruct>();
  auto tokens = tokenize(obj, ser);
  obj.serialized_data_size_ref() =
      tokens[2].size() + tokens[3].size() + tokens[4].size() + tokens[5].size();
  if (!cheapToSkipListOfDouble(ser)) {
    // Only add index field if list<double> is not cheap to skip
    obj.field_id_to_size_ref() = {
        {2, tokens[3].value.size()},
        {4, tokens[5].value.size()},
    };
  }
  obj.random_number_ref() = kRandomValue;
  obj.field_id_to_size_ref()[detail::kActualRandomNumberFieldId] = kRandomValue;

  return obj;
}

FBTHRIFT_DEFINE_MEMBER_ACCESSOR(get_field1, LazyFoo, field1);
FBTHRIFT_DEFINE_MEMBER_ACCESSOR(get_field2, LazyFoo, field2);
FBTHRIFT_DEFINE_MEMBER_ACCESSOR(get_field3, LazyFoo, field3);
FBTHRIFT_DEFINE_MEMBER_ACCESSOR(get_field4, LazyFoo, field4);

FBTHRIFT_DEFINE_MEMBER_ACCESSOR(get_field1, OptionalLazyFoo, field1);
FBTHRIFT_DEFINE_MEMBER_ACCESSOR(get_field2, OptionalLazyFoo, field2);
FBTHRIFT_DEFINE_MEMBER_ACCESSOR(get_field3, OptionalLazyFoo, field3);
FBTHRIFT_DEFINE_MEMBER_ACCESSOR(get_field4, OptionalLazyFoo, field4);

FBTHRIFT_DEFINE_MEMBER_ACCESSOR(get_field1, TerseLazyFoo, field1);
FBTHRIFT_DEFINE_MEMBER_ACCESSOR(get_field2, TerseLazyFoo, field2);
FBTHRIFT_DEFINE_MEMBER_ACCESSOR(get_field3, TerseLazyFoo, field3);
FBTHRIFT_DEFINE_MEMBER_ACCESSOR(get_field4, TerseLazyFoo, field4);

FBTHRIFT_DEFINE_MEMBER_ACCESSOR(get_field1, TerseOptionalLazyFoo, field1);
FBTHRIFT_DEFINE_MEMBER_ACCESSOR(get_field2, TerseOptionalLazyFoo, field2);
FBTHRIFT_DEFINE_MEMBER_ACCESSOR(get_field3, TerseOptionalLazyFoo, field3);
FBTHRIFT_DEFINE_MEMBER_ACCESSOR(get_field4, TerseOptionalLazyFoo, field4);

TYPED_TEST(LazyDeserialization, IndexedFooToLazyFoo) {
  using Serializer = typename TypeParam::Serializer;
  using LazyStruct = typename TypeParam::LazyStruct;
  using IndexedStruct = typename TypeParam::IndexedStruct;

  auto indexedFoo = genIndexedStruct<IndexedStruct>(Serializer{});
  auto tokens = tokenize(indexedFoo, Serializer{});

  // Replace header with internal field ids
  tokens[0].header = genFieldHeader(
      detail::kExpectedRandomNumberField.type,
      detail::kExpectedRandomNumberField.id,
      Serializer{});
  tokens[1].header = genFieldHeader(
      detail::kSizeField.type, detail::kSizeField.id, Serializer{});
  tokens.rbegin()->header = genFieldHeader(
      detail::kIndexField.type, detail::kIndexField.id, Serializer{});

  auto lazyFoo = this->template deserialize<LazyStruct>(merge(tokens));

  // field3 and field4 are lazy fields, their deserialization are deferred
  EXPECT_EQ(get_field1(lazyFoo), indexedFoo.field1_ref());
  EXPECT_EQ(get_field2(lazyFoo), indexedFoo.field2_ref());
  EXPECT_TRUE(get_field3(lazyFoo).empty());
  EXPECT_TRUE(get_field4(lazyFoo).empty());

  EXPECT_EQ(lazyFoo.field1_ref(), indexedFoo.field1_ref());
  EXPECT_EQ(lazyFoo.field2_ref(), indexedFoo.field2_ref());
  EXPECT_EQ(lazyFoo.field3_ref(), indexedFoo.field3_ref());
  EXPECT_EQ(lazyFoo.field4_ref(), indexedFoo.field4_ref());

  EXPECT_EQ(get_field1(lazyFoo), indexedFoo.field1_ref());
  EXPECT_EQ(get_field2(lazyFoo), indexedFoo.field2_ref());
  EXPECT_EQ(get_field3(lazyFoo), indexedFoo.field3_ref());
  EXPECT_EQ(get_field4(lazyFoo), indexedFoo.field4_ref());
}

TYPED_TEST(LazyDeserialization, LazyFooToIndexedFoo) {
  using Serializer = typename TypeParam::Serializer;
  using IndexedStruct = typename TypeParam::IndexedStruct;

  auto lazyFoo = this->genLazyStruct();
  auto tokens = tokenize(lazyFoo, Serializer{});

  tokens[0].header = genFieldHeader(
      detail::kExpectedRandomNumberField.type,
      simple_constants::kRandomNumberId(),
      Serializer{});
  tokens[1].header = genFieldHeader(
      detail::kSizeField.type, simple_constants::kSizeId(), Serializer{});
  tokens.rbegin()->header = genFieldHeader(
      detail::kIndexField.type, simple_constants::kIndexId(), Serializer{});

  auto indexedFoo = this->template deserialize<IndexedStruct>(merge(tokens));

  EXPECT_EQ(lazyFoo.field1_ref(), indexedFoo.field1_ref());
  EXPECT_EQ(lazyFoo.field2_ref(), indexedFoo.field2_ref());
  EXPECT_EQ(lazyFoo.field3_ref(), indexedFoo.field3_ref());
  EXPECT_EQ(lazyFoo.field4_ref(), indexedFoo.field4_ref());

  indexedFoo.random_number_ref() = kRandomValue;
  indexedFoo.field_id_to_size_ref()[detail::kActualRandomNumberFieldId] =
      kRandomValue;

  EXPECT_THRIFT_EQ(indexedFoo, genIndexedStruct<IndexedStruct>(Serializer{}));
}

TYPED_TEST(LazyDeserialization, ReadRandomNumber) {
  using Serializer = typename TypeParam::Serializer;
  using LazyStruct = typename TypeParam::LazyStruct;
  using IndexedStruct = typename TypeParam::IndexedStruct;

  auto indexedFoo = genIndexedStruct<IndexedStruct>(Serializer{});
  auto tokens = tokenize(indexedFoo, Serializer{});

  // Replace header with internal field ids
  tokens[0].header = genFieldHeader(
      detail::kExpectedRandomNumberField.type,
      detail::kExpectedRandomNumberField.id,
      Serializer{});
  tokens[1].header = genFieldHeader(
      detail::kSizeField.type, detail::kSizeField.id, Serializer{});
  tokens.rbegin()->header = genFieldHeader(
      detail::kIndexField.type, detail::kIndexField.id, Serializer{});

  {
    // Random number matches
    auto lazyFoo = this->template deserialize<LazyStruct>(merge(tokens));

    EXPECT_TRUE(get_field4(lazyFoo).empty());
    EXPECT_EQ(lazyFoo.field4_ref(), indexedFoo.field4_ref());
  }
  {
    tokens[0].value = writeI64(kRandomValue - 1, Serializer{});
    auto lazyFoo = this->template deserialize<LazyStruct>(merge(tokens));

    // Due to random number mismatch, index won't be used.
    // We only deserialize it lazily if field4 can be skipped cheaply
    EXPECT_EQ(
        get_field4(lazyFoo).empty(), cheapToSkipListOfDouble(Serializer{}));
    EXPECT_EQ(lazyFoo.field4_ref(), indexedFoo.field4_ref());
  }
}

TYPED_TEST(LazyDeserialization, MissingRandomNumberField) {
  using Serializer = typename TypeParam::Serializer;
  using LazyStruct = typename TypeParam::LazyStruct;
  using IndexedStruct = typename TypeParam::IndexedStruct;

  auto indexedFoo = genIndexedStruct<IndexedStruct>(Serializer{});
  auto tokens = tokenize(indexedFoo, Serializer{});

  // Replace header with internal field ids
  tokens[1].header = genFieldHeader(
      detail::kSizeField.type, detail::kSizeField.id, Serializer{});
  tokens.rbegin()->header = genFieldHeader(
      detail::kIndexField.type, detail::kIndexField.id, Serializer{});

  // remove random number field
  tokens.erase(tokens.begin());

  auto lazyFoo = this->template deserialize<LazyStruct>(merge(tokens));

  // TODO: enforce random number after migration
  EXPECT_TRUE(get_field4(lazyFoo).empty());
  EXPECT_EQ(lazyFoo.field4_ref(), indexedFoo.field4_ref());
}

TYPED_TEST(LazyDeserialization, MissingRandomNumberInIndexField) {
  using Serializer = typename TypeParam::Serializer;
  using LazyStruct = typename TypeParam::LazyStruct;
  using IndexedStruct = typename TypeParam::IndexedStruct;

  auto indexedFoo = genIndexedStruct<IndexedStruct>(Serializer{});

  // remove random number from key
  indexedFoo.field_id_to_size_ref()->erase(detail::kActualRandomNumberFieldId);
  auto tokens = tokenize(indexedFoo, Serializer{});

  // Replace header with internal field ids
  tokens[0].header = genFieldHeader(
      detail::kExpectedRandomNumberField.type,
      detail::kExpectedRandomNumberField.id,
      Serializer{});
  tokens[1].header = genFieldHeader(
      detail::kSizeField.type, detail::kSizeField.id, Serializer{});
  tokens.rbegin()->header = genFieldHeader(
      detail::kIndexField.type, detail::kIndexField.id, Serializer{});

  auto lazyFoo = this->template deserialize<LazyStruct>(merge(tokens));

  // If random number is missing in index field, we don't use index
  EXPECT_EQ(get_field4(lazyFoo).empty(), cheapToSkipListOfDouble(Serializer{}));
  EXPECT_EQ(lazyFoo.field4_ref(), indexedFoo.field4_ref());
}

TYPED_TEST(LazyDeserialization, MismatchedRandomNumberInIndexField) {
  using Serializer = typename TypeParam::Serializer;
  using LazyStruct = typename TypeParam::LazyStruct;
  using IndexedStruct = typename TypeParam::IndexedStruct;

  auto indexedFoo = genIndexedStruct<IndexedStruct>(Serializer{});

  // Modify random number so that it doesn't match expected number
  ++indexedFoo.field_id_to_size_ref()[detail::kActualRandomNumberFieldId];
  auto tokens = tokenize(indexedFoo, Serializer{});

  // Replace header with internal field ids
  tokens[0].header = genFieldHeader(
      detail::kExpectedRandomNumberField.type,
      detail::kExpectedRandomNumberField.id,
      Serializer{});
  tokens[1].header = genFieldHeader(
      detail::kSizeField.type, detail::kSizeField.id, Serializer{});
  tokens.rbegin()->header = genFieldHeader(
      detail::kIndexField.type, detail::kIndexField.id, Serializer{});

  auto lazyFoo = this->template deserialize<LazyStruct>(merge(tokens));

  // If random number mismatches, we don't use index
  EXPECT_EQ(get_field4(lazyFoo).empty(), cheapToSkipListOfDouble(Serializer{}));
  EXPECT_EQ(lazyFoo.field4_ref(), indexedFoo.field4_ref());
}
} // namespace apache::thrift::test
