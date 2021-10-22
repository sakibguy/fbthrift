/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/MyServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/included_types.h"
#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/namespaced_types.h"

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

class MyServiceSvAsyncIf {
 public:
  virtual ~MyServiceSvAsyncIf() {}
  virtual void async_tm_first(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::cpp2::annotated_inline_string>>> callback) = 0;
  virtual folly::Future<std::unique_ptr<::cpp2::annotated_inline_string>> future_first() = 0;
  virtual folly::SemiFuture<std::unique_ptr<::cpp2::annotated_inline_string>> semifuture_first() = 0;
  virtual void async_tm_second(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, ::std::int64_t p_count) = 0;
  virtual folly::Future<bool> future_second(::std::int64_t p_count) = 0;
  virtual folly::SemiFuture<bool> semifuture_second(::std::int64_t p_count) = 0;
};

class MyServiceAsyncProcessor;

class MyServiceSvIf : public MyServiceSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  std::string_view getGeneratedName() const override { return "MyService"; }

  typedef MyServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  CreateMethodMetadataResult createMethodMetadata() override;


  virtual void first(::cpp2::annotated_inline_string& /*_return*/);
  folly::Future<std::unique_ptr<::cpp2::annotated_inline_string>> future_first() override;
  folly::SemiFuture<std::unique_ptr<::cpp2::annotated_inline_string>> semifuture_first() override;
  void async_tm_first(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<::cpp2::annotated_inline_string>>> callback) override;
  virtual bool second(::std::int64_t /*count*/);
  folly::Future<bool> future_second(::std::int64_t p_count) override;
  folly::SemiFuture<bool> semifuture_second(::std::int64_t p_count) override;
  void async_tm_second(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, ::std::int64_t p_count) override;
 private:
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_first{apache::thrift::detail::si::InvocationType::AsyncTm};
  std::atomic<apache::thrift::detail::si::InvocationType> __fbthrift_invocation_second{apache::thrift::detail::si::InvocationType::AsyncTm};
};

class MyServiceSvNull : public MyServiceSvIf {
 public:
  void first(::cpp2::annotated_inline_string& /*_return*/) override;
  bool second(::std::int64_t /*count*/) override;
};

class MyServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  MyServiceSvIf* iface_;
 public:
  // This is implemented in case the corresponding AsyncProcessorFactory did not implement createMethodMetadata.
  // This can happen if the service is using a custom AsyncProcessorFactory but re-using the same AsyncProcessor.
  void processSerializedCompressedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
  // By default, this overload will be called for generated services
  void processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 public:
  using ProcessFuncs = GeneratedAsyncProcessor::ProcessFuncs<MyServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFuncs>;
  static const MyServiceAsyncProcessor::ProcessMap& getOwnProcessMap();
 private:
  static const MyServiceAsyncProcessor::ProcessMap kOwnProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_first(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_first(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_first(apache::thrift::ContextStack* ctx, ::cpp2::annotated_inline_string const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_first(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_second(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_second(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::SerializedResponse return_second(apache::thrift::ContextStack* ctx, bool const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_second(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  MyServiceAsyncProcessor(MyServiceSvIf* iface) :
      iface_(iface) {}
  ~MyServiceAsyncProcessor() override {}
};

} // cpp2
