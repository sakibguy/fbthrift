/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/sink/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/sink/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/sink/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::InitialResponse>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::InitialResponse>;
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

InitialResponse::InitialResponse(const InitialResponse&) = default;
InitialResponse& InitialResponse::operator=(const InitialResponse&) = default;
InitialResponse::InitialResponse(InitialResponse&& other) noexcept  :
    content(std::move(other.content)),
    __isset(other.__isset) {
}

InitialResponse& InitialResponse::operator=(FOLLY_MAYBE_UNUSED InitialResponse&& other) noexcept {
    this->content = std::move(other.content);
    __isset = other.__isset;
    return *this;
}


InitialResponse::InitialResponse(apache::thrift::FragileConstructor, ::std::string content__arg) :
    content(std::move(content__arg)) {
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
}


void InitialResponse::__clear() {
  // clear all fields
  this->content = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

bool InitialResponse::operator==(const InitialResponse& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.content_ref() == rhs.content_ref())) {
    return false;
  }
  return true;
}

bool InitialResponse::operator<(const InitialResponse& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.content_ref() == rhs.content_ref())) {
    return lhs.content_ref() < rhs.content_ref();
  }
  return false;
}


void swap(InitialResponse& a, InitialResponse& b) {
  using ::std::swap;
  swap(a.content_ref().value(), b.content_ref().value());
  swap(a.__isset, b.__isset);
}

template void InitialResponse::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t InitialResponse::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t InitialResponse::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t InitialResponse::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void InitialResponse::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t InitialResponse::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t InitialResponse::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t InitialResponse::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::FinalResponse>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::FinalResponse>;
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

FinalResponse::FinalResponse(const FinalResponse&) = default;
FinalResponse& FinalResponse::operator=(const FinalResponse&) = default;
FinalResponse::FinalResponse(FinalResponse&& other) noexcept  :
    content(std::move(other.content)),
    __isset(other.__isset) {
}

FinalResponse& FinalResponse::operator=(FOLLY_MAYBE_UNUSED FinalResponse&& other) noexcept {
    this->content = std::move(other.content);
    __isset = other.__isset;
    return *this;
}


FinalResponse::FinalResponse(apache::thrift::FragileConstructor, ::std::string content__arg) :
    content(std::move(content__arg)) {
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
}


void FinalResponse::__clear() {
  // clear all fields
  this->content = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

bool FinalResponse::operator==(const FinalResponse& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.content_ref() == rhs.content_ref())) {
    return false;
  }
  return true;
}

bool FinalResponse::operator<(const FinalResponse& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.content_ref() == rhs.content_ref())) {
    return lhs.content_ref() < rhs.content_ref();
  }
  return false;
}


void swap(FinalResponse& a, FinalResponse& b) {
  using ::std::swap;
  swap(a.content_ref().value(), b.content_ref().value());
  swap(a.__isset, b.__isset);
}

template void FinalResponse::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t FinalResponse::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t FinalResponse::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t FinalResponse::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void FinalResponse::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t FinalResponse::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t FinalResponse::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t FinalResponse::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::SinkPayload>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::SinkPayload>;
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

SinkPayload::SinkPayload(const SinkPayload&) = default;
SinkPayload& SinkPayload::operator=(const SinkPayload&) = default;
SinkPayload::SinkPayload(SinkPayload&& other) noexcept  :
    content(std::move(other.content)),
    __isset(other.__isset) {
}

SinkPayload& SinkPayload::operator=(FOLLY_MAYBE_UNUSED SinkPayload&& other) noexcept {
    this->content = std::move(other.content);
    __isset = other.__isset;
    return *this;
}


SinkPayload::SinkPayload(apache::thrift::FragileConstructor, ::std::string content__arg) :
    content(std::move(content__arg)) {
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
}


void SinkPayload::__clear() {
  // clear all fields
  this->content = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

bool SinkPayload::operator==(const SinkPayload& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.content_ref() == rhs.content_ref())) {
    return false;
  }
  return true;
}

bool SinkPayload::operator<(const SinkPayload& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.content_ref() == rhs.content_ref())) {
    return lhs.content_ref() < rhs.content_ref();
  }
  return false;
}


void swap(SinkPayload& a, SinkPayload& b) {
  using ::std::swap;
  swap(a.content_ref().value(), b.content_ref().value());
  swap(a.__isset, b.__isset);
}

template void SinkPayload::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SinkPayload::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SinkPayload::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SinkPayload::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SinkPayload::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SinkPayload::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SinkPayload::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SinkPayload::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::CompatibleWithKeywordSink>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::CompatibleWithKeywordSink>;
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

CompatibleWithKeywordSink::CompatibleWithKeywordSink(const CompatibleWithKeywordSink&) = default;
CompatibleWithKeywordSink& CompatibleWithKeywordSink::operator=(const CompatibleWithKeywordSink&) = default;
CompatibleWithKeywordSink::CompatibleWithKeywordSink(CompatibleWithKeywordSink&& other) noexcept  :
    sink(std::move(other.sink)),
    __isset(other.__isset) {
}

CompatibleWithKeywordSink& CompatibleWithKeywordSink::operator=(FOLLY_MAYBE_UNUSED CompatibleWithKeywordSink&& other) noexcept {
    this->sink = std::move(other.sink);
    __isset = other.__isset;
    return *this;
}


CompatibleWithKeywordSink::CompatibleWithKeywordSink(apache::thrift::FragileConstructor, ::std::string sink__arg) :
    sink(std::move(sink__arg)) {
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
}


