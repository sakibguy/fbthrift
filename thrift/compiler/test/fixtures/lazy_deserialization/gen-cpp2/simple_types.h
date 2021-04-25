/**
 * Autogenerated by Thrift for src/simple.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct field1;
struct field2;
struct field3;
struct field4;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_field1
#define APACHE_THRIFT_ACCESSOR_field1
APACHE_THRIFT_DEFINE_ACCESSOR(field1);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field2
#define APACHE_THRIFT_ACCESSOR_field2
APACHE_THRIFT_DEFINE_ACCESSOR(field2);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field3
#define APACHE_THRIFT_ACCESSOR_field3
APACHE_THRIFT_DEFINE_ACCESSOR(field3);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field4
#define APACHE_THRIFT_ACCESSOR_field4
APACHE_THRIFT_DEFINE_ACCESSOR(field4);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace apache { namespace thrift { namespace test {
class Foo;
}}} // apache::thrift::test
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
namespace apache { namespace thrift { namespace test {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class Foo final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = Foo;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Foo() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Foo(apache::thrift::FragileConstructor, ::std::unique_ptr<::std::string> field1__arg, ::std::string field2__arg, ::std::vector<::std::int32_t> field3__arg, ::std::vector<::std::int32_t> field4__arg);

  Foo(Foo&&) noexcept;
  Foo(const Foo& src);


  Foo& operator=(Foo&&) noexcept;
  Foo& operator=(const Foo& src);
  void __clear();
 private:
  mutable ::std::unique_ptr<::std::string> field1;
 private:
  ::std::string field2;
 private:
  mutable ::std::vector<::std::int32_t> field3;
 private:
  ::std::vector<::std::int32_t> field4;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool field2;
    bool field3;
    bool field4;
  } __isset = {};

  bool operator==(const Foo&) const;
  bool operator<(const Foo&) const;
  template <typename ..., typename T = ::std::unique_ptr<::std::string>>
  FOLLY_ERASE T& field1_ref() & { return __fbthrift_read_field_field1(); }

  template <typename ..., typename T = ::std::unique_ptr<::std::string>>
  FOLLY_ERASE const T& field1_ref() const& { return __fbthrift_read_field_field1(); }

  template <typename ..., typename T = ::std::unique_ptr<::std::string>>
  FOLLY_ERASE T&& field1_ref() && { return std::move(__fbthrift_read_field_field1()); }

  template <typename ..., typename T = ::std::unique_ptr<::std::string>>
  FOLLY_ERASE const T&& field1_ref() const&& { return std::move(__fbthrift_read_field_field1()); }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> field2_ref() const& {
    return {this->field2, __isset.field2};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> field2_ref() const&& {
    return {std::move(this->field2), __isset.field2};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> field2_ref() & {
    return {this->field2, __isset.field2};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> field2_ref() && {
    return {std::move(this->field2), __isset.field2};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> field3_ref() const& {
    return {this->__fbthrift_read_field_field3(), __isset.field3};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> field3_ref() const&& {
    return {std::move(this->__fbthrift_read_field_field3()), __isset.field3};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> field3_ref() & {
    return {this->__fbthrift_read_field_field3(), __isset.field3};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> field3_ref() && {
    return {std::move(this->__fbthrift_read_field_field3()), __isset.field3};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> field4_ref() const& {
    return {this->field4, __isset.field4};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> field4_ref() const&& {
    return {std::move(this->field4), __isset.field4};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> field4_ref() & {
    return {this->field4, __isset.field4};
  }

  template <typename..., typename T = ::std::vector<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> field4_ref() && {
    return {std::move(this->field4), __isset.field4};
  }

  const ::std::string& get_field2() const& {
    return field2;
  }

  ::std::string get_field2() && {
    return std::move(field2);
  }

  template <typename T_Foo_field2_struct_setter = ::std::string>
  ::std::string& set_field2(T_Foo_field2_struct_setter&& field2_) {
    field2 = std::forward<T_Foo_field2_struct_setter>(field2_);
    __isset.field2 = true;
    return field2;
  }
  const ::std::vector<::std::int32_t>& get_field4() const&;
  ::std::vector<::std::int32_t> get_field4() &&;

  template <typename T_Foo_field4_struct_setter = ::std::vector<::std::int32_t>>
  ::std::vector<::std::int32_t>& set_field4(T_Foo_field4_struct_setter&& field4_) {
    field4 = std::forward<T_Foo_field4_struct_setter>(field4_);
    __isset.field4 = true;
    return field4;
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
 private:
  mutable struct __fbthrift_SerializedData {
    folly::IOBuf field1;
    folly::IOBuf field3;
  } __fbthrift_serializedData_;

  mutable struct __fbthrift_IsDeserialized {
    std::atomic<bool> field1{true};
    std::atomic<bool> field3{true};
  } __fbthrift_isDeserialized_;

  mutable struct __fbthrift_DeserializationMutex {
    std::mutex field1;
    std::mutex field3;
  } __fbthrift_deserializationMutex_;

  const ::std::unique_ptr<::std::string>& __fbthrift_read_field_field1() const;
  ::std::unique_ptr<::std::string>& __fbthrift_read_field_field1();
  const ::std::vector<::std::int32_t>& __fbthrift_read_field_field3() const;
  ::std::vector<::std::int32_t>& __fbthrift_read_field_field3();

  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Foo>;
  friend void swap(Foo& a, Foo& b);
};

template <class Protocol_>
uint32_t Foo::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}}} // apache::thrift::test
THRIFT_IGNORE_ISSET_USE_WARNING_END
