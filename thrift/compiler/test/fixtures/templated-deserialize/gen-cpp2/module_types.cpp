/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/templated-deserialize/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/templated-deserialize/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/templated-deserialize/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::MyEnumA>::size;
folly::Range<::cpp2::MyEnumA const*> const TEnumTraits<::cpp2::MyEnumA>::values = folly::range(TEnumDataStorage<::cpp2::MyEnumA>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::MyEnumA>::names = folly::range(TEnumDataStorage<::cpp2::MyEnumA>::names);

char const* TEnumTraits<::cpp2::MyEnumA>::findName(type value) {
  using factory = ::cpp2::_MyEnumA_EnumMapFactory;
  static folly::Indestructible<factory::ValuesToNamesMapType> const map{
      factory::makeValuesToNamesMap()};
  auto found = map->find(value);
  return found == map->end() ? nullptr : found->second;
}

bool TEnumTraits<::cpp2::MyEnumA>::findValue(char const* name, type* out) {
  using factory = ::cpp2::_MyEnumA_EnumMapFactory;
  static folly::Indestructible<factory::NamesToValuesMapType> const map{
      factory::makeNamesToValuesMap()};
  auto found = map->find(name);
  return found == map->end() ? false : (*out = found->second, true);
}

}} // apache::thrift

namespace cpp2 {
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _MyEnumA_EnumMapFactory::ValuesToNamesMapType _MyEnumA_VALUES_TO_NAMES = _MyEnumA_EnumMapFactory::makeValuesToNamesMap();
const _MyEnumA_EnumMapFactory::NamesToValuesMapType _MyEnumA_NAMES_TO_VALUES = _MyEnumA_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING

} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::SmallStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::SmallStruct>;
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


SmallStruct::SmallStruct(apache::thrift::FragileConstructor, bool small_A__arg, ::std::int32_t small_B__arg) :
    small_A(std::move(small_A__arg)),
    small_B(std::move(small_B__arg)) {
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
  __isset.__fbthrift_set(folly::index_constant<1>(), true);
}


void SmallStruct::__clear() {
  // clear all fields
  this->small_A = bool();
  this->small_B = ::std::int32_t();
  __isset = {};
}

bool SmallStruct::operator==(const SmallStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.small_A_ref() == rhs.small_A_ref())) {
    return false;
  }
  if (!(lhs.small_B_ref() == rhs.small_B_ref())) {
    return false;
  }
  return true;
}

bool SmallStruct::operator<(const SmallStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.small_A_ref() == rhs.small_A_ref())) {
    return lhs.small_A_ref() < rhs.small_A_ref();
  }
  if (!(lhs.small_B_ref() == rhs.small_B_ref())) {
    return lhs.small_B_ref() < rhs.small_B_ref();
  }
  return false;
}


void swap(SmallStruct& a, SmallStruct& b) {
  using ::std::swap;
  swap(a.small_A_ref().value(), b.small_A_ref().value());
  swap(a.small_B_ref().value(), b.small_B_ref().value());
  swap(a.__isset, b.__isset);
}

template void SmallStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SmallStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SmallStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SmallStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SmallStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SmallStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SmallStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SmallStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::containerStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::containerStruct>;
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

