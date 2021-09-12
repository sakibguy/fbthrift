/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/DbMixedStackArgumentsAsyncClient.h"
#include "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/module_types.h"

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

namespace cpp2 {

class DbMixedStackArgumentsSvAsyncIf {
 public:
  virtual ~DbMixedStackArgumentsSvAsyncIf() {}
  virtual void async_tm_getDataByKey0(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback, std::unique_ptr<::std::string> p_key) = 0;
  virtual folly::Future<std::unique_ptr<::std::string>> future_getDataByKey0(std::unique_ptr<::std::string> p_key) = 0;
  virtual folly::SemiFuture<std::unique_ptr<::std::string>> semifuture_getDataByKey0(std::unique_ptr<::std::string> p_key) = 0;
  virtual void async_tm_getDataByKey1(std::unique_ptr<apache::thrift::HandlerCallback<::std::string>> callback, const ::std::string& p_key) = 0;
  virtual folly::Future<::std::string> future_getDataByKey1(const ::std::string& p_key) = 0;
  virtual folly::SemiFuture<::std::string> semifuture_getDataByKey1(const ::std::string& p_key) = 0;
};

class DbMixedStackArgumentsAsyncProcessor;

class DbMixedStackArgumentsSvIf : public DbMixedStackArgumentsSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef DbMixedStackArgumentsAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;


  virtual void getDataByKey0(::std::string& /*_return*/, std::unique_ptr<::std::string> /*key*/);
  folly::Future<std::unique_ptr<::std::string>> future_getDataByKey0(std::unique_ptr<::std::string> p_key) override;
  folly::SemiFuture<std::unique_ptr<::std::string>> semifuture_getDataByKey0(std::unique_ptr<::std::string> p_key) override;
  void async_tm_getDataByKey0(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::std::string>>> callback, std::unique_ptr<::std::string> p_key) override;
  virtual void getDataByKey1(::std::string& /*_return*/, const ::std::string& /*key*/);
  folly::Future<::std::string> future_getDataByKey1(const ::std::string& p_key) override;
  folly::SemiFuture<::std::string> semifuture_getDataByKey1(const ::std::string& p_key) override;
  void async_tm_getDataByKey1(std::unique_ptr<apache::thrift::HandlerCallback<::std::string>> callback, const ::std::string& p_key) override;
 private:
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_getDataByKey0{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_getDataByKey1{apache::thrift::detail::si::InvocationType::AsyncTm};
};

class DbMixedStackArgumentsSvNull : public DbMixedStackArgumentsSvIf {
 public:
  void getDataByKey0(::std::string& /*_return*/, std::unique_ptr<::std::string> /*key*/) override;
  void getDataByKey1(::std::string& /*_return*/, const ::std::string& /*key*/) override;
};

class DbMixedStackArgumentsAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  DbMixedStackArgumentsSvIf* iface_;
 public:
  // This is implemented in case the corresponding AsyncProcessorFactory did not implement createMethodMetadata.
  // This can happen if the service is using a custom AsyncProcessorFactory but re-using the same AsyncProcessor.
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  // By default, this overload will be called for generated services
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessor::ProcessFuncs<DbMixedStackArgumentsAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFuncs>;
  static const DbMixedStackArgumentsAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const DbMixedStackArgumentsAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_getDataByKey0(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_getDataByKey0(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::LegacySerializedResponse return_getDataByKey0(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_getDataByKey0(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_getDataByKey1(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_getDataByKey1(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::LegacySerializedResponse return_getDataByKey1(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_getDataByKey1(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  DbMixedStackArgumentsAsyncProcessor(DbMixedStackArgumentsSvIf* iface) :
      iface_(iface) {}

  virtual ~DbMixedStackArgumentsAsyncProcessor() {}
};

} // cpp2
