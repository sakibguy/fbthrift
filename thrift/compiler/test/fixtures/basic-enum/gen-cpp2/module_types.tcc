/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>

namespace test { namespace fixtures { namespace enumstrict {

}}} // test::fixtures::enumstrict
namespace std {

} // std

namespace test { namespace fixtures { namespace enumstrict {

}}} // test::fixtures::enumstrict
namespace std {

} // std

namespace test { namespace fixtures { namespace enumstrict {

}}} // test::fixtures::enumstrict
namespace std {

} // std


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::test::fixtures::enumstrict::MyStruct> {
  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace test { namespace fixtures { namespace enumstrict {

template <class Protocol_>
void MyStruct::readNoXfer(Protocol_* iprot) {
  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_myEnum:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::test::fixtures::enumstrict::MyEnum>::readWithContext(*iprot, this->myEnum, _readState);
    
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.myEnum = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_I32))) {
    goto _loop;
  }
_readField_myBigEnum:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::test::fixtures::enumstrict::MyBigEnum>::readWithContext(*iprot, this->myBigEnum, _readState);
    
    THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
    this->__isset.myBigEnum = true;
    THRIFT_IGNORE_ISSET_USE_WARNING_END
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _loop;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

_loop:
  _readState.afterAdvanceFailure(iprot);
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<MyStruct>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_myEnum;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_myBigEnum;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t MyStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  {
    xfer += prot_->serializedFieldSize("myEnum", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::test::fixtures::enumstrict::MyEnum>::serializedSize<false>(*prot_, this->myEnum);
  }
  {
    xfer += prot_->serializedFieldSize("myBigEnum", apache::thrift::protocol::T_I32, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::test::fixtures::enumstrict::MyBigEnum>::serializedSize<false>(*prot_, this->myBigEnum);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  {
    xfer += prot_->serializedFieldSize("myEnum", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::test::fixtures::enumstrict::MyEnum>::serializedSize<false>(*prot_, this->myEnum);
  }
  {
    xfer += prot_->serializedFieldSize("myBigEnum", apache::thrift::protocol::T_I32, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::test::fixtures::enumstrict::MyBigEnum>::serializedSize<false>(*prot_, this->myBigEnum);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyStruct");
  bool previousFieldHasValue = true;
  {
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 1, 0>(*prot_, "myEnum", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::test::fixtures::enumstrict::MyEnum>::write(*prot_, this->myEnum);
    xfer += prot_->writeFieldEnd();
  }
  {
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 2, 1>(*prot_, "myBigEnum", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::enumeration, ::test::fixtures::enumstrict::MyBigEnum>::write(*prot_, this->myBigEnum);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}}} // test::fixtures::enumstrict