void CompatibleWithKeywordSink::__clear() {
  // clear all fields
  this->sink = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

bool CompatibleWithKeywordSink::operator==(const CompatibleWithKeywordSink& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.sink_ref() == rhs.sink_ref())) {
    return false;
  }
  return true;
}

bool CompatibleWithKeywordSink::operator<(const CompatibleWithKeywordSink& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.sink_ref() == rhs.sink_ref())) {
    return lhs.sink_ref() < rhs.sink_ref();
  }
  return false;
}


void swap(CompatibleWithKeywordSink& a, CompatibleWithKeywordSink& b) {
  using ::std::swap;
  swap(a.sink_ref().value(), b.sink_ref().value());
  swap(a.__isset, b.__isset);
}

template void CompatibleWithKeywordSink::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t CompatibleWithKeywordSink::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t CompatibleWithKeywordSink::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t CompatibleWithKeywordSink::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void CompatibleWithKeywordSink::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t CompatibleWithKeywordSink::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t CompatibleWithKeywordSink::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t CompatibleWithKeywordSink::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::InitialException>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::InitialException>;
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

InitialException::InitialException(const InitialException&) = default;
InitialException& InitialException::operator=(const InitialException&) = default;
InitialException::InitialException() {
}


InitialException::~InitialException() {}

InitialException::InitialException(InitialException&& other) noexcept  :
    reason(std::move(other.reason)),
    __isset(other.__isset) {
}

InitialException& InitialException::operator=(FOLLY_MAYBE_UNUSED InitialException&& other) noexcept {
    this->reason = std::move(other.reason);
    __isset = other.__isset;
    return *this;
}


InitialException::InitialException(apache::thrift::FragileConstructor, ::std::string reason__arg) :
    reason(std::move(reason__arg)) {
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
}


void InitialException::__clear() {
  // clear all fields
  this->reason = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

bool InitialException::operator==(const InitialException& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.reason_ref() == rhs.reason_ref())) {
    return false;
  }
  return true;
}

bool InitialException::operator<(const InitialException& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.reason_ref() == rhs.reason_ref())) {
    return lhs.reason_ref() < rhs.reason_ref();
  }
  return false;
}


void swap(InitialException& a, InitialException& b) {
  using ::std::swap;
  swap(a.reason_ref().value(), b.reason_ref().value());
  swap(a.__isset, b.__isset);
}

template void InitialException::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t InitialException::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t InitialException::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t InitialException::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void InitialException::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t InitialException::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t InitialException::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t InitialException::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::SinkException1>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::SinkException1>;
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

SinkException1::SinkException1(const SinkException1&) = default;
SinkException1& SinkException1::operator=(const SinkException1&) = default;
SinkException1::SinkException1() {
}


SinkException1::~SinkException1() {}

SinkException1::SinkException1(SinkException1&& other) noexcept  :
    reason(std::move(other.reason)),
    __isset(other.__isset) {
}

SinkException1& SinkException1::operator=(FOLLY_MAYBE_UNUSED SinkException1&& other) noexcept {
    this->reason = std::move(other.reason);
    __isset = other.__isset;
    return *this;
}


SinkException1::SinkException1(apache::thrift::FragileConstructor, ::std::string reason__arg) :
    reason(std::move(reason__arg)) {
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
}


void SinkException1::__clear() {
  // clear all fields
  this->reason = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

bool SinkException1::operator==(const SinkException1& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.reason_ref() == rhs.reason_ref())) {
    return false;
  }
  return true;
}

bool SinkException1::operator<(const SinkException1& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.reason_ref() == rhs.reason_ref())) {
    return lhs.reason_ref() < rhs.reason_ref();
  }
  return false;
}


void swap(SinkException1& a, SinkException1& b) {
  using ::std::swap;
  swap(a.reason_ref().value(), b.reason_ref().value());
  swap(a.__isset, b.__isset);
}

template void SinkException1::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SinkException1::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SinkException1::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SinkException1::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SinkException1::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SinkException1::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SinkException1::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SinkException1::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::SinkException2>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::SinkException2>;
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

SinkException2::SinkException2(const SinkException2&) = default;
SinkException2& SinkException2::operator=(const SinkException2&) = default;
SinkException2::SinkException2() :
      reason() {
}


SinkException2::~SinkException2() {}

SinkException2::SinkException2(SinkException2&& other) noexcept  :
    reason(std::move(other.reason)),
    __isset(other.__isset) {
}

SinkException2& SinkException2::operator=(FOLLY_MAYBE_UNUSED SinkException2&& other) noexcept {
    this->reason = std::move(other.reason);
    __isset = other.__isset;
    return *this;
}


SinkException2::SinkException2(apache::thrift::FragileConstructor, ::std::int64_t reason__arg) :
    reason(std::move(reason__arg)) {
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
}


void SinkException2::__clear() {
  // clear all fields
  this->reason = ::std::int64_t();
  __isset = {};
}

bool SinkException2::operator==(const SinkException2& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.reason_ref() == rhs.reason_ref())) {
    return false;
  }
  return true;
}

bool SinkException2::operator<(const SinkException2& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.reason_ref() == rhs.reason_ref())) {
    return lhs.reason_ref() < rhs.reason_ref();
  }
  return false;
}


void swap(SinkException2& a, SinkException2& b) {
  using ::std::swap;
  swap(a.reason_ref().value(), b.reason_ref().value());
  swap(a.__isset, b.__isset);
}

template void SinkException2::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SinkException2::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SinkException2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SinkException2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SinkException2::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SinkException2::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SinkException2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SinkException2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2