containerStruct::containerStruct(const containerStruct& srcObj) {
  fieldA = srcObj.fieldA;
  __isset.__fbthrift_set(folly::index_constant<0>(),srcObj.__isset.__fbthrift_get(folly::index_constant<0>()));
  fieldB = srcObj.fieldB;
  __isset.__fbthrift_set(folly::index_constant<1>(),srcObj.__isset.__fbthrift_get(folly::index_constant<1>()));
  fieldC = srcObj.fieldC;
  __isset.__fbthrift_set(folly::index_constant<2>(),srcObj.__isset.__fbthrift_get(folly::index_constant<2>()));
  fieldD = srcObj.fieldD;
  __isset.__fbthrift_set(folly::index_constant<3>(),srcObj.__isset.__fbthrift_get(folly::index_constant<3>()));
  fieldE = srcObj.fieldE;
  __isset.__fbthrift_set(folly::index_constant<4>(),srcObj.__isset.__fbthrift_get(folly::index_constant<4>()));
  fieldF = srcObj.fieldF;
  __isset.__fbthrift_set(folly::index_constant<5>(),srcObj.__isset.__fbthrift_get(folly::index_constant<5>()));
  fieldG = srcObj.fieldG;
  __isset.__fbthrift_set(folly::index_constant<6>(),srcObj.__isset.__fbthrift_get(folly::index_constant<6>()));
  fieldH = srcObj.fieldH;
  __isset.__fbthrift_set(folly::index_constant<7>(),srcObj.__isset.__fbthrift_get(folly::index_constant<7>()));
  fieldI = srcObj.fieldI;
  __isset.__fbthrift_set(folly::index_constant<8>(),srcObj.__isset.__fbthrift_get(folly::index_constant<8>()));
  fieldJ = srcObj.fieldJ;
  __isset.__fbthrift_set(folly::index_constant<9>(),srcObj.__isset.__fbthrift_get(folly::index_constant<9>()));
  fieldK = srcObj.fieldK;
  __isset.__fbthrift_set(folly::index_constant<10>(),srcObj.__isset.__fbthrift_get(folly::index_constant<10>()));
  fieldL = srcObj.fieldL;
  __isset.__fbthrift_set(folly::index_constant<11>(),srcObj.__isset.__fbthrift_get(folly::index_constant<11>()));
  fieldM = srcObj.fieldM;
  __isset.__fbthrift_set(folly::index_constant<12>(),srcObj.__isset.__fbthrift_get(folly::index_constant<12>()));
  fieldN = srcObj.fieldN;
  __isset.__fbthrift_set(folly::index_constant<13>(),srcObj.__isset.__fbthrift_get(folly::index_constant<13>()));
  fieldO = srcObj.fieldO;
  __isset.__fbthrift_set(folly::index_constant<14>(),srcObj.__isset.__fbthrift_get(folly::index_constant<14>()));
  fieldP = srcObj.fieldP;
  __isset.__fbthrift_set(folly::index_constant<15>(),srcObj.__isset.__fbthrift_get(folly::index_constant<15>()));
  fieldQ = srcObj.fieldQ;
  __isset.__fbthrift_set(folly::index_constant<16>(),srcObj.__isset.__fbthrift_get(folly::index_constant<16>()));
  fieldR = ::apache::thrift::detail::st::copy_field<
        ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>>(srcObj.fieldR);
  fieldS = ::apache::thrift::detail::st::copy_field<
        ::apache::thrift::type_class::structure>(srcObj.fieldS);
  fieldT = srcObj.fieldT;
  fieldU = srcObj.fieldU;
  fieldX = ::apache::thrift::detail::st::copy_field<
        ::apache::thrift::type_class::structure>(srcObj.fieldX);
}

containerStruct& containerStruct::operator=(const containerStruct& src) {
  containerStruct tmp(src);
  swap(*this, tmp);
  return *this;
}

containerStruct::containerStruct() :
      fieldA(),
      fieldC(static_cast<::std::set<::std::int32_t>>(std::initializer_list<::std::int32_t>{1,
  2,
  3,
  4})),
      fieldE(apache::thrift::StringTraits<std::string>::fromStringLiteral("somestring")),
      fieldI(static_cast<bool>(true)),
      fieldJ(static_cast<::std::map<::std::string, ::std::vector<::std::int32_t>>>(std::initializer_list<std::pair<const ::std::string, ::std::vector<::std::int32_t>>>{{apache::thrift::StringTraits<std::string>::fromStringLiteral("subfieldA"), std::initializer_list<::std::int32_t>{1,
  4,
  8,
  12}},
  {apache::thrift::StringTraits<std::string>::fromStringLiteral("subfieldB"), std::initializer_list<::std::int32_t>{2,
  5,
  9,
  13}}})),
      fieldQ(),
      fieldR(std::make_unique<::std::map<::std::string, bool>>()),
      fieldS(std::make_unique<::cpp2::SmallStruct>()),
      fieldT(std::make_shared<::cpp2::SmallStruct>()),
      fieldU(std::make_shared<::cpp2::SmallStruct>()),
      fieldX(std::make_unique<::cpp2::SmallStruct>()) {
}


