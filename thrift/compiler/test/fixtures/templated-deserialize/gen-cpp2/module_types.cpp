/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
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


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
SmallStruct::SmallStruct(apache::thrift::FragileConstructor, bool small_A__arg, ::std::int32_t small_B__arg) :
    small_A(std::move(small_A__arg)),
    small_B(std::move(small_B__arg)) {
  __isset.small_A = true;
  __isset.small_B = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void SmallStruct::__clear() {
  // clear all fields
  this->small_A = 0;
  this->small_B = 0;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool SmallStruct::operator==(const SmallStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.small_A == rhs.small_A)) {
    return false;
  }
  if (!(lhs.small_B == rhs.small_B)) {
    return false;
  }
  return true;
}

bool SmallStruct::operator<(const SmallStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.small_A == rhs.small_A)) {
    return lhs.small_A < rhs.small_A;
  }
  if (!(lhs.small_B == rhs.small_B)) {
    return lhs.small_B < rhs.small_B;
  }
  return false;
}


void swap(SmallStruct& a, SmallStruct& b) {
  using ::std::swap;
  swap(a.small_A_ref().value(), b.small_A_ref().value());
  swap(a.small_B_ref().value(), b.small_B_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
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
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldA = srcObj.__isset.fieldA;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldB = srcObj.fieldB;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldB = srcObj.__isset.fieldB;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldC = srcObj.fieldC;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldC = srcObj.__isset.fieldC;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldD = srcObj.fieldD;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldD = srcObj.__isset.fieldD;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldE = srcObj.fieldE;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldE = srcObj.__isset.fieldE;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldF = srcObj.fieldF;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldF = srcObj.__isset.fieldF;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldG = srcObj.fieldG;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldG = srcObj.__isset.fieldG;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldH = srcObj.fieldH;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldH = srcObj.__isset.fieldH;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldI = srcObj.fieldI;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldI = srcObj.__isset.fieldI;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldJ = srcObj.fieldJ;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldJ = srcObj.__isset.fieldJ;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldK = srcObj.fieldK;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldK = srcObj.__isset.fieldK;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldL = srcObj.fieldL;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldL = srcObj.__isset.fieldL;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldM = srcObj.fieldM;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldM = srcObj.__isset.fieldM;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldN = srcObj.fieldN;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldN = srcObj.__isset.fieldN;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldO = srcObj.fieldO;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldO = srcObj.__isset.fieldO;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldP = srcObj.fieldP;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldP = srcObj.__isset.fieldP;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  fieldQ = srcObj.fieldQ;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset.fieldQ = srcObj.__isset.fieldQ;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  if (srcObj.fieldR) fieldR.reset(new ::std::map<::std::string, bool>(*srcObj.fieldR));
  if (srcObj.fieldS) fieldS.reset(new ::cpp2::SmallStruct(*srcObj.fieldS));
  fieldT = srcObj.fieldT;
  fieldU = srcObj.fieldU;
  if (srcObj.fieldX) fieldX.reset(new ::cpp2::SmallStruct(*srcObj.fieldX));
}

containerStruct& containerStruct::operator=(const containerStruct& src) {
  containerStruct tmp(src);
  swap(*this, tmp);
  return *this;
}

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
containerStruct::containerStruct() :
      fieldA(0),
      fieldC(std::initializer_list<::std::int32_t>{1,
  2,
  3,
  4}),
      fieldE(apache::thrift::StringTraits<std::string>::fromStringLiteral("somestring")),
      fieldI(true),
      fieldJ(std::initializer_list<std::pair<const ::std::string, ::std::vector<::std::int32_t>>>{{apache::thrift::StringTraits<std::string>::fromStringLiteral("subfieldA"), std::initializer_list<::std::int32_t>{1,
  4,
  8,
  12}},
  {apache::thrift::StringTraits<std::string>::fromStringLiteral("subfieldB"), std::initializer_list<::std::int32_t>{2,
  5,
  9,
  13}}}),
      fieldQ(static_cast< ::cpp2::MyEnumA>(0)),
      fieldR(std::make_unique<::std::map<::std::string, bool>>()),
      fieldS(std::make_unique<::cpp2::SmallStruct>()),
      fieldT(std::make_shared<::cpp2::SmallStruct>()),
      fieldU(std::make_shared<::cpp2::SmallStruct>()),
      fieldX(std::make_unique<::cpp2::SmallStruct>()) {}

THRIFT_IGNORE_ISSET_USE_WARNING_END

containerStruct::~containerStruct() {}

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
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
    __isset(other.__isset) {}

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
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
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
  __isset.fieldA = true;
  __isset.fieldB = true;
  __isset.fieldC = true;
  __isset.fieldD = true;
  __isset.fieldE = true;
  __isset.fieldF = true;
  __isset.fieldG = true;
  __isset.fieldH = true;
  __isset.fieldI = true;
  __isset.fieldJ = true;
  __isset.fieldK = true;
  __isset.fieldL = true;
  __isset.fieldM = true;
  __isset.fieldN = true;
  __isset.fieldO = true;
  __isset.fieldP = true;
  __isset.fieldQ = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END
void containerStruct::__clear() {
  // clear all fields
  this->fieldA = 0;
  this->fieldB.clear();
  this->fieldC.clear();
  this->fieldD = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->fieldE = apache::thrift::StringTraits<std::string>::fromStringLiteral("somestring");
  this->fieldF.clear();
  this->fieldG.clear();
  this->fieldH.clear();
  this->fieldI = true;
  this->fieldJ.clear();
  this->fieldK.clear();
  this->fieldL.clear();
  this->fieldM.clear();
  this->fieldN.clear();
  this->fieldO.clear();
  this->fieldP.clear();
  this->fieldQ = static_cast< ::cpp2::MyEnumA>(0);
  this->fieldR = ::apache::thrift::detail::make_mutable_smart_ptr<::std::unique_ptr<::std::map<::std::string, bool>>>();
  if (this->fieldS) this->fieldS->__clear();
  if (this->fieldT) this->fieldT->__clear();
  if (this->fieldU) this->fieldU.reset(new typename decltype(this->fieldU)::element_type());
  if (this->fieldX) this->fieldX->__clear();
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool containerStruct::operator==(const containerStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.fieldA == rhs.fieldA)) {
    return false;
  }
  if (!(lhs.fieldB == rhs.fieldB)) {
    return false;
  }
  if (!(lhs.fieldC == rhs.fieldC)) {
    return false;
  }
  if (!(lhs.fieldD == rhs.fieldD)) {
    return false;
  }
  if (!(lhs.fieldE == rhs.fieldE)) {
    return false;
  }
  if (!(lhs.fieldF == rhs.fieldF)) {
    return false;
  }
  if (!(lhs.fieldG == rhs.fieldG)) {
    return false;
  }
  if (!(lhs.fieldH == rhs.fieldH)) {
    return false;
  }
  if (!(lhs.fieldI == rhs.fieldI)) {
    return false;
  }
  if (!(lhs.fieldJ == rhs.fieldJ)) {
    return false;
  }
  if (!(lhs.fieldK == rhs.fieldK)) {
    return false;
  }
  if (!(lhs.fieldL == rhs.fieldL)) {
    return false;
  }
  if (!(lhs.fieldM == rhs.fieldM)) {
    return false;
  }
  if (!(lhs.fieldN == rhs.fieldN)) {
    return false;
  }
  if (!(lhs.fieldO == rhs.fieldO)) {
    return false;
  }
  if (!(lhs.fieldP == rhs.fieldP)) {
    return false;
  }
  if (!(lhs.fieldQ == rhs.fieldQ)) {
    return false;
  }
  if (!!lhs.fieldR != !!rhs.fieldR) {
    return false;
  }
  if (!!lhs.fieldR) {
    if (lhs.fieldR != rhs.fieldR && !(*lhs.fieldR == *rhs.fieldR)) {
      return false;
    }
  }
  if (!!lhs.fieldS != !!rhs.fieldS) {
    return false;
  }
  if (!!lhs.fieldS) {
    if (lhs.fieldS != rhs.fieldS && !(*lhs.fieldS == *rhs.fieldS)) {
      return false;
    }
  }
  if (!!lhs.fieldT != !!rhs.fieldT) {
    return false;
  }
  if (!!lhs.fieldT) {
    if (lhs.fieldT != rhs.fieldT && !(*lhs.fieldT == *rhs.fieldT)) {
      return false;
    }
  }
  if (!!lhs.fieldU != !!rhs.fieldU) {
    return false;
  }
  if (!!lhs.fieldU) {
    if (lhs.fieldU != rhs.fieldU && !(*lhs.fieldU == *rhs.fieldU)) {
      return false;
    }
  }
  if (!!lhs.fieldX != !!rhs.fieldX) {
    return false;
  }
  if (!!lhs.fieldX) {
    if (lhs.fieldX != rhs.fieldX && !(*lhs.fieldX == *rhs.fieldX)) {
      return false;
    }
  }
  return true;
}

