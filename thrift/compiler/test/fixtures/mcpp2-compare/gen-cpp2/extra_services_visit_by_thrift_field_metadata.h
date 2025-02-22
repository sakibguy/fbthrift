/**
 * Autogenerated by Thrift for src/extra_services.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/extra_services_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByFieldId<::extra::svc::containerStruct2> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).fieldA_ref());
    case 101:
      return f(1, static_cast<T&&>(t).req_fieldA_ref());
    case 201:
      return f(2, static_cast<T&&>(t).opt_fieldA_ref());
    case 2:
      return f(3, static_cast<T&&>(t).fieldB_ref());
    case 102:
      return f(4, static_cast<T&&>(t).req_fieldB_ref());
    case 202:
      return f(5, static_cast<T&&>(t).opt_fieldB_ref());
    case 3:
      return f(6, static_cast<T&&>(t).fieldC_ref());
    case 103:
      return f(7, static_cast<T&&>(t).req_fieldC_ref());
    case 203:
      return f(8, static_cast<T&&>(t).opt_fieldC_ref());
    case 4:
      return f(9, static_cast<T&&>(t).fieldD_ref());
    case 5:
      return f(10, static_cast<T&&>(t).fieldE_ref());
    case 105:
      return f(11, static_cast<T&&>(t).req_fieldE_ref());
    case 205:
      return f(12, static_cast<T&&>(t).opt_fieldE_ref());
    default:
      throwInvalidThriftId(fieldId, "::extra::svc::containerStruct2");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