containerStruct::~containerStruct() {}

containerStruct::containerStruct(containerStruct&& other) noexcept  :
    fieldA(std::move(other.fieldA)),
    fieldB(std::move(other.fieldB)),
    fieldC(std::move(other.fieldC)),
    fieldD(std::move(other.fieldD)),
    fieldE(std::move(other.fieldE)),
    fieldF(std::move(other.fieldF)),
    fieldG(std::move(other.fieldG)),
    fieldH(std::move(other.fieldH)),
    fieldI(std::move(other.fieldI)),
    fieldJ(std::move(other.fieldJ)),
    fieldK(std::move(other.fieldK)),
    fieldL(std::move(other.fieldL)),
    fieldM(std::move(other.fieldM)),
    fieldN(std::move(other.fieldN)),
    fieldO(std::move(other.fieldO)),
    fieldP(std::move(other.fieldP)),
    fieldQ(std::move(other.fieldQ)),
    fieldR(std::move(other.fieldR)),
    fieldS(std::move(other.fieldS)),
    fieldT(std::move(other.fieldT)),
    fieldU(std::move(other.fieldU)),
    fieldX(std::move(other.fieldX)),
    __isset(other.__isset) {
}

containerStruct& containerStruct::operator=(FOLLY_MAYBE_UNUSED containerStruct&& other) noexcept {
    this->fieldA = std::move(other.fieldA);
    this->fieldB = std::move(other.fieldB);
    this->fieldC = std::move(other.fieldC);
    this->fieldD = std::move(other.fieldD);
    this->fieldE = std::move(other.fieldE);
    this->fieldF = std::move(other.fieldF);
    this->fieldG = std::move(other.fieldG);
    this->fieldH = std::move(other.fieldH);
    this->fieldI = std::move(other.fieldI);
    this->fieldJ = std::move(other.fieldJ);
    this->fieldK = std::move(other.fieldK);
    this->fieldL = std::move(other.fieldL);
    this->fieldM = std::move(other.fieldM);
    this->fieldN = std::move(other.fieldN);
    this->fieldO = std::move(other.fieldO);
    this->fieldP = std::move(other.fieldP);
    this->fieldQ = std::move(other.fieldQ);
    this->fieldR = std::move(other.fieldR);
    this->fieldS = std::move(other.fieldS);
    this->fieldT = std::move(other.fieldT);
    this->fieldU = std::move(other.fieldU);
    this->fieldX = std::move(other.fieldX);
    __isset = other.__isset;
    return *this;
}


