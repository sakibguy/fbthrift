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
struct reasonable;
struct fine;
struct questionable;
struct tags;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_reasonable
#define APACHE_THRIFT_ACCESSOR_reasonable
APACHE_THRIFT_DEFINE_ACCESSOR(reasonable);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_fine
#define APACHE_THRIFT_ACCESSOR_fine
APACHE_THRIFT_DEFINE_ACCESSOR(fine);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_questionable
#define APACHE_THRIFT_ACCESSOR_questionable
APACHE_THRIFT_DEFINE_ACCESSOR(questionable);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_tags
#define APACHE_THRIFT_ACCESSOR_tags
APACHE_THRIFT_DEFINE_ACCESSOR(tags);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace cpp2 {

enum class Metasyntactic {
  FOO = 1,
  BAR = 2,
  BAZ = 3,
  BAX = 4,
};




} // cpp2

namespace std {
template<> struct hash<::cpp2::Metasyntactic> :
  ::apache::thrift::detail::enum_hash<::cpp2::Metasyntactic> {};
} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::cpp2::Metasyntactic>;

template <> struct TEnumTraits<::cpp2::Metasyntactic> {
  using type = ::cpp2::Metasyntactic;

  static constexpr std::size_t const size = 4;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

  static constexpr type min() { return type::FOO; }
  static constexpr type max() { return type::BAX; }
};


}} // apache::thrift

namespace cpp2 {

using _Metasyntactic_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<Metasyntactic>;
[[deprecated("use apache::thrift::util::enumNameSafe, apache::thrift::util::enumName, or apache::thrift::TEnumTraits")]]
extern const _Metasyntactic_EnumMapFactory::ValuesToNamesMapType _Metasyntactic_VALUES_TO_NAMES;
[[deprecated("use apache::thrift::TEnumTraits")]]
extern const _Metasyntactic_EnumMapFactory::NamesToValuesMapType _Metasyntactic_NAMES_TO_VALUES;

} // cpp2

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class SomeStruct;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;

class SomeStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = SomeStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  SomeStruct() :
      reasonable( ::cpp2::Metasyntactic::FOO),
      fine( ::cpp2::Metasyntactic::BAR),
      questionable(static_cast< ::cpp2::Metasyntactic>(-1)) {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  SomeStruct(apache::thrift::FragileConstructor, ::cpp2::Metasyntactic reasonable__arg, ::cpp2::Metasyntactic fine__arg, ::cpp2::Metasyntactic questionable__arg, ::std::set<::std::int32_t> tags__arg);

  SomeStruct(SomeStruct&&) noexcept;

  SomeStruct(const SomeStruct& src);


  SomeStruct& operator=(SomeStruct&&) noexcept;
  SomeStruct& operator=(const SomeStruct& src);
  void __clear();
 private:
  ::cpp2::Metasyntactic reasonable;
 private:
  ::cpp2::Metasyntactic fine;
 private:
  ::cpp2::Metasyntactic questionable;
 private:
  ::std::set<::std::int32_t> tags;

 private:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    uint8_t reasonable;
    uint8_t fine;
    uint8_t questionable;
    uint8_t tags;
    bool __fbthrift_get(folly::index_constant<0>) const {
      return reasonable == 1;
    }
    void __fbthrift_set(folly::index_constant<0>, bool isset_flag) {
      reasonable = isset_flag ? 1 : 0;
    }
    bool __fbthrift_get(folly::index_constant<1>) const {
      return fine == 1;
    }
    void __fbthrift_set(folly::index_constant<1>, bool isset_flag) {
      fine = isset_flag ? 1 : 0;
    }
    bool __fbthrift_get(folly::index_constant<2>) const {
      return questionable == 1;
    }
    void __fbthrift_set(folly::index_constant<2>, bool isset_flag) {
      questionable = isset_flag ? 1 : 0;
    }
    bool __fbthrift_get(folly::index_constant<3>) const {
      return tags == 1;
    }
    void __fbthrift_set(folly::index_constant<3>, bool isset_flag) {
      tags = isset_flag ? 1 : 0;
    }
  } __isset = {};

 public:

  bool operator==(const SomeStruct&) const;
  bool operator<(const SomeStruct&) const;

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> reasonable_ref() const& {
    return {this->reasonable, __isset.reasonable};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> reasonable_ref() const&& {
    return {std::move(this->reasonable), __isset.reasonable};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> reasonable_ref() & {
    return {this->reasonable, __isset.reasonable};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> reasonable_ref() && {
    return {std::move(this->reasonable), __isset.reasonable};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fine_ref() const& {
    return {this->fine, __isset.fine};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fine_ref() const&& {
    return {std::move(this->fine), __isset.fine};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fine_ref() & {
    return {this->fine, __isset.fine};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fine_ref() && {
    return {std::move(this->fine), __isset.fine};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> questionable_ref() const& {
    return {this->questionable, __isset.questionable};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> questionable_ref() const&& {
    return {std::move(this->questionable), __isset.questionable};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> questionable_ref() & {
    return {this->questionable, __isset.questionable};
  }

  template <typename..., typename T = ::cpp2::Metasyntactic>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> questionable_ref() && {
    return {std::move(this->questionable), __isset.questionable};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> tags_ref() const& {
    return {this->tags, __isset.tags};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> tags_ref() const&& {
    return {std::move(this->tags), __isset.tags};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> tags_ref() & {
    return {this->tags, __isset.tags};
  }

  template <typename..., typename T = ::std::set<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> tags_ref() && {
    return {std::move(this->tags), __isset.tags};
  }

  ::cpp2::Metasyntactic get_reasonable() const {
    return reasonable;
  }

  [[deprecated("Use `FOO.reasonable_ref() = BAR;` instead of `FOO.set_reasonable(BAR);`")]]
  ::cpp2::Metasyntactic& set_reasonable(::cpp2::Metasyntactic reasonable_) {
    reasonable = reasonable_;
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
    return reasonable;
  }

  ::cpp2::Metasyntactic get_fine() const {
    return fine;
  }

  [[deprecated("Use `FOO.fine_ref() = BAR;` instead of `FOO.set_fine(BAR);`")]]
  ::cpp2::Metasyntactic& set_fine(::cpp2::Metasyntactic fine_) {
    fine = fine_;
  __isset.__fbthrift_set(folly::index_constant<1>(), true);
    return fine;
  }

  ::cpp2::Metasyntactic get_questionable() const {
    return questionable;
  }

  [[deprecated("Use `FOO.questionable_ref() = BAR;` instead of `FOO.set_questionable(BAR);`")]]
  ::cpp2::Metasyntactic& set_questionable(::cpp2::Metasyntactic questionable_) {
    questionable = questionable_;
  __isset.__fbthrift_set(folly::index_constant<2>(), true);
    return questionable;
  }
  const ::std::set<::std::int32_t>& get_tags() const&;
  ::std::set<::std::int32_t> get_tags() &&;

  template <typename T_SomeStruct_tags_struct_setter = ::std::set<::std::int32_t>>
  [[deprecated("Use `FOO.tags_ref() = BAR;` instead of `FOO.set_tags(BAR);`")]]
  ::std::set<::std::int32_t>& set_tags(T_SomeStruct_tags_struct_setter&& tags_) {
    tags = std::forward<T_SomeStruct_tags_struct_setter>(tags_);
    __isset.__fbthrift_set(folly::index_constant<3>(), true);
    return tags;
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

  friend class ::apache::thrift::Cpp2Ops<SomeStruct>;
  friend void swap(SomeStruct& a, SomeStruct& b);
};

template <class Protocol_>
uint32_t SomeStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
THRIFT_IGNORE_ISSET_USE_WARNING_END
