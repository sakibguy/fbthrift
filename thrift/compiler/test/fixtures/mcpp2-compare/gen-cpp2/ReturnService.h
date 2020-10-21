/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/ReturnServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/includes_types.h"
#include <folly/small_vector.h>

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace some { namespace valid { namespace ns {

class ReturnServiceSvAsyncIf {
 public:
  virtual ~ReturnServiceSvAsyncIf() {}
  virtual void async_eb_noReturn(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = 0;
  virtual void async_tm_boolReturn(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback) = 0;
  virtual folly::Future<bool> future_boolReturn() = 0;
  virtual folly::SemiFuture<bool> semifuture_boolReturn() = 0;
  virtual void async_tm_i16Return(std::unique_ptr<apache::thrift::HandlerCallback<int16_t>> callback) = 0;
  virtual folly::Future<int16_t> future_i16Return() = 0;
  virtual folly::SemiFuture<int16_t> semifuture_i16Return() = 0;
  virtual void async_tm_i32Return(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) = 0;
  virtual folly::Future<int32_t> future_i32Return() = 0;
  virtual folly::SemiFuture<int32_t> semifuture_i32Return() = 0;
  virtual void async_tm_i64Return(std::unique_ptr<apache::thrift::HandlerCallback<int64_t>> callback) = 0;
  virtual folly::Future<int64_t> future_i64Return() = 0;
  virtual folly::SemiFuture<int64_t> semifuture_i64Return() = 0;
  virtual void async_tm_floatReturn(std::unique_ptr<apache::thrift::HandlerCallback<float>> callback) = 0;
  virtual folly::Future<float> future_floatReturn() = 0;
  virtual folly::SemiFuture<float> semifuture_floatReturn() = 0;
  virtual void async_tm_doubleReturn(std::unique_ptr<apache::thrift::HandlerCallback<double>> callback) = 0;
  virtual folly::Future<double> future_doubleReturn() = 0;
  virtual folly::SemiFuture<double> semifuture_doubleReturn() = 0;
  virtual void async_eb_stringReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback) = 0;
  virtual void async_tm_binaryReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback) = 0;
  virtual folly::Future<std::unique_ptr<::std::string>> future_binaryReturn() = 0;
  virtual folly::SemiFuture<std::unique_ptr<::std::string>> semifuture_binaryReturn() = 0;
  virtual void async_tm_mapReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::map<::std::string, int64_t>>>> callback) = 0;
  virtual folly::Future<std::unique_ptr<::std::map<::std::string, int64_t>>> future_mapReturn() = 0;
  virtual folly::SemiFuture<std::unique_ptr<::std::map<::std::string, int64_t>>> semifuture_mapReturn() = 0;
  virtual void async_tm_simpleTypedefReturn(std::unique_ptr<apache::thrift::HandlerCallback< ::some::valid::ns::simpleTypeDef>> callback) = 0;
  virtual folly::Future< ::some::valid::ns::simpleTypeDef> future_simpleTypedefReturn() = 0;
  virtual folly::SemiFuture< ::some::valid::ns::simpleTypeDef> semifuture_simpleTypedefReturn() = 0;
  virtual void async_tm_complexTypedefReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::complexStructTypeDef>>> callback) = 0;
  virtual folly::Future<std::unique_ptr< ::some::valid::ns::complexStructTypeDef>> future_complexTypedefReturn() = 0;
  virtual folly::SemiFuture<std::unique_ptr< ::some::valid::ns::complexStructTypeDef>> semifuture_complexTypedefReturn() = 0;
  virtual void async_tm_list_mostComplexTypedefReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::vector< ::some::valid::ns::mostComplexTypeDef>>>> callback) = 0;
  virtual folly::Future<std::unique_ptr<::std::vector< ::some::valid::ns::mostComplexTypeDef>>> future_list_mostComplexTypedefReturn() = 0;
  virtual folly::SemiFuture<std::unique_ptr<::std::vector< ::some::valid::ns::mostComplexTypeDef>>> semifuture_list_mostComplexTypedefReturn() = 0;
  virtual void async_eb_enumReturn(std::unique_ptr<apache::thrift::HandlerCallback< ::some::valid::ns::MyEnumA>> callback) = 0;
  virtual void async_eb_list_EnumReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::vector< ::some::valid::ns::MyEnumA>>>> callback) = 0;
  virtual void async_tm_structReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::MyStruct>>> callback) = 0;
  virtual folly::Future<std::unique_ptr< ::some::valid::ns::MyStruct>> future_structReturn() = 0;
  virtual folly::SemiFuture<std::unique_ptr< ::some::valid::ns::MyStruct>> semifuture_structReturn() = 0;
  virtual void async_tm_set_StructReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::set< ::some::valid::ns::MyStruct>>>> callback) = 0;
  virtual folly::Future<std::unique_ptr<::std::set< ::some::valid::ns::MyStruct>>> future_set_StructReturn() = 0;
  virtual folly::SemiFuture<std::unique_ptr<::std::set< ::some::valid::ns::MyStruct>>> semifuture_set_StructReturn() = 0;
  virtual void async_eb_unionReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::ComplexUnion>>> callback) = 0;
  virtual void async_tm_list_UnionReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::vector< ::some::valid::ns::ComplexUnion>>>> callback) = 0;
  virtual folly::Future<std::unique_ptr<::std::vector< ::some::valid::ns::ComplexUnion>>> future_list_UnionReturn() = 0;
  virtual folly::SemiFuture<std::unique_ptr<::std::vector< ::some::valid::ns::ComplexUnion>>> semifuture_list_UnionReturn() = 0;
  virtual void async_eb_readDataEb(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::IOBuf>>> callback, int64_t size) = 0;
  virtual void async_tm_readData(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::IOBufPtr>>> callback, int64_t size) = 0;
  virtual folly::Future<std::unique_ptr< ::some::valid::ns::IOBufPtr>> future_readData(int64_t size) = 0;
  virtual folly::SemiFuture<std::unique_ptr< ::some::valid::ns::IOBufPtr>> semifuture_readData(int64_t size) = 0;
};

