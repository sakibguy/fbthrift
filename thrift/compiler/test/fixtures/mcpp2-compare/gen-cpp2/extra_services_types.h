/**
 * Autogenerated by Thrift for src/extra_services.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>


#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_types.h"

namespace apache {
namespace thrift {
namespace tag {
struct fieldA;
struct req_fieldA;
struct opt_fieldA;
struct fieldB;
struct req_fieldB;
struct opt_fieldB;
struct fieldC;
struct req_fieldC;
struct opt_fieldC;
struct fieldD;
struct fieldE;
struct req_fieldE;
struct opt_fieldE;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_fieldA
#define APACHE_THRIFT_ACCESSOR_fieldA
APACHE_THRIFT_DEFINE_ACCESSOR(fieldA);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_req_fieldA
#define APACHE_THRIFT_ACCESSOR_req_fieldA
APACHE_THRIFT_DEFINE_ACCESSOR(req_fieldA);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_opt_fieldA
#define APACHE_THRIFT_ACCESSOR_opt_fieldA
APACHE_THRIFT_DEFINE_ACCESSOR(opt_fieldA);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_fieldB
#define APACHE_THRIFT_ACCESSOR_fieldB
APACHE_THRIFT_DEFINE_ACCESSOR(fieldB);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_req_fieldB
#define APACHE_THRIFT_ACCESSOR_req_fieldB
APACHE_THRIFT_DEFINE_ACCESSOR(req_fieldB);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_opt_fieldB
#define APACHE_THRIFT_ACCESSOR_opt_fieldB
APACHE_THRIFT_DEFINE_ACCESSOR(opt_fieldB);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_fieldC
#define APACHE_THRIFT_ACCESSOR_fieldC
APACHE_THRIFT_DEFINE_ACCESSOR(fieldC);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_req_fieldC
#define APACHE_THRIFT_ACCESSOR_req_fieldC
APACHE_THRIFT_DEFINE_ACCESSOR(req_fieldC);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_opt_fieldC
#define APACHE_THRIFT_ACCESSOR_opt_fieldC
APACHE_THRIFT_DEFINE_ACCESSOR(opt_fieldC);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_fieldD
#define APACHE_THRIFT_ACCESSOR_fieldD
APACHE_THRIFT_DEFINE_ACCESSOR(fieldD);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_fieldE
#define APACHE_THRIFT_ACCESSOR_fieldE
APACHE_THRIFT_DEFINE_ACCESSOR(fieldE);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_req_fieldE
#define APACHE_THRIFT_ACCESSOR_req_fieldE
APACHE_THRIFT_DEFINE_ACCESSOR(req_fieldE);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_opt_fieldE
#define APACHE_THRIFT_ACCESSOR_opt_fieldE
APACHE_THRIFT_DEFINE_ACCESSOR(opt_fieldE);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace extra { namespace svc {
class containerStruct2;
}} // extra::svc
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace extra { namespace svc {
class containerStruct2 final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = true;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;

 public:
  using __fbthrift_cpp2_type = containerStruct2;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  containerStruct2();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  containerStruct2(apache::thrift::FragileConstructor, bool fieldA__arg, bool req_fieldA__arg, bool opt_fieldA__arg, ::std::map<::std::string, bool> fieldB__arg, ::std::map<::std::string, bool> req_fieldB__arg, ::std::map<::std::string, bool> opt_fieldB__arg, ::std::set<int32_t> fieldC__arg, ::std::set<int32_t> req_fieldC__arg, ::std::set<int32_t> opt_fieldC__arg, ::std::string fieldD__arg, ::std::string fieldE__arg, ::std::string req_fieldE__arg, ::std::string opt_fieldE__arg);

  containerStruct2(containerStruct2&&) = default;

  containerStruct2(const containerStruct2&) = default;


  containerStruct2& operator=(containerStruct2&&) = default;

  containerStruct2& operator=(const containerStruct2&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  void __clear();

  ~containerStruct2();

 private:
  bool fieldA;
 public:
  bool req_fieldA;
 private:
  bool opt_fieldA;
 private:
  ::std::map<::std::string, bool> fieldB;
 public:
  ::std::map<::std::string, bool> req_fieldB;
 private:
  ::std::map<::std::string, bool> opt_fieldB;
 private:
  ::std::set<int32_t> fieldC;
 public:
  ::std::set<int32_t> req_fieldC;
 private:
  ::std::set<int32_t> opt_fieldC;
 private:
  ::std::string fieldD;
 private:
  ::std::string fieldE;
 public:
  ::std::string req_fieldE;
 private:
  ::std::string opt_fieldE;

 public:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool fieldA;
    bool opt_fieldA;
    bool fieldB;
    bool opt_fieldB;
    bool fieldC;
    bool opt_fieldC;
    bool fieldD;
    bool fieldE;
    bool opt_fieldE;
  } __isset = {};
  bool operator==(const containerStruct2& rhs) const;
#ifndef SWIG
  friend bool operator!=(const containerStruct2& __x, const containerStruct2& __y) {
    return !(__x == __y);
  }
#endif
  bool operator<(const containerStruct2& rhs) const;
#ifndef SWIG
  friend bool operator>(const containerStruct2& __x, const containerStruct2& __y) {
    return __y < __x;
  }
  friend bool operator<=(const containerStruct2& __x, const containerStruct2& __y) {
    return !(__y < __x);
  }
  friend bool operator>=(const containerStruct2& __x, const containerStruct2& __y) {
    return !(__x < __y);
  }
#endif

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldA_ref() const& {
    return {this->fieldA, __isset.fieldA};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldA_ref() const&& {
    return {std::move(this->fieldA), __isset.fieldA};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldA_ref() & {
    return {this->fieldA, __isset.fieldA};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldA_ref() && {
    return {std::move(this->fieldA), __isset.fieldA};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END
  template <typename..., typename T = bool>
  FOLLY_ERASE auto req_fieldA_ref() const& {
    return ::apache::thrift::required_field_ref<const T&>{this->req_fieldA};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE auto req_fieldA_ref() const&& {
    return ::apache::thrift::required_field_ref<const T&&>{std::move(this->req_fieldA)};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE auto req_fieldA_ref() & {
    return ::apache::thrift::required_field_ref<T&>{this->req_fieldA};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE auto req_fieldA_ref() && {
    return ::apache::thrift::required_field_ref<T&&>{std::move(this->req_fieldA)};
  }

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> opt_fieldA_ref() const& {
    return {this->opt_fieldA, __isset.opt_fieldA};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> opt_fieldA_ref() const&& {
    return {std::move(this->opt_fieldA), __isset.opt_fieldA};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> opt_fieldA_ref() & {
    return {this->opt_fieldA, __isset.opt_fieldA};
  }

  template <typename..., typename T = bool>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> opt_fieldA_ref() && {
    return {std::move(this->opt_fieldA), __isset.opt_fieldA};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldB_ref() const& {
    return {this->fieldB, __isset.fieldB};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldB_ref() const&& {
    return {std::move(this->fieldB), __isset.fieldB};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldB_ref() & {
    return {this->fieldB, __isset.fieldB};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldB_ref() && {
    return {std::move(this->fieldB), __isset.fieldB};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END
  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE auto req_fieldB_ref() const& {
    return ::apache::thrift::required_field_ref<const T&>{this->req_fieldB};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE auto req_fieldB_ref() const&& {
    return ::apache::thrift::required_field_ref<const T&&>{std::move(this->req_fieldB)};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE auto req_fieldB_ref() & {
    return ::apache::thrift::required_field_ref<T&>{this->req_fieldB};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE auto req_fieldB_ref() && {
    return ::apache::thrift::required_field_ref<T&&>{std::move(this->req_fieldB)};
  }

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> opt_fieldB_ref() const& {
    return {this->opt_fieldB, __isset.opt_fieldB};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> opt_fieldB_ref() const&& {
    return {std::move(this->opt_fieldB), __isset.opt_fieldB};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> opt_fieldB_ref() & {
    return {this->opt_fieldB, __isset.opt_fieldB};
  }

  template <typename..., typename T = ::std::map<::std::string, bool>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> opt_fieldB_ref() && {
    return {std::move(this->opt_fieldB), __isset.opt_fieldB};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = ::std::set<int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldC_ref() const& {
    return {this->fieldC, __isset.fieldC};
  }

  template <typename..., typename T = ::std::set<int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldC_ref() const&& {
    return {std::move(this->fieldC), __isset.fieldC};
  }

  template <typename..., typename T = ::std::set<int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldC_ref() & {
    return {this->fieldC, __isset.fieldC};
  }

  template <typename..., typename T = ::std::set<int32_t>>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldC_ref() && {
    return {std::move(this->fieldC), __isset.fieldC};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END
  template <typename..., typename T = ::std::set<int32_t>>
  FOLLY_ERASE auto req_fieldC_ref() const& {
    return ::apache::thrift::required_field_ref<const T&>{this->req_fieldC};
  }

  template <typename..., typename T = ::std::set<int32_t>>
  FOLLY_ERASE auto req_fieldC_ref() const&& {
    return ::apache::thrift::required_field_ref<const T&&>{std::move(this->req_fieldC)};
  }

  template <typename..., typename T = ::std::set<int32_t>>
  FOLLY_ERASE auto req_fieldC_ref() & {
    return ::apache::thrift::required_field_ref<T&>{this->req_fieldC};
  }

  template <typename..., typename T = ::std::set<int32_t>>
  FOLLY_ERASE auto req_fieldC_ref() && {
    return ::apache::thrift::required_field_ref<T&&>{std::move(this->req_fieldC)};
  }

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = ::std::set<int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> opt_fieldC_ref() const& {
    return {this->opt_fieldC, __isset.opt_fieldC};
  }

  template <typename..., typename T = ::std::set<int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> opt_fieldC_ref() const&& {
    return {std::move(this->opt_fieldC), __isset.opt_fieldC};
  }

  template <typename..., typename T = ::std::set<int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> opt_fieldC_ref() & {
    return {this->opt_fieldC, __isset.opt_fieldC};
  }

  template <typename..., typename T = ::std::set<int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> opt_fieldC_ref() && {
    return {std::move(this->opt_fieldC), __isset.opt_fieldC};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldD_ref() const& {
    return {this->fieldD, __isset.fieldD};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldD_ref() const&& {
    return {std::move(this->fieldD), __isset.fieldD};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldD_ref() & {
    return {this->fieldD, __isset.fieldD};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldD_ref() && {
    return {std::move(this->fieldD), __isset.fieldD};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldE_ref() const& {
    return {this->fieldE, __isset.fieldE};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldE_ref() const&& {
    return {std::move(this->fieldE), __isset.fieldE};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldE_ref() & {
    return {this->fieldE, __isset.fieldE};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldE_ref() && {
    return {std::move(this->fieldE), __isset.fieldE};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END
  template <typename..., typename T = ::std::string>
  FOLLY_ERASE auto req_fieldE_ref() const& {
    return ::apache::thrift::required_field_ref<const T&>{this->req_fieldE};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE auto req_fieldE_ref() const&& {
    return ::apache::thrift::required_field_ref<const T&&>{std::move(this->req_fieldE)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE auto req_fieldE_ref() & {
    return ::apache::thrift::required_field_ref<T&>{this->req_fieldE};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE auto req_fieldE_ref() && {
    return ::apache::thrift::required_field_ref<T&&>{std::move(this->req_fieldE)};
  }

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> opt_fieldE_ref() const& {
    return {this->opt_fieldE, __isset.opt_fieldE};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> opt_fieldE_ref() const&& {
    return {std::move(this->opt_fieldE), __isset.opt_fieldE};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> opt_fieldE_ref() & {
    return {this->opt_fieldE, __isset.opt_fieldE};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> opt_fieldE_ref() && {
    return {std::move(this->opt_fieldE), __isset.opt_fieldE};
  }
THRIFT_IGNORE_ISSET_USE_WARNING_END

  bool get_fieldA() const {
    return fieldA;
  }

  bool& set_fieldA(bool fieldA_) {
    fieldA = fieldA_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.fieldA = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return fieldA;
  }

  bool get_req_fieldA() const {
    return req_fieldA;
  }

  bool& set_req_fieldA(bool req_fieldA_) {
    req_fieldA = req_fieldA_;
    return req_fieldA;
  }

  const bool* get_opt_fieldA() const& {
    return opt_fieldA_ref() ? std::addressof(opt_fieldA) : nullptr;
  }

  bool* get_opt_fieldA() & {
    return opt_fieldA_ref() ? std::addressof(opt_fieldA) : nullptr;
  }
  bool* get_opt_fieldA() && = delete;

  bool& set_opt_fieldA(bool opt_fieldA_) {
    opt_fieldA = opt_fieldA_;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.opt_fieldA = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return opt_fieldA;
  }
  const ::std::map<::std::string, bool>& get_fieldB() const&;
  ::std::map<::std::string, bool> get_fieldB() &&;

  template <typename T_containerStruct2_fieldB_struct_setter = ::std::map<::std::string, bool>>
  ::std::map<::std::string, bool>& set_fieldB(T_containerStruct2_fieldB_struct_setter&& fieldB_) {
    fieldB = std::forward<T_containerStruct2_fieldB_struct_setter>(fieldB_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.fieldB = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return fieldB;
  }
  const ::std::map<::std::string, bool>& get_req_fieldB() const&;
  ::std::map<::std::string, bool> get_req_fieldB() &&;

  template <typename T_containerStruct2_req_fieldB_struct_setter = ::std::map<::std::string, bool>>
  ::std::map<::std::string, bool>& set_req_fieldB(T_containerStruct2_req_fieldB_struct_setter&& req_fieldB_) {
    req_fieldB = std::forward<T_containerStruct2_req_fieldB_struct_setter>(req_fieldB_);
    return req_fieldB;
  }
  const ::std::map<::std::string, bool>* get_opt_fieldB() const&;
  ::std::map<::std::string, bool>* get_opt_fieldB() &;
  ::std::map<::std::string, bool>* get_opt_fieldB() && = delete;

  template <typename T_containerStruct2_opt_fieldB_struct_setter = ::std::map<::std::string, bool>>
  ::std::map<::std::string, bool>& set_opt_fieldB(T_containerStruct2_opt_fieldB_struct_setter&& opt_fieldB_) {
    opt_fieldB = std::forward<T_containerStruct2_opt_fieldB_struct_setter>(opt_fieldB_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.opt_fieldB = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return opt_fieldB;
  }
  const ::std::set<int32_t>& get_fieldC() const&;
  ::std::set<int32_t> get_fieldC() &&;

  template <typename T_containerStruct2_fieldC_struct_setter = ::std::set<int32_t>>
  ::std::set<int32_t>& set_fieldC(T_containerStruct2_fieldC_struct_setter&& fieldC_) {
    fieldC = std::forward<T_containerStruct2_fieldC_struct_setter>(fieldC_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.fieldC = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return fieldC;
  }
  const ::std::set<int32_t>& get_req_fieldC() const&;
  ::std::set<int32_t> get_req_fieldC() &&;

  template <typename T_containerStruct2_req_fieldC_struct_setter = ::std::set<int32_t>>
  ::std::set<int32_t>& set_req_fieldC(T_containerStruct2_req_fieldC_struct_setter&& req_fieldC_) {
    req_fieldC = std::forward<T_containerStruct2_req_fieldC_struct_setter>(req_fieldC_);
    return req_fieldC;
  }
  const ::std::set<int32_t>* get_opt_fieldC() const&;
  ::std::set<int32_t>* get_opt_fieldC() &;
  ::std::set<int32_t>* get_opt_fieldC() && = delete;

  template <typename T_containerStruct2_opt_fieldC_struct_setter = ::std::set<int32_t>>
  ::std::set<int32_t>& set_opt_fieldC(T_containerStruct2_opt_fieldC_struct_setter&& opt_fieldC_) {
    opt_fieldC = std::forward<T_containerStruct2_opt_fieldC_struct_setter>(opt_fieldC_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.opt_fieldC = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return opt_fieldC;
  }

  const ::std::string& get_fieldD() const& {
    return fieldD;
  }

  ::std::string get_fieldD() && {
    return std::move(fieldD);
  }

  template <typename T_containerStruct2_fieldD_struct_setter = ::std::string>
  ::std::string& set_fieldD(T_containerStruct2_fieldD_struct_setter&& fieldD_) {
    fieldD = std::forward<T_containerStruct2_fieldD_struct_setter>(fieldD_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.fieldD = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return fieldD;
  }

  const ::std::string& get_fieldE() const& {
    return fieldE;
  }

  ::std::string get_fieldE() && {
    return std::move(fieldE);
  }

  template <typename T_containerStruct2_fieldE_struct_setter = ::std::string>
  ::std::string& set_fieldE(T_containerStruct2_fieldE_struct_setter&& fieldE_) {
    fieldE = std::forward<T_containerStruct2_fieldE_struct_setter>(fieldE_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.fieldE = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return fieldE;
  }

  const ::std::string& get_req_fieldE() const& {
    return req_fieldE;
  }

  ::std::string get_req_fieldE() && {
    return std::move(req_fieldE);
  }

  template <typename T_containerStruct2_req_fieldE_struct_setter = ::std::string>
  ::std::string& set_req_fieldE(T_containerStruct2_req_fieldE_struct_setter&& req_fieldE_) {
    req_fieldE = std::forward<T_containerStruct2_req_fieldE_struct_setter>(req_fieldE_);
    return req_fieldE;
  }

  const ::std::string* get_opt_fieldE() const& {
    return opt_fieldE_ref() ? std::addressof(opt_fieldE) : nullptr;
  }

  ::std::string* get_opt_fieldE() & {
    return opt_fieldE_ref() ? std::addressof(opt_fieldE) : nullptr;
  }
  ::std::string* get_opt_fieldE() && = delete;

  template <typename T_containerStruct2_opt_fieldE_struct_setter = ::std::string>
  ::std::string& set_opt_fieldE(T_containerStruct2_opt_fieldE_struct_setter&& opt_fieldE_) {
    opt_fieldE = std::forward<T_containerStruct2_opt_fieldE_struct_setter>(opt_fieldE_);
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    __isset.opt_fieldE = true;
THRIFT_IGNORE_ISSET_USE_WARNING_END
    return opt_fieldE;
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

  friend class ::apache::thrift::Cpp2Ops< containerStruct2 >;
  friend void swap(containerStruct2& a, containerStruct2& b);
};

template <class Protocol_>
uint32_t containerStruct2::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

}} // extra::svc
