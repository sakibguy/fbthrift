/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct first;
struct second;
struct third;
struct isTrue;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_first
#define APACHE_THRIFT_ACCESSOR_first
APACHE_THRIFT_DEFINE_ACCESSOR(first);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_second
#define APACHE_THRIFT_ACCESSOR_second
APACHE_THRIFT_DEFINE_ACCESSOR(second);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_third
#define APACHE_THRIFT_ACCESSOR_third
APACHE_THRIFT_DEFINE_ACCESSOR(third);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_isTrue
#define APACHE_THRIFT_ACCESSOR_isTrue
APACHE_THRIFT_DEFINE_ACCESSOR(isTrue);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class BasicTypes;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
} // cpp2
namespace cpp2 {
class BasicTypes final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = true;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = BasicTypes;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  BasicTypes() :
      first(),
      second(),
      third(),
      isTrue() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  BasicTypes(apache::thrift::FragileConstructor, ::std::int32_t first__arg, ::std::int32_t second__arg, ::std::int64_t third__arg, bool isTrue__arg);

  BasicTypes(BasicTypes&&) = default;

  BasicTypes(const BasicTypes&) = default;


  BasicTypes& operator=(BasicTypes&&) = default;

  BasicTypes& operator=(const BasicTypes&) = default;
  void __clear();
 public:
  ::std::int32_t first;
 private:
  ::std::int32_t second;
 private:
  ::std::int64_t third;
 private:
  bool isTrue;
private:
  apache::thrift::detail::isset_bitset<3> __isset;

 public:

  bool operator==(const BasicTypes&) const;
  bool operator<(const BasicTypes&) const;

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::required_field_ref<const T&> first_ref() const& {
    return ::apache::thrift::required_field_ref<const T&>{this->first};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::required_field_ref<const T&&> first_ref() const&& {
    return ::apache::thrift::required_field_ref<const T&&>{std::move(this->first)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::required_field_ref<T&> first_ref() & {
    return ::apache::thrift::required_field_ref<T&>{this->first};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::required_field_ref<T&&> first_ref() && {
    return ::apache::thrift::required_field_ref<T&&>{std::move(this->first)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> second_ref() const& {
    return {this->second, __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> second_ref() const&& {
    return {std::move(this->second), __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> second_ref() & {
    return {this->second, __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> second_ref() && {
    return {std::move(this->second), __isset.__fbthrift_at(folly::index_constant<0>())};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> third_ref() const& {
    return {this->third, __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> third_ref() const&& {
    return {std::move(this->third), __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> third_ref() & {
    return {this->third, __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = ::std::int64_t>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> third_ref() && {
    return {std::move(this->third), __isset.__fbthrift_at(folly::index_constant<1>())};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> isTrue_ref() const& {
    return {this->isTrue, __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> isTrue_ref() const&& {
    return {std::move(this->isTrue), __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> isTrue_ref() & {
    return {this->isTrue, __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> isTrue_ref() && {
    return {std::move(this->isTrue), __isset.__fbthrift_at(folly::index_constant<2>())};
  }

  ::std::int32_t get_first() const {
    return first;
  }

  [[deprecated("Use `FOO.first_ref() = BAR;` instead of `FOO.set_first(BAR);`")]]
  ::std::int32_t& set_first(::std::int32_t first_) {
    first_ref() = first_;
    return first;
  }

  const ::std::int32_t* get_second() const& {
    return second_ref() ? std::addressof(second) : nullptr;
  }

  ::std::int32_t* get_second() & {
    return second_ref() ? std::addressof(second) : nullptr;
  }
  ::std::int32_t* get_second() && = delete;

  [[deprecated("Use `FOO.second_ref() = BAR;` instead of `FOO.set_second(BAR);`")]]
  ::std::int32_t& set_second(::std::int32_t second_) {
    second_ref() = second_;
    return second;
  }

  const ::std::int64_t* get_third() const& {
    return third_ref() ? std::addressof(third) : nullptr;
  }

  ::std::int64_t* get_third() & {
    return third_ref() ? std::addressof(third) : nullptr;
  }
  ::std::int64_t* get_third() && = delete;

  [[deprecated("Use `FOO.third_ref() = BAR;` instead of `FOO.set_third(BAR);`")]]
  ::std::int64_t& set_third(::std::int64_t third_) {
    third_ref() = third_;
    return third;
  }

  bool get_isTrue() const {
    return isTrue;
  }

  [[deprecated("Use `FOO.isTrue_ref() = BAR;` instead of `FOO.set_isTrue(BAR);`")]]
  bool& set_isTrue(bool isTrue_) {
    isTrue_ref() = isTrue_;
    return isTrue;
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

  friend class ::apache::thrift::Cpp2Ops<BasicTypes>;
  friend void swap(BasicTypes& a, BasicTypes& b);
};

template <class Protocol_>
uint32_t BasicTypes::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