class ReturnServiceAsyncProcessor;

class ReturnServiceSvIf : public ReturnServiceSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef ReturnServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;


  void async_eb_noReturn(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) override;
  virtual bool boolReturn();
  folly::Future<bool> future_boolReturn() override;
  folly::SemiFuture<bool> semifuture_boolReturn() override;
  void async_tm_boolReturn(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback) override;
  virtual int16_t i16Return();
  folly::Future<int16_t> future_i16Return() override;
  folly::SemiFuture<int16_t> semifuture_i16Return() override;
  void async_tm_i16Return(std::unique_ptr<apache::thrift::HandlerCallback<int16_t>> callback) override;
  virtual int32_t i32Return();
  folly::Future<int32_t> future_i32Return() override;
  folly::SemiFuture<int32_t> semifuture_i32Return() override;
  void async_tm_i32Return(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) override;
  virtual int64_t i64Return();
  folly::Future<int64_t> future_i64Return() override;
  folly::SemiFuture<int64_t> semifuture_i64Return() override;
  void async_tm_i64Return(std::unique_ptr<apache::thrift::HandlerCallback<int64_t>> callback) override;
  virtual float floatReturn();
  folly::Future<float> future_floatReturn() override;
  folly::SemiFuture<float> semifuture_floatReturn() override;
  void async_tm_floatReturn(std::unique_ptr<apache::thrift::HandlerCallback<float>> callback) override;
  virtual double doubleReturn();
  folly::Future<double> future_doubleReturn() override;
  folly::SemiFuture<double> semifuture_doubleReturn() override;
  void async_tm_doubleReturn(std::unique_ptr<apache::thrift::HandlerCallback<double>> callback) override;
  void async_eb_stringReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback) override;
  virtual void binaryReturn(::std::string& /*_return*/);
  folly::Future<std::unique_ptr<::std::string>> future_binaryReturn() override;
  folly::SemiFuture<std::unique_ptr<::std::string>> semifuture_binaryReturn() override;
  void async_tm_binaryReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback) override;
  virtual void mapReturn(::std::map<::std::string, int64_t>& /*_return*/);
  folly::Future<std::unique_ptr<::std::map<::std::string, int64_t>>> future_mapReturn() override;
  folly::SemiFuture<std::unique_ptr<::std::map<::std::string, int64_t>>> semifuture_mapReturn() override;
  void async_tm_mapReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::map<::std::string, int64_t>>>> callback) override;
  virtual  ::some::valid::ns::simpleTypeDef simpleTypedefReturn();
  folly::Future< ::some::valid::ns::simpleTypeDef> future_simpleTypedefReturn() override;
  folly::SemiFuture< ::some::valid::ns::simpleTypeDef> semifuture_simpleTypedefReturn() override;
  void async_tm_simpleTypedefReturn(std::unique_ptr<apache::thrift::HandlerCallback< ::some::valid::ns::simpleTypeDef>> callback) override;
  virtual void complexTypedefReturn( ::some::valid::ns::complexStructTypeDef& /*_return*/);
  folly::Future<std::unique_ptr< ::some::valid::ns::complexStructTypeDef>> future_complexTypedefReturn() override;
  folly::SemiFuture<std::unique_ptr< ::some::valid::ns::complexStructTypeDef>> semifuture_complexTypedefReturn() override;
  void async_tm_complexTypedefReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::complexStructTypeDef>>> callback) override;
  virtual void list_mostComplexTypedefReturn(::std::vector< ::some::valid::ns::mostComplexTypeDef>& /*_return*/);
  folly::Future<std::unique_ptr<::std::vector< ::some::valid::ns::mostComplexTypeDef>>> future_list_mostComplexTypedefReturn() override;
  folly::SemiFuture<std::unique_ptr<::std::vector< ::some::valid::ns::mostComplexTypeDef>>> semifuture_list_mostComplexTypedefReturn() override;
  void async_tm_list_mostComplexTypedefReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::vector< ::some::valid::ns::mostComplexTypeDef>>>> callback) override;
  void async_eb_enumReturn(std::unique_ptr<apache::thrift::HandlerCallback< ::some::valid::ns::MyEnumA>> callback) override;
  void async_eb_list_EnumReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::vector< ::some::valid::ns::MyEnumA>>>> callback) override;
  virtual void structReturn( ::some::valid::ns::MyStruct& /*_return*/);
  folly::Future<std::unique_ptr< ::some::valid::ns::MyStruct>> future_structReturn() override;
  folly::SemiFuture<std::unique_ptr< ::some::valid::ns::MyStruct>> semifuture_structReturn() override;
  void async_tm_structReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::MyStruct>>> callback) override;
  virtual void set_StructReturn(::std::set< ::some::valid::ns::MyStruct>& /*_return*/);
  folly::Future<std::unique_ptr<::std::set< ::some::valid::ns::MyStruct>>> future_set_StructReturn() override;
  folly::SemiFuture<std::unique_ptr<::std::set< ::some::valid::ns::MyStruct>>> semifuture_set_StructReturn() override;
  void async_tm_set_StructReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::set< ::some::valid::ns::MyStruct>>>> callback) override;
  void async_eb_unionReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::ComplexUnion>>> callback) override;
  virtual void list_UnionReturn(::std::vector< ::some::valid::ns::ComplexUnion>& /*_return*/);
  folly::Future<std::unique_ptr<::std::vector< ::some::valid::ns::ComplexUnion>>> future_list_UnionReturn() override;
  folly::SemiFuture<std::unique_ptr<::std::vector< ::some::valid::ns::ComplexUnion>>> semifuture_list_UnionReturn() override;
  void async_tm_list_UnionReturn(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::vector< ::some::valid::ns::ComplexUnion>>>> callback) override;
  void async_eb_readDataEb(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::IOBuf>>> callback, int64_t size) override;
  virtual void readData( ::some::valid::ns::IOBufPtr& /*_return*/, int64_t /*size*/);
  folly::Future<std::unique_ptr< ::some::valid::ns::IOBufPtr>> future_readData(int64_t size) override;
  folly::SemiFuture<std::unique_ptr< ::some::valid::ns::IOBufPtr>> semifuture_readData(int64_t size) override;
  void async_tm_readData(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::some::valid::ns::IOBufPtr>>> callback, int64_t size) override;
};

