/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_data.h"


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

void TccStructTraits<::cpp2::MyDataItem>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::MyDataItem>;
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
MyDataItem::MyDataItem(apache::thrift::FragileConstructor) {}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void MyDataItem::__clear() {
  // clear all fields
}

bool MyDataItem::operator==(const MyDataItem& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  return true;
}

bool MyDataItem::operator<(const MyDataItem& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  return false;
}


void swap(MyDataItem& a, MyDataItem& b) {
  using ::std::swap;
  (void)a;
  (void)b;
}

template void MyDataItem::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyDataItem::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyDataItem::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyDataItem::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyDataItem::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyDataItem::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyDataItem::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyDataItem::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



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
MyStruct::MyStruct() :
      MyIntField(0),
      myEnum( ::cpp2::MyEnum::MyValue1),
      oneway(0),
      readonly(0),
      idempotent(0) {}

THRIFT_IGNORE_ISSET_USE_WARNING_END

MyStruct::~MyStruct() {}

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
MyStruct::MyStruct(MyStruct&& other) noexcept  :
    MyIntField(std::move(other.MyIntField)),
    MyStringField(std::move(other.MyStringField)),
    MyDataField(std::move(other.MyDataField)),
    myEnum(std::move(other.myEnum)),
    oneway(std::move(other.oneway)),
    readonly(std::move(other.readonly)),
    idempotent(std::move(other.idempotent)),
    __isset(other.__isset) {}

MyStruct& MyStruct::operator=(FOLLY_MAYBE_UNUSED MyStruct&& other) noexcept {
    this->MyIntField = std::move(other.MyIntField);
    this->MyStringField = std::move(other.MyStringField);
    this->MyDataField = std::move(other.MyDataField);
    this->myEnum = std::move(other.myEnum);
    this->oneway = std::move(other.oneway);
    this->readonly = std::move(other.readonly);
    this->idempotent = std::move(other.idempotent);
    __isset = other.__isset;
    return *this;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
MyStruct::MyStruct(apache::thrift::FragileConstructor, ::std::int64_t MyIntField__arg, ::std::string MyStringField__arg, ::cpp2::MyDataItem MyDataField__arg, ::cpp2::MyEnum myEnum__arg, bool oneway__arg, bool readonly__arg, bool idempotent__arg) :
    MyIntField(std::move(MyIntField__arg)),
    MyStringField(std::move(MyStringField__arg)),
    MyDataField(std::move(MyDataField__arg)),
    myEnum(std::move(myEnum__arg)),
    oneway(std::move(oneway__arg)),
    readonly(std::move(readonly__arg)),
    idempotent(std::move(idempotent__arg)) {
  __isset.MyIntField = true;
  __isset.MyStringField = true;
  __isset.MyDataField = true;
  __isset.myEnum = true;
  __isset.oneway = true;
  __isset.readonly = true;
  __isset.idempotent = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void MyStruct::__clear() {
  // clear all fields
  this->MyIntField = 0;
  this->MyStringField = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->myEnum =  ::cpp2::MyEnum::MyValue1;
  this->oneway = 0;
  this->readonly = 0;
  this->idempotent = 0;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool MyStruct::operator==(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.MyIntField == rhs.MyIntField)) {
    return false;
  }
  if (!(lhs.MyStringField == rhs.MyStringField)) {
    return false;
  }
  if (!(lhs.MyDataField == rhs.MyDataField)) {
    return false;
  }
  if (!(lhs.myEnum == rhs.myEnum)) {
    return false;
  }
  if (!(lhs.oneway == rhs.oneway)) {
    return false;
  }
  if (!(lhs.readonly == rhs.readonly)) {
    return false;
  }
  if (!(lhs.idempotent == rhs.idempotent)) {
    return false;
  }
  return true;
}

bool MyStruct::operator<(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.MyIntField == rhs.MyIntField)) {
    return lhs.MyIntField < rhs.MyIntField;
  }
  if (!(lhs.MyStringField == rhs.MyStringField)) {
    return lhs.MyStringField < rhs.MyStringField;
  }
  if (!(lhs.MyDataField == rhs.MyDataField)) {
    return lhs.MyDataField < rhs.MyDataField;
  }
  if (!(lhs.myEnum == rhs.myEnum)) {
    return lhs.myEnum < rhs.myEnum;
  }
  if (!(lhs.oneway == rhs.oneway)) {
    return lhs.oneway < rhs.oneway;
  }
  if (!(lhs.readonly == rhs.readonly)) {
    return lhs.readonly < rhs.readonly;
  }
  if (!(lhs.idempotent == rhs.idempotent)) {
    return lhs.idempotent < rhs.idempotent;
  }
  return false;
}

