/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_constants_h.h>

#include "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_types.h"

namespace test { namespace fixtures { namespace enumstrict {

struct module_constants {

  static constexpr ::test::fixtures::enumstrict::MyEnum const kOne_ =  ::test::fixtures::enumstrict::MyEnum::ONE;

  static constexpr ::test::fixtures::enumstrict::MyEnum kOne() {
    return kOne_;
  }

  static ::std::map<::test::fixtures::enumstrict::MyEnum, ::std::string> const& enumNames();

};

}}} // test::fixtures::enumstrict