containerStruct::containerStruct(apache::thrift::FragileConstructor, bool fieldA__arg, ::std::map<::std::string, bool> fieldB__arg, ::std::set<::std::int32_t> fieldC__arg, ::std::string fieldD__arg, ::std::string fieldE__arg, ::std::vector<::std::vector<::std::vector<::std::int32_t>>> fieldF__arg, ::std::map<::std::string, ::std::map<::std::string, ::std::map<::std::string, ::std::int32_t>>> fieldG__arg, ::std::vector<::std::set<::std::int32_t>> fieldH__arg, bool fieldI__arg, ::std::map<::std::string, ::std::vector<::std::int32_t>> fieldJ__arg, ::std::vector<::std::vector<::std::vector<::std::vector<::std::int32_t>>>> fieldK__arg, ::std::set<::std::set<::std::set<bool>>> fieldL__arg, ::std::map<::std::set<::std::vector<::std::int32_t>>, ::std::map<::std::vector<::std::set<::std::string>>, ::std::string>> fieldM__arg, ::std::vector<::cpp2::IndirectionA> fieldN__arg, ::std::vector<::cpp2::IndirectionB> fieldO__arg, ::std::vector<::cpp2::IndirectionC> fieldP__arg, ::cpp2::MyEnumA fieldQ__arg, ::std::unique_ptr<::std::map<::std::string, bool>> fieldR__arg, ::std::unique_ptr<::cpp2::SmallStruct> fieldS__arg, ::std::shared_ptr<::cpp2::SmallStruct> fieldT__arg, ::std::shared_ptr<const ::cpp2::SmallStruct> fieldU__arg, ::std::unique_ptr<::cpp2::SmallStruct> fieldX__arg) :
    fieldA(std::move(fieldA__arg)),
    fieldB(std::move(fieldB__arg)),
    fieldC(std::move(fieldC__arg)),
    fieldD(std::move(fieldD__arg)),
    fieldE(std::move(fieldE__arg)),
    fieldF(std::move(fieldF__arg)),
    fieldG(std::move(fieldG__arg)),
    fieldH(std::move(fieldH__arg)),
    fieldI(std::move(fieldI__arg)),
    fieldJ(std::move(fieldJ__arg)),
    fieldK(std::move(fieldK__arg)),
    fieldL(std::move(fieldL__arg)),
    fieldM(std::move(fieldM__arg)),
    fieldN(std::move(fieldN__arg)),
    fieldO(std::move(fieldO__arg)),
    fieldP(std::move(fieldP__arg)),
    fieldQ(std::move(fieldQ__arg)),
    fieldR(std::move(fieldR__arg)),
    fieldS(std::move(fieldS__arg)),
    fieldT(std::move(fieldT__arg)),
    fieldU(std::move(fieldU__arg)),
    fieldX(std::move(fieldX__arg)) {
  __isset.__fbthrift_set(folly::index_constant<0>(), true);
  __isset.__fbthrift_set(folly::index_constant<1>(), true);
  __isset.__fbthrift_set(folly::index_constant<2>(), true);
  __isset.__fbthrift_set(folly::index_constant<3>(), true);
  __isset.__fbthrift_set(folly::index_constant<4>(), true);
  __isset.__fbthrift_set(folly::index_constant<5>(), true);
  __isset.__fbthrift_set(folly::index_constant<6>(), true);
  __isset.__fbthrift_set(folly::index_constant<7>(), true);
  __isset.__fbthrift_set(folly::index_constant<8>(), true);
  __isset.__fbthrift_set(folly::index_constant<9>(), true);
  __isset.__fbthrift_set(folly::index_constant<10>(), true);
  __isset.__fbthrift_set(folly::index_constant<11>(), true);
  __isset.__fbthrift_set(folly::index_constant<12>(), true);
  __isset.__fbthrift_set(folly::index_constant<13>(), true);
  __isset.__fbthrift_set(folly::index_constant<14>(), true);
  __isset.__fbthrift_set(folly::index_constant<15>(), true);
  __isset.__fbthrift_set(folly::index_constant<16>(), true);
}


void containerStruct::__clear() {
  // clear all fields
  this->fieldA = bool();
  this->fieldB.clear();
  this->fieldC.clear();
  this->fieldD = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->fieldE = apache::thrift::StringTraits<std::string>::fromStringLiteral("somestring");
  this->fieldF.clear();
  this->fieldG.clear();
  this->fieldH.clear();
  this->fieldI = static_cast<bool>(true);
  this->fieldJ.clear();
  this->fieldK.clear();
  this->fieldL.clear();
  this->fieldM.clear();
  this->fieldN.clear();
  this->fieldO.clear();
  this->fieldP.clear();
  this->fieldQ = ::cpp2::MyEnumA();
  this->fieldR = ::apache::thrift::detail::make_mutable_smart_ptr<::std::unique_ptr<::std::map<::std::string, bool>>>();
  if (this->fieldS) this->fieldS->__clear();
  if (this->fieldT) this->fieldT->__clear();
  if (this->fieldU) this->fieldU.reset(new typename decltype(this->fieldU)::element_type());
  if (this->fieldX) this->fieldX->__clear();
  __isset = {};
}