const ::cpp2::MyDataItem& MyStruct::get_MyDataField() const& {
  return MyDataField;
}

::cpp2::MyDataItem MyStruct::get_MyDataField() && {
  return std::move(MyDataField);
}


void swap(MyStruct& a, MyStruct& b) {
  using ::std::swap;
  swap(a.MyIntField_ref().value(), b.MyIntField_ref().value());
  swap(a.MyStringField_ref().value(), b.MyStringField_ref().value());
  swap(a.MyDataField_ref().value(), b.MyDataField_ref().value());
  swap(a.myEnum_ref().value(), b.myEnum_ref().value());
  swap(a.oneway_ref().value(), b.oneway_ref().value());
  swap(a.readonly_ref().value(), b.readonly_ref().value());
  swap(a.idempotent_ref().value(), b.idempotent_ref().value());
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

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        MyStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::MyDataItem>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        MyStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::MyDataItem>,
    "inconsistent use of nimble option");

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::MyUnion>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::MyUnion>;
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

namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::MyUnion::Type>::size;
folly::Range<::cpp2::MyUnion::Type const*> const TEnumTraits<::cpp2::MyUnion::Type>::values = folly::range(TEnumDataStorage<::cpp2::MyUnion::Type>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::MyUnion::Type>::names = folly::range(TEnumDataStorage<::cpp2::MyUnion::Type>::names);

char const* TEnumTraits<::cpp2::MyUnion::Type>::findName(type value) {
  using factory = detail::TEnumMapFactory<::cpp2::MyUnion::Type>;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::MyUnion::Type>::findValue(char const* name, type* out) {
  using factory = detail::TEnumMapFactory<::cpp2::MyUnion::Type>;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}
}} // apache::thrift
namespace cpp2 {

void MyUnion::__clear() {
  // clear all fields
  if (type_ == Type::__EMPTY__) { return; }
  switch(type_) {
    case Type::myEnum:
      destruct(value_.myEnum);
      break;
    case Type::myStruct:
      destruct(value_.myStruct);
      break;
    case Type::myDataItem:
      destruct(value_.myDataItem);
      break;
    default:
      assert(false);
      break;
  }
  type_ = Type::__EMPTY__;
}

bool MyUnion::operator==(const MyUnion& rhs) const {
  if (type_ != rhs.type_) { return false; }
  switch(type_) {
    case Type::myEnum:
      return value_.myEnum == rhs.value_.myEnum;
    case Type::myStruct:
      return value_.myStruct == rhs.value_.myStruct;
    case Type::myDataItem:
      return value_.myDataItem == rhs.value_.myDataItem;
    default:
      return true;
  }
}

bool MyUnion::operator<(const MyUnion& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (lhs.type_ != rhs.type_) {
    return lhs.type_ < rhs.type_;
  }
  switch (lhs.type_) {
    case Type::myEnum:
      return lhs.value_.myEnum < rhs.value_.myEnum;
    case Type::myStruct:
      return lhs.value_.myStruct < rhs.value_.myStruct;
    case Type::myDataItem:
      return lhs.value_.myDataItem < rhs.value_.myDataItem;
    default:
      return false;
  }
}

void swap(MyUnion& a, MyUnion& b) {
  MyUnion temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void MyUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        MyUnion,
        ::apache::thrift::type_class::structure,
        ::cpp2::MyStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        MyUnion,
        ::apache::thrift::type_class::structure,
        ::cpp2::MyDataItem>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        MyUnion,
        ::apache::thrift::type_class::structure,
        ::cpp2::MyStruct>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        MyUnion,
        ::apache::thrift::type_class::structure,
        ::cpp2::MyDataItem>,
    "inconsistent use of nimble option");

} // cpp2
