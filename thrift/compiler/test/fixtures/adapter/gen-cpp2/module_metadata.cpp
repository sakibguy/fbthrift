/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/module_metadata.h"

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


const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::Foo>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.Foo", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_Foo = res.first->second;
  module_Foo.name_ref() = "module.Foo";
  module_Foo.is_union_ref() = false;
  static const EncodedThriftField
  module_Foo_fields[] = {
    {1, "intField", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "optionalIntField", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "intFieldWithDefault", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
    {4, "setField", false, std::make_unique<Typedef>("module.SetWithAdapter", std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE))), std::vector<ThriftConstStruct>{}},
    {5, "optionalSetField", true, std::make_unique<Typedef>("module.SetWithAdapter", std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE))), std::vector<ThriftConstStruct>{}},
    {6, "mapField", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Typedef>("module.ListWithElemAdapter", std::make_unique<Typedef>("module.ListWithElemAdapter", std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE))))), std::vector<ThriftConstStruct>{}},
    {7, "optionalMapField", true, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Typedef>("module.ListWithElemAdapter", std::make_unique<Typedef>("module.ListWithElemAdapter", std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE))))), std::vector<ThriftConstStruct>{}},
    {8, "binaryField", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_Foo_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_Foo.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::Baz>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.Baz", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_Baz = res.first->second;
  module_Baz.name_ref() = "module.Baz";
  module_Baz.is_union_ref() = true;
  static const EncodedThriftField
  module_Baz_fields[] = {
    {1, "intField", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
    {4, "setField", false, std::make_unique<Typedef>("module.SetWithAdapter", std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE))), std::vector<ThriftConstStruct>{}},
    {6, "mapField", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::make_unique<Typedef>("module.ListWithElemAdapter", std::make_unique<Typedef>("module.ListWithElemAdapter", std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE))))), std::vector<ThriftConstStruct>{}},
    {8, "binaryField", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_Baz_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_Baz.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::cpp2::Bar>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs_ref()->emplace("module.Bar", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_Bar = res.first->second;
  module_Bar.name_ref() = "module.Bar";
  module_Bar.is_union_ref() = false;
  static const EncodedThriftField
  module_Bar_fields[] = {
    {1, "structField", false, std::make_unique<Typedef>("module.Foo", std::make_unique<Struct< ::cpp2::Foo>>("module.Foo")), std::vector<ThriftConstStruct>{}},
    {2, "optionalStructField", true, std::make_unique<Typedef>("module.Foo", std::make_unique<Struct< ::cpp2::Foo>>("module.Foo")), std::vector<ThriftConstStruct>{}},
    {3, "structListField", false, std::make_unique<List>(std::make_unique<Typedef>("module.Foo", std::make_unique<Struct< ::cpp2::Foo>>("module.Foo"))), std::vector<ThriftConstStruct>{}},
    {4, "optionalStructListField", true, std::make_unique<List>(std::make_unique<Typedef>("module.Foo", std::make_unique<Struct< ::cpp2::Foo>>("module.Foo"))), std::vector<ThriftConstStruct>{}},
    {5, "unionField", false, std::make_unique<Typedef>("module.Baz", std::make_unique<Union< ::cpp2::Baz>>("module.Baz")), std::vector<ThriftConstStruct>{}},
    {6, "optionalUnionField", true, std::make_unique<Typedef>("module.Baz", std::make_unique<Union< ::cpp2::Baz>>("module.Baz")), std::vector<ThriftConstStruct>{}},
  };
  for (const auto& f : module_Bar_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id_ref() = f.id;
    field.name_ref() = f.name;
    field.is_optional_ref() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type_ref(), metadata);
    field.structured_annotations_ref() = f.structured_annotations;
    module_Bar.fields_ref()->push_back(std::move(field));
  }
  return res.first->second;
}

void ServiceMetadata<::cpp2::ServiceSvIf>::gen_func(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name_ref() = "func";
  auto func_ret_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE);
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_Service_func_arg1_1;
  module_Service_func_arg1_1.id_ref() = 1;
  module_Service_func_arg1_1.name_ref() = "arg1";
  module_Service_func_arg1_1.is_optional_ref() = false;
  auto module_Service_func_arg1_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE);
  module_Service_func_arg1_1_type->writeAndGenType(*module_Service_func_arg1_1.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_Service_func_arg1_1));
  ::apache::thrift::metadata::ThriftField module_Service_func_arg2_2;
  module_Service_func_arg2_2.id_ref() = 2;
  module_Service_func_arg2_2.name_ref() = "arg2";
  module_Service_func_arg2_2.is_optional_ref() = false;
  auto module_Service_func_arg2_2_type = std::make_unique<Struct< ::cpp2::Foo>>("module.Foo");
  module_Service_func_arg2_2_type->writeAndGenType(*module_Service_func_arg2_2.type_ref(), metadata);
  func.arguments_ref()->push_back(std::move(module_Service_func_arg2_2));
  func.is_oneway_ref() = false;
  service.functions_ref()->push_back(std::move(func));
}

void ServiceMetadata<::cpp2::ServiceSvIf>::gen(::apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  const ::apache::thrift::metadata::ThriftServiceContextRef* self = genRecurse(*response.metadata_ref(), *response.services_ref());
  DCHECK(self != nullptr);
  // TODO(praihan): Remove ThriftServiceContext from response. But in the meantime, we need to fill the field with the result of looking up in ThriftMetadata.
  ::apache::thrift::metadata::ThriftServiceContext context;
  context.module_ref() = *self->module_ref();
  context.service_info_ref() = response.metadata_ref()->services_ref()->at(*self->service_name_ref());
  response.context_ref() = std::move(context);
}

const ThriftServiceContextRef* ServiceMetadata<::cpp2::ServiceSvIf>::genRecurse(ThriftMetadata& metadata, std::vector<ThriftServiceContextRef>& services) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_Service;
  module_Service.name_ref() = "module.Service";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::cpp2::ServiceSvIf>::gen_func,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_Service);
  }
  // We need to keep the index around because a reference or iterator could be invalidated.
  auto selfIndex = services.size();
  services.emplace_back();
  ThriftServiceContextRef& context = services[selfIndex];
  metadata.services_ref()->emplace("module.Service", std::move(module_Service));
  context.service_name_ref() = "module.Service";
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name_ref() = "module";
  context.module_ref() = std::move(module);
  return &context;
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