bool containerStruct::operator==(const containerStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.fieldA_ref() == rhs.fieldA_ref())) {
    return false;
  }
  if (!(lhs.fieldB_ref() == rhs.fieldB_ref())) {
    return false;
  }
  if (!(lhs.fieldC_ref() == rhs.fieldC_ref())) {
    return false;
  }
  if (!(lhs.fieldD_ref() == rhs.fieldD_ref())) {
    return false;
  }
  if (!(lhs.fieldE_ref() == rhs.fieldE_ref())) {
    return false;
  }
  if (!(lhs.fieldF_ref() == rhs.fieldF_ref())) {
    return false;
  }
  if (!(lhs.fieldG_ref() == rhs.fieldG_ref())) {
    return false;
  }
  if (!(lhs.fieldH_ref() == rhs.fieldH_ref())) {
    return false;
  }
  if (!(lhs.fieldI_ref() == rhs.fieldI_ref())) {
    return false;
  }
  if (!(lhs.fieldJ_ref() == rhs.fieldJ_ref())) {
    return false;
  }
  if (!(lhs.fieldK_ref() == rhs.fieldK_ref())) {
    return false;
  }
  if (!(lhs.fieldL_ref() == rhs.fieldL_ref())) {
    return false;
  }
  if (!(lhs.fieldM_ref() == rhs.fieldM_ref())) {
    return false;
  }
  if (!(lhs.fieldN_ref() == rhs.fieldN_ref())) {
    return false;
  }
  if (!(lhs.fieldO_ref() == rhs.fieldO_ref())) {
    return false;
  }
  if (!(lhs.fieldP_ref() == rhs.fieldP_ref())) {
    return false;
  }
  if (!(lhs.fieldQ_ref() == rhs.fieldQ_ref())) {
    return false;
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldR_ref(), rhs.fieldR_ref()))) {
    return false;
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldS_ref(), rhs.fieldS_ref()))) {
    return false;
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldT_ref(), rhs.fieldT_ref()))) {
    return false;
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldU_ref(), rhs.fieldU_ref()))) {
    return false;
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldX_ref(), rhs.fieldX_ref()))) {
    return false;
  }
  return true;
}