class ReturnServiceSvNull : public ReturnServiceSvIf {
 public:
  bool boolReturn() override;
  int16_t i16Return() override;
  int32_t i32Return() override;
  int64_t i64Return() override;
  float floatReturn() override;
  double doubleReturn() override;
  void binaryReturn(::std::string& /*_return*/) override;
  void mapReturn(::std::map<::std::string, int64_t>& /*_return*/) override;
   ::some::valid::ns::simpleTypeDef simpleTypedefReturn() override;
  void complexTypedefReturn( ::some::valid::ns::complexStructTypeDef& /*_return*/) override;
  void list_mostComplexTypedefReturn(::std::vector< ::some::valid::ns::mostComplexTypeDef>& /*_return*/) override;
  void structReturn( ::some::valid::ns::MyStruct& /*_return*/) override;
  void set_StructReturn(::std::set< ::some::valid::ns::MyStruct>& /*_return*/) override;
  void list_UnionReturn(::std::vector< ::some::valid::ns::ComplexUnion>& /*_return*/) override;
  void readData( ::some::valid::ns::IOBufPtr& /*_return*/, int64_t /*size*/) override;
};

class ReturnServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  ReturnServiceSvIf* iface_;
 public:
  void processSerializedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  std::shared_ptr<folly::RequestContext> getBaseContextForRequest() override;
 public:
  using ProcessFunc = GeneratedAsyncProcessor::ProcessFunc<ReturnServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFunc>;
  static const ReturnServiceAsyncProcessor::ProcessMap& getBinaryProtocolProcessMap();
  static const ReturnServiceAsyncProcessor::ProcessMap& getCompactProtocolProcessMap();
 private:
  static const ReturnServiceAsyncProcessor::ProcessMap binaryProcessMap_;
  static const ReturnServiceAsyncProcessor::ProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_noReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_noReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_noReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_noReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_boolReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_boolReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_boolReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, bool const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_boolReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_i16Return(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_i16Return(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_i16Return(int32_t protoSeqId, apache::thrift::ContextStack* ctx, int16_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_i16Return(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_i32Return(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_i32Return(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_i32Return(int32_t protoSeqId, apache::thrift::ContextStack* ctx, int32_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_i32Return(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_i64Return(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_i64Return(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_i64Return(int32_t protoSeqId, apache::thrift::ContextStack* ctx, int64_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_i64Return(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_floatReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_floatReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_floatReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, float const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_floatReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_doubleReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_doubleReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_doubleReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, double const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_doubleReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_stringReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_stringReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_stringReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_stringReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_binaryReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_binaryReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_binaryReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_binaryReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_mapReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_mapReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_mapReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::map<::std::string, int64_t> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_mapReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_simpleTypedefReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_simpleTypedefReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_simpleTypedefReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::some::valid::ns::simpleTypeDef const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_simpleTypedefReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_complexTypedefReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_complexTypedefReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_complexTypedefReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::some::valid::ns::complexStructTypeDef const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_complexTypedefReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_list_mostComplexTypedefReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_list_mostComplexTypedefReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_list_mostComplexTypedefReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::vector< ::some::valid::ns::mostComplexTypeDef> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_list_mostComplexTypedefReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_enumReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_enumReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_enumReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::some::valid::ns::MyEnumA const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_enumReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_list_EnumReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_list_EnumReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_list_EnumReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::vector< ::some::valid::ns::MyEnumA> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_list_EnumReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_structReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_structReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_structReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::some::valid::ns::MyStruct const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_structReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_set_StructReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_set_StructReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_set_StructReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::set< ::some::valid::ns::MyStruct> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_set_StructReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_unionReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_unionReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_unionReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::some::valid::ns::ComplexUnion const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_unionReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_list_UnionReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_list_UnionReturn(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_list_UnionReturn(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::vector< ::some::valid::ns::ComplexUnion> const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_list_UnionReturn(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_readDataEb(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_readDataEb(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_readDataEb(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::some::valid::ns::IOBuf const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_readDataEb(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_readData(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_readData(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_readData(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::some::valid::ns::IOBufPtr const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_readData(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  ReturnServiceAsyncProcessor(ReturnServiceSvIf* iface) :
      iface_(iface) {}

  virtual ~ReturnServiceAsyncProcessor() {}
};

}}} // some::valid::ns
