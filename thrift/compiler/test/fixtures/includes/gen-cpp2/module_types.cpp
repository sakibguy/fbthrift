/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_data.h"


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

MyStruct::MyStruct(const MyStruct&) = default;
MyStruct& MyStruct::operator=(const MyStruct&) = default;
MyStruct::MyStruct(MyStruct&& other) noexcept  :
    MyIncludedField(std::move(other.MyIncludedField)),
    MyOtherIncludedField(std::move(other.MyOtherIncludedField)),
    MyIncludedInt(std::move(other.MyIncludedInt)),
    __isset(other.__isset) {
}

MyStruct& MyStruct::operator=(FOLLY_MAYBE_UNUSED MyStruct&& other) noexcept {
    this->MyIncludedField = std::move(other.MyIncludedField);
    this->MyOtherIncludedField = std::move(other.MyOtherIncludedField);
    this->MyIncludedInt = std::move(other.MyIncludedInt);
    __isset = other.__isset;
    return *this;
}


MyStruct::MyStruct(apache::thrift::FragileConstructor, ::cpp2::Included MyIncludedField__arg, ::cpp2::Included MyOtherIncludedField__arg, ::cpp2::IncludedInt64 MyIncludedInt__arg) :
    MyIncludedField(std::move(MyIncludedField__arg)),
    MyOtherIncludedField(std::move(MyOtherIncludedField__arg)),
    MyIncludedInt(std::move(MyIncludedInt__arg)) {
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
  __isset.__fbthrift_set(folly::index_constant<1>(), true);
  __isset.__fbthrift_set(folly::index_constant<2>(), true);
}


void MyStruct::__clear() {
  // clear all fields
  this->MyIncludedField.__clear();
  this->MyOtherIncludedField.__clear();
  this->MyIncludedInt = static_cast<::cpp2::IncludedInt64>(42);
  __isset = {};
}

bool MyStruct::operator==(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.MyIncludedField_ref() == rhs.MyIncludedField_ref())) {
    return false;
  }
  if (!(lhs.MyOtherIncludedField_ref() == rhs.MyOtherIncludedField_ref())) {
    return false;
  }
  if (!(lhs.MyIncludedInt_ref() == rhs.MyIncludedInt_ref())) {
    return false;
  }
  return true;
}

bool MyStruct::operator<(const MyStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.MyIncludedField_ref() == rhs.MyIncludedField_ref())) {
    return lhs.MyIncludedField_ref() < rhs.MyIncludedField_ref();
  }
  if (!(lhs.MyOtherIncludedField_ref() == rhs.MyOtherIncludedField_ref())) {
    return lhs.MyOtherIncludedField_ref() < rhs.MyOtherIncludedField_ref();
  }
  if (!(lhs.MyIncludedInt_ref() == rhs.MyIncludedInt_ref())) {
    return lhs.MyIncludedInt_ref() < rhs.MyIncludedInt_ref();
  }
  return false;
}

const ::cpp2::Included& MyStruct::get_MyIncludedField() const& {
  return MyIncludedField;
}

::cpp2::Included MyStruct::get_MyIncludedField() && {
  return std::move(MyIncludedField);
}

const ::cpp2::Included& MyStruct::get_MyOtherIncludedField() const& {
  return MyOtherIncludedField;
}

::cpp2::Included MyStruct::get_MyOtherIncludedField() && {
  return std::move(MyOtherIncludedField);
}


void swap(MyStruct& a, MyStruct& b) {
  using ::std::swap;
  swap(a.MyIncludedField_ref().value(), b.MyIncludedField_ref().value());
  swap(a.MyOtherIncludedField_ref().value(), b.MyOtherIncludedField_ref().value());
  swap(a.MyIncludedInt_ref().value(), b.MyIncludedInt_ref().value());
  swap(a.__isset, b.__isset);
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
        ::cpp2::Included>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        MyStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::Included>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        MyStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::Included>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        MyStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::Included>,
    "inconsistent use of nimble option");

} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2