bool containerStruct::operator<(const containerStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.fieldA_ref() == rhs.fieldA_ref())) {
    return lhs.fieldA_ref() < rhs.fieldA_ref();
  }
  if (!(lhs.fieldB_ref() == rhs.fieldB_ref())) {
    return lhs.fieldB_ref() < rhs.fieldB_ref();
  }
  if (!(lhs.fieldC_ref() == rhs.fieldC_ref())) {
    return lhs.fieldC_ref() < rhs.fieldC_ref();
  }
  if (!(lhs.fieldD_ref() == rhs.fieldD_ref())) {
    return lhs.fieldD_ref() < rhs.fieldD_ref();
  }
  if (!(lhs.fieldE_ref() == rhs.fieldE_ref())) {
    return lhs.fieldE_ref() < rhs.fieldE_ref();
  }
  if (!(lhs.fieldF_ref() == rhs.fieldF_ref())) {
    return lhs.fieldF_ref() < rhs.fieldF_ref();
  }
  if (!(lhs.fieldG_ref() == rhs.fieldG_ref())) {
    return lhs.fieldG_ref() < rhs.fieldG_ref();
  }
  if (!(lhs.fieldH_ref() == rhs.fieldH_ref())) {
    return lhs.fieldH_ref() < rhs.fieldH_ref();
  }
  if (!(lhs.fieldI_ref() == rhs.fieldI_ref())) {
    return lhs.fieldI_ref() < rhs.fieldI_ref();
  }
  if (!(lhs.fieldJ_ref() == rhs.fieldJ_ref())) {
    return lhs.fieldJ_ref() < rhs.fieldJ_ref();
  }
  if (!(lhs.fieldK_ref() == rhs.fieldK_ref())) {
    return lhs.fieldK_ref() < rhs.fieldK_ref();
  }
  if (!(lhs.fieldL_ref() == rhs.fieldL_ref())) {
    return lhs.fieldL_ref() < rhs.fieldL_ref();
  }
  if (!(lhs.fieldM_ref() == rhs.fieldM_ref())) {
    return lhs.fieldM_ref() < rhs.fieldM_ref();
  }
  if (!(lhs.fieldN_ref() == rhs.fieldN_ref())) {
    return lhs.fieldN_ref() < rhs.fieldN_ref();
  }
  if (!(lhs.fieldO_ref() == rhs.fieldO_ref())) {
    return lhs.fieldO_ref() < rhs.fieldO_ref();
  }
  if (!(lhs.fieldP_ref() == rhs.fieldP_ref())) {
    return lhs.fieldP_ref() < rhs.fieldP_ref();
  }
  if (!(lhs.fieldQ_ref() == rhs.fieldQ_ref())) {
    return lhs.fieldQ_ref() < rhs.fieldQ_ref();
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldR_ref(), rhs.fieldR_ref()))) {
    return ::apache::thrift::detail::pointer_less(lhs.fieldR_ref(), rhs.fieldR_ref());
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldS_ref(), rhs.fieldS_ref()))) {
    return ::apache::thrift::detail::pointer_less(lhs.fieldS_ref(), rhs.fieldS_ref());
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldT_ref(), rhs.fieldT_ref()))) {
    return ::apache::thrift::detail::pointer_less(lhs.fieldT_ref(), rhs.fieldT_ref());
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldU_ref(), rhs.fieldU_ref()))) {
    return ::apache::thrift::detail::pointer_less(lhs.fieldU_ref(), rhs.fieldU_ref());
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldX_ref(), rhs.fieldX_ref()))) {
    return ::apache::thrift::detail::pointer_less(lhs.fieldX_ref(), rhs.fieldX_ref());
  }
  return false;
}

const ::std::map<::std::string, bool>& containerStruct::get_fieldB() const& {
  return fieldB;
}

::std::map<::std::string, bool> containerStruct::get_fieldB() && {
  return std::move(fieldB);
}

const ::std::set<::std::int32_t>& containerStruct::get_fieldC() const& {
  return fieldC;
}

::std::set<::std::int32_t> containerStruct::get_fieldC() && {
  return std::move(fieldC);
}

const ::std::vector<::std::vector<::std::vector<::std::int32_t>>>& containerStruct::get_fieldF() const& {
  return fieldF;
}

::std::vector<::std::vector<::std::vector<::std::int32_t>>> containerStruct::get_fieldF() && {
  return std::move(fieldF);
}

const ::std::map<::std::string, ::std::map<::std::string, ::std::map<::std::string, ::std::int32_t>>>& containerStruct::get_fieldG() const& {
  return fieldG;
}

::std::map<::std::string, ::std::map<::std::string, ::std::map<::std::string, ::std::int32_t>>> containerStruct::get_fieldG() && {
  return std::move(fieldG);
}

const ::std::vector<::std::set<::std::int32_t>>& containerStruct::get_fieldH() const& {
  return fieldH;
}

::std::vector<::std::set<::std::int32_t>> containerStruct::get_fieldH() && {
  return std::move(fieldH);
}

const ::std::map<::std::string, ::std::vector<::std::int32_t>>& containerStruct::get_fieldJ() const& {
  return fieldJ;
}

::std::map<::std::string, ::std::vector<::std::int32_t>> containerStruct::get_fieldJ() && {
  return std::move(fieldJ);
}

const ::std::vector<::std::vector<::std::vector<::std::vector<::std::int32_t>>>>& containerStruct::get_fieldK() const& {
  return fieldK;
}

