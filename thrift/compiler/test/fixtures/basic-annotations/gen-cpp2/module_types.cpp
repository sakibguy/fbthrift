/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::MyEnum>::size;
folly::Range<::cpp2::MyEnum const*> const TEnumTraits<::cpp2::MyEnum>::values = folly::range(TEnumDataStorage<::cpp2::MyEnum>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::MyEnum>::names = folly::range(TEnumDataStorage<::cpp2::MyEnum>::names);

char const* TEnumTraits<::cpp2::MyEnum>::findName(type value) {
  using factory = ::cpp2::_MyEnum_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::MyEnum>::findValue(char const* name, type* out) {
  using factory = ::cpp2::_MyEnum_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace cpp2 {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _MyEnum_EnumMapFactory::ValuesToNamesMapType _MyEnum_VALUES_TO_NAMES = _MyEnum_EnumMapFactory::makeValuesToNamesMap();
const _MyEnum_EnumMapFactory::NamesToValuesMapType _MyEnum_NAMES_TO_VALUES = _MyEnum_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::MyStructNestedAnnotation>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::MyStructNestedAnnotation>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
MyStructNestedAnnotation::MyStructNestedAnnotation(const MyStructNestedAnnotation&) = default;
MyStructNestedAnnotation& MyStructNestedAnnotation::operator=(const MyStructNestedAnnotation&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
MyStructNestedAnnotation::MyStructNestedAnnotation(MyStructNestedAnnotation&& other) noexcept  :
    name(std::move(other.name)),
    __isset(other.__isset) {}
MyStructNestedAnnotation& MyStructNestedAnnotation::operator=(FOLLY_MAYBE_UNUSED MyStructNestedAnnotation&& other) noexcept {
    this->name = std::move(other.name);
    __isset = other.__isset;
    return *this;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
MyStructNestedAnnotation::MyStructNestedAnnotation(apache::thrift::FragileConstructor, ::std::string name__arg) :
    name(std::move(name__arg)) {
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
}
THRIFT_IGNORE_ISSET_USE_WARNING_END

void MyStructNestedAnnotation::__clear() {
  // clear all fields
  this->name = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool MyStructNestedAnnotation::operator==(const MyStructNestedAnnotation& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.name_ref() == rhs.name_ref())) {
    return false;
  }
  return true;
}

bool MyStructNestedAnnotation::operator<(const MyStructNestedAnnotation& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.name_ref() == rhs.name_ref())) {
    return lhs.name_ref() < rhs.name_ref();
  }
  return false;
}


void swap(MyStructNestedAnnotation& a, MyStructNestedAnnotation& b) {
  using ::std::swap;
  swap(a.name_ref().value(), b.name_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void MyStructNestedAnnotation::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStructNestedAnnotation::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStructNestedAnnotation::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStructNestedAnnotation::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyStructNestedAnnotation::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStructNestedAnnotation::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStructNestedAnnotation::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStructNestedAnnotation::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::MyStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::MyStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
MyStruct::MyStruct(const MyStruct&) = default;
MyStruct& MyStruct::operator=(const MyStruct&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
MyStruct::MyStruct() :
      majorVer(0) {
}

THRIFT_IGNORE_ISSET_USE_WARNING_END

MyStruct::~MyStruct() {}

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
MyStruct::MyStruct(MyStruct&& other) noexcept  :
    majorVer(std::move(other.majorVer)),
    package(std::move(other.package)),
    annotation_with_quote(std::move(other.annotation_with_quote)),
    class_(std::move(other.class_)),
    annotation_with_trailing_comma(std::move(other.annotation_with_trailing_comma)),
    empty_annotations(std::move(other.empty_annotations)),
    __isset(other.__isset) {}
MyStruct& MyStruct::operator=(FOLLY_MAYBE_UNUSED MyStruct&& other) noexcept {
    this->majorVer = std::move(other.majorVer);
    this->package = std::move(other.package);
    this->annotation_with_quote = std::move(other.annotation_with_quote);
    this->class_ = std::move(other.class_);
    this->annotation_with_trailing_comma = std::move(other.annotation_with_trailing_comma);
    this->empty_annotations = std::move(other.empty_annotations);
    __isset = other.__isset;
    return *this;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
MyStruct::MyStruct(apache::thrift::FragileConstructor, ::std::int64_t majorVer__arg, ::std::string package__arg, ::std::string annotation_with_quote__arg, ::std::string class___arg, ::std::string annotation_with_trailing_comma__arg, ::std::string empty_annotations__arg) :
    majorVer(std::move(majorVer__arg)),
    package(std::move(package__arg)),
    annotation_with_quote(std::move(annotation_with_quote__arg)),
    class_(std::move(class___arg)),
    annotation_with_trailing_comma(std::move(annotation_with_trailing_comma__arg)),
    empty_annotations(std::move(empty_annotations__arg)) {
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
  __isset.__fbthrift_set(folly::index_constant<1>(), true);
  __isset.__fbthrift_set(folly::index_constant<2>(), true);
  __isset.__fbthrift_set(folly::index_constant<3>(), true);
  __isset.__fbthrift_set(folly::index_constant<4>(), true);
  __isset.__fbthrift_set(folly::index_constant<5>(), true);
}
THRIFT_IGNORE_ISSET_USE_WARNING_END

void MyStruct::__clear() {
  // clear all fields
  this->majorVer = 0;
  this->package = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->annotation_with_quote = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->class_ = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->annotation_with_trailing_comma = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->empty_annotations = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool MyStruct::operator==(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.majorVer_ref() == rhs.majorVer_ref())) {
    return false;
  }
  if (!(lhs.package_ref() == rhs.package_ref())) {
    return false;
  }
  if (!(lhs.annotation_with_quote_ref() == rhs.annotation_with_quote_ref())) {
    return false;
  }
  if (!(lhs.class__ref() == rhs.class__ref())) {
    return false;
  }
  if (!(lhs.annotation_with_trailing_comma_ref() == rhs.annotation_with_trailing_comma_ref())) {
    return false;
  }
  if (!(lhs.empty_annotations_ref() == rhs.empty_annotations_ref())) {
    return false;
  }
  return true;
}

bool MyStruct::operator<(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.majorVer_ref() == rhs.majorVer_ref())) {
    return lhs.majorVer_ref() < rhs.majorVer_ref();
  }
  if (!(lhs.package_ref() == rhs.package_ref())) {
    return lhs.package_ref() < rhs.package_ref();
  }
  if (!(lhs.annotation_with_quote_ref() == rhs.annotation_with_quote_ref())) {
    return lhs.annotation_with_quote_ref() < rhs.annotation_with_quote_ref();
  }
  if (!(lhs.class__ref() == rhs.class__ref())) {
    return lhs.class__ref() < rhs.class__ref();
  }
  if (!(lhs.annotation_with_trailing_comma_ref() == rhs.annotation_with_trailing_comma_ref())) {
    return lhs.annotation_with_trailing_comma_ref() < rhs.annotation_with_trailing_comma_ref();
  }
  if (!(lhs.empty_annotations_ref() == rhs.empty_annotations_ref())) {
    return lhs.empty_annotations_ref() < rhs.empty_annotations_ref();
  }
  return false;
}


void swap(MyStruct& a, MyStruct& b) {
  using ::std::swap;
  swap(a.majorVer_ref().value(), b.majorVer_ref().value());
  swap(a.package_ref().value(), b.package_ref().value());
  swap(a.annotation_with_quote_ref().value(), b.annotation_with_quote_ref().value());
  swap(a.class__ref().value(), b.class__ref().value());
  swap(a.annotation_with_trailing_comma_ref().value(), b.annotation_with_trailing_comma_ref().value());
  swap(a.empty_annotations_ref().value(), b.empty_annotations_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::SecretStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::SecretStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
SecretStruct::SecretStruct(const SecretStruct&) = default;
SecretStruct& SecretStruct::operator=(const SecretStruct&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
SecretStruct::SecretStruct(SecretStruct&& other) noexcept  :
    id(std::move(other.id)),
    password(std::move(other.password)),
    __isset(other.__isset) {}
SecretStruct& SecretStruct::operator=(FOLLY_MAYBE_UNUSED SecretStruct&& other) noexcept {
    this->id = std::move(other.id);
    this->password = std::move(other.password);
    __isset = other.__isset;
    return *this;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
SecretStruct::SecretStruct(apache::thrift::FragileConstructor, ::std::int64_t id__arg, ::std::string password__arg) :
    id(std::move(id__arg)),
    password(std::move(password__arg)) {
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
  __isset.__fbthrift_set(folly::index_constant<1>(), true);
}
THRIFT_IGNORE_ISSET_USE_WARNING_END

void SecretStruct::__clear() {
  // clear all fields
  this->id = 0;
  this->password = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool SecretStruct::operator==(const SecretStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.id_ref() == rhs.id_ref())) {
    return false;
  }
  if (!(lhs.password_ref() == rhs.password_ref())) {
    return false;
  }
  return true;
}

bool SecretStruct::operator<(const SecretStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.id_ref() == rhs.id_ref())) {
    return lhs.id_ref() < rhs.id_ref();
  }
  if (!(lhs.password_ref() == rhs.password_ref())) {
    return lhs.password_ref() < rhs.password_ref();
  }
  return false;
}


void swap(SecretStruct& a, SecretStruct& b) {
  using ::std::swap;
  swap(a.id_ref().value(), b.id_ref().value());
  swap(a.password_ref().value(), b.password_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void SecretStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SecretStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SecretStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SecretStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SecretStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SecretStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SecretStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SecretStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2
