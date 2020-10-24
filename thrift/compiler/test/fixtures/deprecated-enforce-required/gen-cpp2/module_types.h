/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct bar;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_bar
#define APACHE_THRIFT_ACCESSOR_bar
APACHE_THRIFT_DEFINE_ACCESSOR(bar);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class Foo;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class Foo final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;

 public:
  using __fbthrift_cpp2_type = Foo;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  Foo() :
      bar(0) {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Foo(apache::thrift::FragileConstructor, int32_t bar__arg);

  Foo(Foo&&) = default;

  Foo(const Foo&) = default;


  Foo& operator=(Foo&&) = default;

  Foo& operator=(const Foo&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  void __clear();
 public:
  int32_t bar;

 public:
  bool operator==(const Foo& rhs) const;
#ifndef SWIG
  friend bool operator!=(const Foo& __x, const Foo& __y) {
    return !(__x == __y);
  }
#endif
  bool operator<(const Foo& rhs) const;
#ifndef SWIG
  friend bool operator>(const Foo& __x, const Foo& __y) {
    return __y < __x;
  }
  friend bool operator<=(const Foo& __x, const Foo& __y) {
    return !(__y < __x);
  }
  friend bool operator>=(const Foo& __x, const Foo& __y) {
    return !(__x < __y);
  }
#endif
  template <typename..., typename T = int32_t>
  FOLLY_ERASE auto bar_ref() const& {
    return ::apache::thrift::required_field_ref<const T&>{this->bar};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE auto bar_ref() const&& {
    return ::apache::thrift::required_field_ref<const T&&>{std::move(this->bar)};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE auto bar_ref() & {
    return ::apache::thrift::required_field_ref<T&>{this->bar};
  }

  template <typename..., typename T = int32_t>
  FOLLY_ERASE auto bar_ref() && {
    return ::apache::thrift::required_field_ref<T&&>{std::move(this->bar)};
  }

  int32_t get_bar() const {
    return bar;
  }

  int32_t& set_bar(int32_t bar_) {
    bar = bar_;
    return bar;
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

  friend class ::apache::thrift::Cpp2Ops< Foo >;
  friend void swap(Foo& a, Foo& b);
};

template <class Protocol_>
uint32_t Foo::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
