/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/constants/gen-cpp2/module_metadata.h"

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

void EnumMetadata<::cpp2::EmptyEnum>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums_ref()->emplace("module.EmptyEnum", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name_ref() = "module.EmptyEnum";
  using EnumTraits = TEnumTraits<::cpp2::EmptyEnum>;
  for (std::size_t i = 0; i < EnumTraits::size; ++i) {
    enum_metadata.elements_ref()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}
void EnumMetadata<::cpp2::City>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums_ref()->emplace("module.City", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name_ref() = "module.City";
  using EnumTraits = TEnumTraits<::cpp2::City>;
  for (std::size_t i = 0; i < EnumTraits::size; ++i) {
    enum_metadata.elements_ref()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}
void EnumMetadata<::cpp2::Company>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums_ref()->emplace("module.Company", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name_ref() = "module.Company";
  using EnumTraits = TEnumTraits<::cpp2::Company>;
  for (std::size_t i = 0; i < EnumTraits::size; ++i) {
    enum_metadata.elements_ref()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i].str());
  }
}

const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::Internship>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.Internship", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_Internship = res.first->second;
  module_Internship.name_ref() = "module.Internship";
  module_Internship.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_Internship_fields[] = {
    std::make_tuple(1, "weeks", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
    std::make_tuple(2, "title", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(3, "employer", true, std::make_unique<Enum< ::cpp2::Company>>("module.Company")),
  };
  for (const auto& f : module_Internship_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    module_Internship.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::Range>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.Range", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_Range = res.first->second;
  module_Range.name_ref() = "module.Range";
  module_Range.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_Range_fields[] = {
    std::make_tuple(1, "min", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
    std::make_tuple(2, "max", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
  };
  for (const auto& f : module_Range_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    module_Range.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::struct1>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.struct1", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_struct1 = res.first->second;
  module_struct1.name_ref() = "module.struct1";
  module_struct1.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_struct1_fields[] = {
    std::make_tuple(1, "a", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
    std::make_tuple(2, "b", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
  };
  for (const auto& f : module_struct1_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    module_struct1.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::struct2>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.struct2", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_struct2 = res.first->second;
  module_struct2.name_ref() = "module.struct2";
  module_struct2.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_struct2_fields[] = {
    std::make_tuple(1, "a", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
    std::make_tuple(2, "b", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(3, "c", false, std::make_unique<Struct< ::cpp2::struct1>>("module.struct1")),
    std::make_tuple(4, "d", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE))),
  };
  for (const auto& f : module_struct2_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    module_struct2.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::struct3>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.struct3", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_struct3 = res.first->second;
  module_struct3.name_ref() = "module.struct3";
  module_struct3.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_struct3_fields[] = {
    std::make_tuple(1, "a", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE)),
    std::make_tuple(2, "b", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
    std::make_tuple(3, "c", false, std::make_unique<Struct< ::cpp2::struct2>>("module.struct2")),
  };
  for (const auto& f : module_struct3_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    module_struct3.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::struct4>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.struct4", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_struct4 = res.first->second;
  module_struct4.name_ref() = "module.struct4";
  module_struct4.is_union_ref() = false;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_struct4_fields[] = {
    std::make_tuple(1, "a", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
    std::make_tuple(2, "b", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_DOUBLE_TYPE)),
    std::make_tuple(3, "c", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BYTE_TYPE)),
  };
  for (const auto& f : module_struct4_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    module_struct4.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::union1>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.union1", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_union1 = res.first->second;
  module_union1.name_ref() = "module.union1";
  module_union1.is_union_ref() = true;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_union1_fields[] = {
    std::make_tuple(1, "i", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
    std::make_tuple(2, "d", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_DOUBLE_TYPE)),
  };
  for (const auto& f : module_union1_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    module_union1.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::union2>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.union2", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_union2 = res.first->second;
  module_union2.name_ref() = "module.union2";
  module_union2.is_union_ref() = true;
  static const std::tuple<int32_t, const char*, bool, std::unique_ptr<MetadataTypeInterface>>
  module_union2_fields[] = {
    std::make_tuple(1, "i", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE)),
    std::make_tuple(2, "d", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_DOUBLE_TYPE)),
    std::make_tuple(3, "s", false, std::make_unique<Struct< ::cpp2::struct1>>("module.struct1")),
    std::make_tuple(4, "u", false, std::make_unique<Union< ::cpp2::union1>>("module.union1")),
  };
  for (const auto& f : module_union2_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = std::get<0>(f);
    field.name_ref() = std::get<1>(f);
    field.is_optional_ref() = std::get<2>(f);
    std::get<3>(f)->writeAndGenType(*field.type_ref(), metadata);
    module_union2.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
