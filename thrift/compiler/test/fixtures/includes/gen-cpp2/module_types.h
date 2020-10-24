/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>


#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_types.h"

namespace apache {
namespace thrift {
namespace tag {
struct MyIncludedField;
struct MyOtherIncludedField;
struct MyIncludedInt;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_MyIncludedField
#define APACHE_THRIFT_ACCESSOR_MyIncludedField
APACHE_THRIFT_DEFINE_ACCESSOR(MyIncludedField);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_MyOtherIncludedField
#define APACHE_THRIFT_ACCESSOR_MyOtherIncludedField
APACHE_THRIFT_DEFINE_ACCESSOR(MyOtherIncludedField);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_MyIncludedInt
#define APACHE_THRIFT_ACCESSOR_MyIncludedInt
APACHE_THRIFT_DEFINE_ACCESSOR(MyIncludedInt);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class MyStruct;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class MyStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;

 public:
  using __fbthrift_cpp2_type = MyStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  MyStruct() :
      MyIncludedField(::apache::thrift::detail::make_constant< ::cpp2::Included>(::apache::thrift::type_class::structure{}, ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::MyIntField>(2LL), ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::MyTransitiveField>(::apache::thrift::detail::make_constant< ::cpp2::Foo>(::apache::thrift::type_class::structure{}, ::apache::thrift::detail::wrap_struct_argument<::apache::thrift::tag::a>(2LL))))),
      MyIncludedInt(42LL) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  MyStruct(apache::thrift::FragileConstructor,  ::cpp2::Included MyIncludedField__arg,  ::cpp2::Included MyOtherIncludedField__arg,  ::cpp2::IncludedInt64 MyIncludedInt__arg);

  MyStruct(MyStruct&&) = default;

  MyStruct(const MyStruct&) = default;


  MyStruct& operator=(MyStruct&&) = default;

  MyStruct& operator=(const MyStruct&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  void __clear();
 private:
   ::cpp2::Included MyIncludedField;
 private:
   ::cpp2::Included MyOtherIncludedField;
 private:
   ::cpp2::IncludedInt64 MyIncludedInt;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool MyIncludedField;
    bool MyOtherIncludedField;
    bool MyIncludedInt;
  } __isset = {};
  bool operator==(const MyStruct& rhs) const;
#ifndef SWIG
  friend bool operator!=(const MyStruct& __x, const MyStruct& __y) {
    return !(__x == __y);
  }
#endif
  bool operator<(const MyStruct& rhs) const;
#ifndef SWIG
  friend bool operator>(const MyStruct& __x, const MyStruct& __y) {
    return __y < __x;
  }
  friend bool operator<=(const MyStruct& __x, const MyStruct& __y) {
    return !(__y < __x);
  }
  friend bool operator>=(const MyStruct& __x, const MyStruct& __y) {
    return !(__x < __y);
  }
#endif

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T =  ::cpp2::Included>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> MyIncludedField_ref() const& {
    return {this->MyIncludedField, __isset.MyIncludedField};
  }

  template <typename..., typename T =  ::cpp2::Included>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> MyIncludedField_ref() const&& {
    return {std::move(this->MyIncludedField), __isset.MyIncludedField};
  }

  template <typename..., typename T =  ::cpp2::Included>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> MyIncludedField_ref() & {
    return {this->MyIncludedField, __isset.MyIncludedField};
  }

  template <typename..., typename T =  ::cpp2::Included>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> MyIncludedField_ref() && {
    return {std::move(this->MyIncludedField), __isset.MyIncludedField};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T =  ::cpp2::Included>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> MyOtherIncludedField_ref() const& {
    return {this->MyOtherIncludedField, __isset.MyOtherIncludedField};
  }

  template <typename..., typename T =  ::cpp2::Included>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> MyOtherIncludedField_ref() const&& {
    return {std::move(this->MyOtherIncludedField), __isset.MyOtherIncludedField};
  }

  template <typename..., typename T =  ::cpp2::Included>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> MyOtherIncludedField_ref() & {
    return {this->MyOtherIncludedField, __isset.MyOtherIncludedField};
  }

  template <typename..., typename T =  ::cpp2::Included>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> MyOtherIncludedField_ref() && {
    return {std::move(this->MyOtherIncludedField), __isset.MyOtherIncludedField};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T =  ::cpp2::IncludedInt64>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> MyIncludedInt_ref() const& {
    return {this->MyIncludedInt, __isset.MyIncludedInt};
  }

  template <typename..., typename T =  ::cpp2::IncludedInt64>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> MyIncludedInt_ref() const&& {
    return {std::move(this->MyIncludedInt), __isset.MyIncludedInt};
  }

  template <typename..., typename T =  ::cpp2::IncludedInt64>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> MyIncludedInt_ref() & {
    return {this->MyIncludedInt, __isset.MyIncludedInt};
  }

  template <typename..., typename T =  ::cpp2::IncludedInt64>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> MyIncludedInt_ref() && {
    return {std::move(this->MyIncludedInt), __isset.MyIncludedInt};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END
  const  ::cpp2::Included& get_MyIncludedField() const&;
   ::cpp2::Included get_MyIncludedField() &&;

  template <typename T_MyStruct_MyIncludedField_struct_setter =  ::cpp2::Included>
   ::cpp2::Included& set_MyIncludedField(T_MyStruct_MyIncludedField_struct_setter&& MyIncludedField_) {
    MyIncludedField = std::forward<T_MyStruct_MyIncludedField_struct_setter>(MyIncludedField_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.MyIncludedField = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return MyIncludedField;
  }
  const  ::cpp2::Included& get_MyOtherIncludedField() const&;
   ::cpp2::Included get_MyOtherIncludedField() &&;

  template <typename T_MyStruct_MyOtherIncludedField_struct_setter =  ::cpp2::Included>
   ::cpp2::Included& set_MyOtherIncludedField(T_MyStruct_MyOtherIncludedField_struct_setter&& MyOtherIncludedField_) {
    MyOtherIncludedField = std::forward<T_MyStruct_MyOtherIncludedField_struct_setter>(MyOtherIncludedField_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.MyOtherIncludedField = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return MyOtherIncludedField;
  }

   ::cpp2::IncludedInt64 get_MyIncludedInt() const {
    return MyIncludedInt;
  }

   ::cpp2::IncludedInt64& set_MyIncludedInt( ::cpp2::IncludedInt64 MyIncludedInt_) {
    MyIncludedInt = MyIncludedInt_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.MyIncludedInt = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return MyIncludedInt;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< MyStruct >;
  friend void swap(MyStruct& a, MyStruct& b);
};

template <class Protocol_>
uint32_t MyStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