::std::vector<::std::vector<::std::vector<::std::vector<::std::int32_t>>>> containerStruct::get_fieldK() && {
  return std::move(fieldK);
}

const ::std::set<::std::set<::std::set<bool>>>& containerStruct::get_fieldL() const& {
  return fieldL;
}

::std::set<::std::set<::std::set<bool>>> containerStruct::get_fieldL() && {
  return std::move(fieldL);
}

const ::std::map<::std::set<::std::vector<::std::int32_t>>, ::std::map<::std::vector<::std::set<::std::string>>, ::std::string>>& containerStruct::get_fieldM() const& {
  return fieldM;
}

::std::map<::std::set<::std::vector<::std::int32_t>>, ::std::map<::std::vector<::std::set<::std::string>>, ::std::string>> containerStruct::get_fieldM() && {
  return std::move(fieldM);
}

const ::std::vector<::cpp2::IndirectionA>& containerStruct::get_fieldN() const& {
  return fieldN;
}

::std::vector<::cpp2::IndirectionA> containerStruct::get_fieldN() && {
  return std::move(fieldN);
}

const ::std::vector<::cpp2::IndirectionB>& containerStruct::get_fieldO() const& {
  return fieldO;
}

::std::vector<::cpp2::IndirectionB> containerStruct::get_fieldO() && {
  return std::move(fieldO);
}

const ::std::vector<::cpp2::IndirectionC>& containerStruct::get_fieldP() const& {
  return fieldP;
}

::std::vector<::cpp2::IndirectionC> containerStruct::get_fieldP() && {
  return std::move(fieldP);
}


void swap(containerStruct& a, containerStruct& b) {
  using ::std::swap;
  swap(a.fieldA_ref().value(), b.fieldA_ref().value());
  swap(a.fieldB_ref().value(), b.fieldB_ref().value());
  swap(a.fieldC_ref().value(), b.fieldC_ref().value());
  swap(a.fieldD_ref().value(), b.fieldD_ref().value());
  swap(a.fieldE_ref().value(), b.fieldE_ref().value());
  swap(a.fieldF_ref().value(), b.fieldF_ref().value());
  swap(a.fieldG_ref().value(), b.fieldG_ref().value());
  swap(a.fieldH_ref().value(), b.fieldH_ref().value());
  swap(a.fieldI_ref().value(), b.fieldI_ref().value());
  swap(a.fieldJ_ref().value(), b.fieldJ_ref().value());
  swap(a.fieldK_ref().value(), b.fieldK_ref().value());
  swap(a.fieldL_ref().value(), b.fieldL_ref().value());
  swap(a.fieldM_ref().value(), b.fieldM_ref().value());
  swap(a.fieldN_ref().value(), b.fieldN_ref().value());
  swap(a.fieldO_ref().value(), b.fieldO_ref().value());
  swap(a.fieldP_ref().value(), b.fieldP_ref().value());
  swap(a.fieldQ_ref().value(), b.fieldQ_ref().value());
  swap(a.fieldR, b.fieldR);
  swap(a.fieldS, b.fieldS);
  swap(a.fieldT, b.fieldT);
  swap(a.fieldU, b.fieldU);
  swap(a.fieldX, b.fieldX);
  swap(a.__isset, b.__isset);
}

template void containerStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t containerStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t containerStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t containerStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void containerStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t containerStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t containerStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t containerStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        containerStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::SmallStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        containerStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::SmallStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        containerStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::SmallStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        containerStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::SmallStruct>,
    "inconsistent use of json option");

static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        containerStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::SmallStruct>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        containerStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::SmallStruct>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        containerStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::SmallStruct>,
    "inconsistent use of nimble option");
static_assert(
    ::apache::thrift::detail::st::gen_check_nimble<
        containerStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::SmallStruct>,
    "inconsistent use of nimble option");

} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2
