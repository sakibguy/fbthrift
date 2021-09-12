/**
 * Autogenerated by Thrift for src/enums.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/enums_metadata.h"

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);

void EnumMetadata<::facebook::ns::qwerty::AnEnumA>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums_ref()->emplace("enums.AnEnumA", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name_ref() = "enums.AnEnumA";
  using EnumTraits = TEnumTraits<::facebook::ns::qwerty::AnEnumA>;
  for (std::size_t i = 0; i < EnumTraits::size; ++i) {
    enum_metadata.elements_ref()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}
void EnumMetadata<::facebook::ns::qwerty::AnEnumB>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums_ref()->emplace("enums.AnEnumB", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name_ref() = "enums.AnEnumB";
  using EnumTraits = TEnumTraits<::facebook::ns::qwerty::AnEnumB>;
  for (std::size_t i = 0; i < EnumTraits::size; ++i) {
    enum_metadata.elements_ref()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}
void EnumMetadata<::facebook::ns::qwerty::AnEnumC>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums_ref()->emplace("enums.AnEnumC", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name_ref() = "enums.AnEnumC";
  using EnumTraits = TEnumTraits<::facebook::ns::qwerty::AnEnumC>;
  for (std::size_t i = 0; i < EnumTraits::size; ++i) {
    enum_metadata.elements_ref()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}
void EnumMetadata<::facebook::ns::qwerty::AnEnumD>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums_ref()->emplace("enums.AnEnumD", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name_ref() = "enums.AnEnumD";
  using EnumTraits = TEnumTraits<::facebook::ns::qwerty::AnEnumD>;
  for (std::size_t i = 0; i < EnumTraits::size; ++i) {
    enum_metadata.elements_ref()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}
void EnumMetadata<::facebook::ns::qwerty::AnEnumE>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums_ref()->emplace("enums.AnEnumE", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name_ref() = "enums.AnEnumE";
  using EnumTraits = TEnumTraits<::facebook::ns::qwerty::AnEnumE>;
  for (std::size_t i = 0; i < EnumTraits::size; ++i) {
    enum_metadata.elements_ref()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}

const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::facebook::ns::qwerty::SomeStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("enums.SomeStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& enums_SomeStruct = res.first->second;
  enums_SomeStruct.name_ref() = "enums.SomeStruct";
  enums_SomeStruct.is_union_ref() = false;
  static const EncodedThriftField
  enums_SomeStruct_fields[] = {
    {1, "fieldA", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : enums_SomeStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    enums_SomeStruct.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
