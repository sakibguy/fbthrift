/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp/Thrift.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp/protocol/TProtocol.h>
#include <thrift/lib/cpp/transport/TTransport.h>

#include <thrift/lib/cpp/Frozen.h>

namespace apache { namespace thrift { namespace reflection {
class Schema;
}}}




enum MyEnum {
  MyValue1 = 0,
  MyValue2 = 1,
};

using _MyEnum_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<MyEnum, int>;

extern const _MyEnum_EnumMapFactory::ValuesToNamesMapType _MyEnum_VALUES_TO_NAMES;

extern const _MyEnum_EnumMapFactory::NamesToValuesMapType _MyEnum_NAMES_TO_VALUES;


namespace apache { namespace thrift {
template <> struct TEnumDataStorage< ::MyEnum>;
template <> inline constexpr  ::MyEnum TEnumTraits< ::MyEnum>::min() {
return  ::MyEnum::MyValue1;
}
template <> inline constexpr  ::MyEnum TEnumTraits< ::MyEnum>::max() {
return  ::MyEnum::MyValue2;
}
}} // apache::thrift



class MyStruct;

class MyDataItem;

void swap(MyStruct &a, MyStruct &b);

class MyStruct final : public apache::thrift::TStructType<MyStruct> {
 public:

  static const uint64_t _reflection_id = 7958971832214294220U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  MyStruct() : MyIntField(0) {
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit MyStruct(
    ::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    MyStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    MyIntField = arg.move();
    __isset.MyIntField = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit MyStruct(
    ::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    MyStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    MyStringField = arg.move();
    __isset.MyStringField = true;
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit MyStruct(
    ::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    MyStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    MyDataField = arg.move();
    __isset.MyDataField = true;
  }

  MyStruct(const MyStruct&) = default;
  MyStruct& operator=(const MyStruct& src)= default;
  MyStruct(MyStruct&&) = default;
  MyStruct& operator=(MyStruct&&) = default;

  void __clear();
  int64_t MyIntField;
  std::string MyStringField;
  MyDataItem MyDataField;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      MyIntField = false;
      MyStringField = false;
      MyDataField = false;
    }
    bool MyIntField;
    bool MyStringField;
    bool MyDataField;
  } __isset;

  bool operator == (const MyStruct &) const;
  bool operator != (const MyStruct& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MyStruct & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};

class MyStruct;
void merge(const MyStruct& from, MyStruct& to);
void merge(MyStruct&& from, MyStruct& to);

namespace apache { namespace thrift {

template<>
struct Frozen< ::MyStruct, void> {
  typename Freezer<int64_t>::FrozenType MyIntField;
  typename Freezer<std::string>::FrozenType MyStringField;
  typename Freezer< ::MyDataItem>::FrozenType MyDataField;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
      MyIntField = false;
      MyStringField = false;
      MyDataField = false;
    }
    bool MyIntField : 1;
    bool MyStringField : 1;
    bool MyDataField : 1;
  } __isset;
};
}} // apache::thrift 


void swap(MyDataItem &a, MyDataItem &b);

class MyDataItem final : public apache::thrift::TStructType<MyDataItem> {
 public:

  static const uint64_t _reflection_id = 4790436723586763884U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  MyDataItem() {
  }

  MyDataItem(const MyDataItem&) = default;
  MyDataItem& operator=(const MyDataItem& src)= default;
  MyDataItem(MyDataItem&&) = default;
  MyDataItem& operator=(MyDataItem&&) = default;

  void __clear();

  bool operator == (const MyDataItem &) const;
  bool operator != (const MyDataItem& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MyDataItem & ) const;

  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

  static void translateFieldName(
      folly::StringPiece _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype);
};

class MyDataItem;
void merge(const MyDataItem& from, MyDataItem& to);
void merge(MyDataItem&& from, MyDataItem& to);

namespace apache { namespace thrift {

template<>
struct Frozen< ::MyDataItem, void> {
};
}} // apache::thrift 