bool containerStruct::operator<(const containerStruct& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.fieldA == rhs.fieldA)) {
    return lhs.fieldA < rhs.fieldA;
  }
  if (!(lhs.fieldB == rhs.fieldB)) {
    return lhs.fieldB < rhs.fieldB;
  }
  if (!(lhs.fieldC == rhs.fieldC)) {
    return lhs.fieldC < rhs.fieldC;
  }
  if (!(lhs.fieldD == rhs.fieldD)) {
    return lhs.fieldD < rhs.fieldD;
  }
  if (!(lhs.fieldE == rhs.fieldE)) {
    return lhs.fieldE < rhs.fieldE;
  }
  if (!(lhs.fieldF == rhs.fieldF)) {
    return lhs.fieldF < rhs.fieldF;
  }
  if (!(lhs.fieldG == rhs.fieldG)) {
    return lhs.fieldG < rhs.fieldG;
  }
  if (!(lhs.fieldH == rhs.fieldH)) {
    return lhs.fieldH < rhs.fieldH;
  }
  if (!(lhs.fieldI == rhs.fieldI)) {
    return lhs.fieldI < rhs.fieldI;
  }
  if (!(lhs.fieldJ == rhs.fieldJ)) {
    return lhs.fieldJ < rhs.fieldJ;
  }
  if (!(lhs.fieldK == rhs.fieldK)) {
    return lhs.fieldK < rhs.fieldK;
  }
  if (!(lhs.fieldL == rhs.fieldL)) {
    return lhs.fieldL < rhs.fieldL;
  }
  if (!(lhs.fieldM == rhs.fieldM)) {
    return lhs.fieldM < rhs.fieldM;
  }
  if (!(lhs.fieldN == rhs.fieldN)) {
    return lhs.fieldN < rhs.fieldN;
  }
  if (!(lhs.fieldO == rhs.fieldO)) {
    return lhs.fieldO < rhs.fieldO;
  }
  if (!(lhs.fieldP == rhs.fieldP)) {
    return lhs.fieldP < rhs.fieldP;
  }
  if (!(lhs.fieldQ == rhs.fieldQ)) {
    return lhs.fieldQ < rhs.fieldQ;
  }
  if (!!lhs.fieldR != !!rhs.fieldR) {
    return !!lhs.fieldR < !!rhs.fieldR;
  }
  if (!!lhs.fieldR) {
    if (lhs.fieldR != rhs.fieldR && !(*lhs.fieldR == *rhs.fieldR)) {
      return *lhs.fieldR < *rhs.fieldR;
    }
  }
  if (!!lhs.fieldS != !!rhs.fieldS) {
    return !!lhs.fieldS < !!rhs.fieldS;
  }
  if (!!lhs.fieldS) {
    if (lhs.fieldS != rhs.fieldS && !(*lhs.fieldS == *rhs.fieldS)) {
      return *lhs.fieldS < *rhs.fieldS;
    }
  }
  if (!!lhs.fieldT != !!rhs.fieldT) {
    return !!lhs.fieldT < !!rhs.fieldT;
  }
  if (!!lhs.fieldT) {
    if (lhs.fieldT != rhs.fieldT && !(*lhs.fieldT == *rhs.fieldT)) {
      return *lhs.fieldT < *rhs.fieldT;
    }
  }
  if (!!lhs.fieldU != !!rhs.fieldU) {
    return !!lhs.fieldU < !!rhs.fieldU;
  }
  if (!!lhs.fieldU) {
    if (lhs.fieldU != rhs.fieldU && !(*lhs.fieldU == *rhs.fieldU)) {
      return *lhs.fieldU < *rhs.fieldU;
    }
  }
  if (!!lhs.fieldX != !!rhs.fieldX) {
    return !!lhs.fieldX < !!rhs.fieldX;
  }
  if (!!lhs.fieldX) {
    if (lhs.fieldX != rhs.fieldX && !(*lhs.fieldX == *rhs.fieldX)) {
      return *lhs.fieldX < *rhs.fieldX;
    }
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
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
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
