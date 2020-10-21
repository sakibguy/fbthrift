/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/service_h.h>

#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/MyServiceAsyncClient.h"
#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/module_types.h"
#include <thrift/lib/cpp2/async/ServerStream.h>
#include <thrift/lib/cpp2/async/Sink.h>

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
  virtual void async_tm_foo(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = 0;
  virtual folly::Future<folly::Unit> future_foo() = 0;
  virtual folly::SemiFuture<folly::Unit> semifuture_foo() = 0;
};

class MyServiceAsyncProcessor;

class MyServiceSvIf : public MyServiceSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef MyServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;

class MyInteractionIf : public apache::thrift::Tile, public apache::thrift::ServerInterface {
 public:
  typedef MyServiceAsyncProcessor ProcessorType;
  virtual ~MyInteractionIf() = default;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override {
    std::terminate();
  }
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<int32_t> co_frobnicate();
  virtual folly::coro::Task<int32_t> co_frobnicate(apache::thrift::RequestParams params);
#endif
  virtual folly::SemiFuture<int32_t> semifuture_frobnicate();
  void async_tm_frobnicate(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<void> co_ping();
  virtual folly::coro::Task<void> co_ping(apache::thrift::RequestParams params);
#endif
  virtual folly::SemiFuture<folly::Unit> semifuture_ping();
  void async_tm_ping(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<apache::thrift::ServerStream<bool>> co_truthify();
  virtual folly::coro::Task<apache::thrift::ServerStream<bool>> co_truthify(apache::thrift::RequestParams params);
#endif
  virtual folly::SemiFuture<apache::thrift::ServerStream<bool>> semifuture_truthify();
  void async_tm_truthify(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::ServerStream<bool>>> callback);
#if FOLLY_HAS_COROUTINES
  virtual folly::coro::Task<apache::thrift::ResponseAndSinkConsumer<::std::set<float>,::std::string,::std::string>> co_encode();
  virtual folly::coro::Task<apache::thrift::ResponseAndSinkConsumer<::std::set<float>,::std::string,::std::string>> co_encode(apache::thrift::RequestParams params);
#endif
  virtual folly::SemiFuture<apache::thrift::ResponseAndSinkConsumer<::std::set<float>,::std::string,::std::string>> semifuture_encode();
  void async_tm_encode(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::ResponseAndSinkConsumer<::std::set<float>,::std::string,::std::string>>> callback);
};
  virtual std::unique_ptr<MyInteractionIf> createMyInteraction();
  virtual void foo();
  folly::Future<folly::Unit> future_foo() override;
  folly::SemiFuture<folly::Unit> semifuture_foo() override;
  void async_tm_foo(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) override;
};

class MyServiceSvNull : public MyServiceSvIf {
 public:
  void foo() override;
};

class MyServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  void getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) override;
  using BaseAsyncProcessor = void;
 protected:
  MyServiceSvIf* iface_;
 public:
  void processSerializedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  std::shared_ptr<folly::RequestContext> getBaseContextForRequest() override;
 public:
  using ProcessFunc = GeneratedAsyncProcessor::ProcessFunc<MyServiceAsyncProcessor>;
  using ProcessMap = GeneratedAsyncProcessor::ProcessMap<ProcessFunc>;
  using InteractionConstructor = GeneratedAsyncProcessor::InteractionConstructor<MyServiceAsyncProcessor>;
  using InteractionConstructorMap = GeneratedAsyncProcessor::InteractionConstructorMap<InteractionConstructor>;
  static const MyServiceAsyncProcessor::ProcessMap& getBinaryProtocolProcessMap();
  static const MyServiceAsyncProcessor::ProcessMap& getCompactProtocolProcessMap();
  static const MyServiceAsyncProcessor::InteractionConstructorMap& getInteractionConstructorMap();
  std::unique_ptr<apache::thrift::Tile> createInteractionImpl(const std::string& name) override;
 private:
  static const MyServiceAsyncProcessor::ProcessMap binaryProcessMap_;
  static const MyServiceAsyncProcessor::ProcessMap compactProcessMap_;
  static const MyServiceAsyncProcessor::InteractionConstructorMap interactionConstructorMap_;
 private:
  std::unique_ptr<apache::thrift::Tile> createMyInteraction() {
    return iface_->createMyInteraction();
  }
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_foo(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_foo(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_foo(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_foo(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_MyInteraction_frobnicate(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_MyInteraction_frobnicate(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_MyInteraction_frobnicate(int32_t protoSeqId, apache::thrift::ContextStack* ctx, int32_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_MyInteraction_frobnicate(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_MyInteraction_ping(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_MyInteraction_ping(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_MyInteraction_truthify(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_MyInteraction_truthify(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::ResponseAndServerStreamFactory return_MyInteraction_truthify(int32_t protoSeqId, apache::thrift::ContextStack* ctx, folly::Executor::KeepAlive<> executor, apache::thrift::ServerStream<bool> _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_MyInteraction_truthify(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void setUpAndProcess_MyInteraction_encode(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_MyInteraction_encode(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static std::pair<folly::IOBufQueue, apache::thrift::detail::SinkConsumerImpl> return_MyInteraction_encode(apache::thrift::ContextStack* ctx, apache::thrift::ResponseAndSinkConsumer<::std::set<float>,::std::string,::std::string>&& _return, folly::Executor::KeepAlive<> executor);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_MyInteraction_encode(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  MyServiceAsyncProcessor(MyServiceSvIf* iface) :
      iface_(iface) {}

  virtual ~MyServiceAsyncProcessor() {}
};

} // cpp2
