/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/module_types.h"
#include <thrift/lib/cpp2/async/ClientBufferedStream.h>
#include <thrift/lib/cpp2/async/ClientSinkBridge.h>
#include <thrift/lib/cpp2/async/Sink.h>

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {

class MyServiceAsyncClient : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "MyService";
  }

class MyInteraction final : public apache::thrift::InteractionHandle {
  using apache::thrift::InteractionHandle::InteractionHandle;
  friend class MyServiceAsyncClient;
 public:


  char const* getServiceName() const noexcept override {
    return "MyService";
  }


 void frobnicate(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void frobnicateImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
 public:

  ::std::int32_t sync_frobnicate();
  ::std::int32_t sync_frobnicate(apache::thrift::RpcOptions& rpcOptions);

  folly::SemiFuture<::std::int32_t> semifuture_frobnicate();
  folly::SemiFuture<::std::int32_t> semifuture_frobnicate(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<::std::int32_t> co_frobnicate() {
    return co_frobnicate<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<::std::int32_t> co_frobnicate(apache::thrift::RpcOptions& rpcOptions) {
    return co_frobnicate<true>(&rpcOptions);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::std::int32_t> co_frobnicate(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = frobnicateCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      frobnicateImpl(*rpcOptions, ctx, std::move(wrappedCallback));
    } else {
      frobnicateImpl(defaultRpcOptions, ctx, std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header() && !returnState.header()->getHeaders().empty()) {
        rpcOptions->setReadHeaders(returnState.header()->releaseHeaders());
      }
    };
    ::std::int32_t _return;
    if (auto ew = recv_wrapped_frobnicate(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES


  static folly::exception_wrapper recv_wrapped_frobnicate(::std::int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  static ::std::int32_t recv_frobnicate(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void frobnicateT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> frobnicateCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
 void ping(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void pingImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
 public:

  void sync_ping();
  void sync_ping(apache::thrift::RpcOptions& rpcOptions);

  folly::SemiFuture<folly::Unit> semifuture_ping();
  folly::SemiFuture<folly::Unit> semifuture_ping(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<void> co_ping() {
    return co_ping<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<void> co_ping(apache::thrift::RpcOptions& rpcOptions) {
    return co_ping<true>(&rpcOptions);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_ping(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<true> callback(&returnState);
    auto ctx = pingCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<true>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      pingImpl(*rpcOptions, ctx, std::move(wrappedCallback));
    } else {
      pingImpl(defaultRpcOptions, ctx, std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES


 private:
  template <typename Protocol_>
  void pingT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> pingCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
 void truthify(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void truthifyImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback);
 public:

  apache::thrift::ClientBufferedStream<bool> sync_truthify();
  apache::thrift::ClientBufferedStream<bool> sync_truthify(apache::thrift::RpcOptions& rpcOptions);

  folly::SemiFuture<apache::thrift::ClientBufferedStream<bool>> semifuture_truthify();
  folly::SemiFuture<apache::thrift::ClientBufferedStream<bool>> semifuture_truthify(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<apache::thrift::ClientBufferedStream<bool>> co_truthify() {
    return co_truthify<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<apache::thrift::ClientBufferedStream<bool>> co_truthify(apache::thrift::RpcOptions& rpcOptions) {
    return co_truthify<true>(&rpcOptions);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<apache::thrift::ClientBufferedStream<bool>> co_truthify(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = truthifyCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::createStreamClientCallback(
        apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback),
      hasRpcOptions ? rpcOptions->getBufferOptions() : defaultRpcOptions.getBufferOptions());
    if constexpr (hasRpcOptions) {
      truthifyImpl(*rpcOptions, ctx, std::move(wrappedCallback));
    } else {
      truthifyImpl(defaultRpcOptions, ctx, std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header() && !returnState.header()->getHeaders().empty()) {
        rpcOptions->setReadHeaders(returnState.header()->releaseHeaders());
      }
    };
    apache::thrift::ClientBufferedStream<bool> _return;
    if (auto ew = recv_wrapped_truthify(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES


  static folly::exception_wrapper recv_wrapped_truthify(apache::thrift::ClientBufferedStream<bool>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::ClientBufferedStream<bool> recv_truthify(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void truthifyT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> truthifyCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
 protected:
  void encodeImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::SinkClientCallback* callback);
 public:
#if FOLLY_HAS_COROUTINES
  folly::coro::Task<apache::thrift::ResponseAndClientSink<::std::set<float>, ::std::string, ::std::string>> co_encode();
  folly::coro::Task<apache::thrift::ResponseAndClientSink<::std::set<float>, ::std::string, ::std::string>> co_encode(apache::thrift::RpcOptions& rpcOptions);
#endif // FOLLY_HAS_COROUTINES

  static folly::exception_wrapper recv_wrapped_encode(apache::thrift::ResponseAndClientSink<::std::set<float>, ::std::string, ::std::string>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::ResponseAndClientSink<::std::set<float>, ::std::string, ::std::string> recv_encode(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void encodeT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::SinkClientCallback* callback);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> encodeCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};class MyInteractionFast final : public apache::thrift::InteractionHandle {
  using apache::thrift::InteractionHandle::InteractionHandle;
  friend class MyServiceAsyncClient;
 public:


  char const* getServiceName() const noexcept override {
    return "MyService";
  }


 void frobnicate(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void frobnicateImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
 public:

  ::std::int32_t sync_frobnicate();
  ::std::int32_t sync_frobnicate(apache::thrift::RpcOptions& rpcOptions);

  folly::SemiFuture<::std::int32_t> semifuture_frobnicate();
  folly::SemiFuture<::std::int32_t> semifuture_frobnicate(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<::std::int32_t> co_frobnicate() {
    return co_frobnicate<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<::std::int32_t> co_frobnicate(apache::thrift::RpcOptions& rpcOptions) {
    return co_frobnicate<true>(&rpcOptions);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::std::int32_t> co_frobnicate(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = frobnicateCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      frobnicateImpl(*rpcOptions, ctx, std::move(wrappedCallback));
    } else {
      frobnicateImpl(defaultRpcOptions, ctx, std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header() && !returnState.header()->getHeaders().empty()) {
        rpcOptions->setReadHeaders(returnState.header()->releaseHeaders());
      }
    };
    ::std::int32_t _return;
    if (auto ew = recv_wrapped_frobnicate(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES


  static folly::exception_wrapper recv_wrapped_frobnicate(::std::int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  static ::std::int32_t recv_frobnicate(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void frobnicateT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> frobnicateCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
 void ping(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void pingImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
 public:

  void sync_ping();
  void sync_ping(apache::thrift::RpcOptions& rpcOptions);

  folly::SemiFuture<folly::Unit> semifuture_ping();
  folly::SemiFuture<folly::Unit> semifuture_ping(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<void> co_ping() {
    return co_ping<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<void> co_ping(apache::thrift::RpcOptions& rpcOptions) {
    return co_ping<true>(&rpcOptions);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_ping(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<true> callback(&returnState);
    auto ctx = pingCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<true>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      pingImpl(*rpcOptions, ctx, std::move(wrappedCallback));
    } else {
      pingImpl(defaultRpcOptions, ctx, std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES


 private:
  template <typename Protocol_>
  void pingT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> pingCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
 void truthify(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void truthifyImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback);
 public:

  apache::thrift::ClientBufferedStream<bool> sync_truthify();
  apache::thrift::ClientBufferedStream<bool> sync_truthify(apache::thrift::RpcOptions& rpcOptions);

  folly::SemiFuture<apache::thrift::ClientBufferedStream<bool>> semifuture_truthify();
  folly::SemiFuture<apache::thrift::ClientBufferedStream<bool>> semifuture_truthify(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<apache::thrift::ClientBufferedStream<bool>> co_truthify() {
    return co_truthify<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<apache::thrift::ClientBufferedStream<bool>> co_truthify(apache::thrift::RpcOptions& rpcOptions) {
    return co_truthify<true>(&rpcOptions);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<apache::thrift::ClientBufferedStream<bool>> co_truthify(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = truthifyCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::createStreamClientCallback(
        apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback),
      hasRpcOptions ? rpcOptions->getBufferOptions() : defaultRpcOptions.getBufferOptions());
    if constexpr (hasRpcOptions) {
      truthifyImpl(*rpcOptions, ctx, std::move(wrappedCallback));
    } else {
      truthifyImpl(defaultRpcOptions, ctx, std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header() && !returnState.header()->getHeaders().empty()) {
        rpcOptions->setReadHeaders(returnState.header()->releaseHeaders());
      }
    };
    apache::thrift::ClientBufferedStream<bool> _return;
    if (auto ew = recv_wrapped_truthify(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES


  static folly::exception_wrapper recv_wrapped_truthify(apache::thrift::ClientBufferedStream<bool>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::ClientBufferedStream<bool> recv_truthify(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void truthifyT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::StreamClientCallback* callback);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> truthifyCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
 protected:
  void encodeImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::SinkClientCallback* callback);
 public:
#if FOLLY_HAS_COROUTINES
  folly::coro::Task<apache::thrift::ResponseAndClientSink<::std::set<float>, ::std::string, ::std::string>> co_encode();
  folly::coro::Task<apache::thrift::ResponseAndClientSink<::std::set<float>, ::std::string, ::std::string>> co_encode(apache::thrift::RpcOptions& rpcOptions);
#endif // FOLLY_HAS_COROUTINES

  static folly::exception_wrapper recv_wrapped_encode(apache::thrift::ResponseAndClientSink<::std::set<float>, ::std::string, ::std::string>& _return, ::apache::thrift::ClientReceiveState& state);
  static apache::thrift::ResponseAndClientSink<::std::set<float>, ::std::string, ::std::string> recv_encode(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void encodeT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::SinkClientCallback* callback);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> encodeCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};class SerialInteraction final : public apache::thrift::InteractionHandle {
  using apache::thrift::InteractionHandle::InteractionHandle;
  friend class MyServiceAsyncClient;
 public:


  char const* getServiceName() const noexcept override {
    return "MyService";
  }


 void frobnicate(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void frobnicateImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
 public:

  void sync_frobnicate();
  void sync_frobnicate(apache::thrift::RpcOptions& rpcOptions);

  folly::SemiFuture<folly::Unit> semifuture_frobnicate();
  folly::SemiFuture<folly::Unit> semifuture_frobnicate(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<void> co_frobnicate() {
    return co_frobnicate<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<void> co_frobnicate(apache::thrift::RpcOptions& rpcOptions) {
    return co_frobnicate<true>(&rpcOptions);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_frobnicate(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = frobnicateCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      frobnicateImpl(*rpcOptions, ctx, std::move(wrappedCallback));
    } else {
      frobnicateImpl(defaultRpcOptions, ctx, std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header() && !returnState.header()->getHeaders().empty()) {
        rpcOptions->setReadHeaders(returnState.header()->releaseHeaders());
      }
    };
    if (auto ew = recv_wrapped_frobnicate(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES


  static folly::exception_wrapper recv_wrapped_frobnicate(::apache::thrift::ClientReceiveState& state);
  static void recv_frobnicate(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void frobnicateT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> frobnicateCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};
  MyInteraction createMyInteraction();
  MyInteractionFast createMyInteractionFast();
  SerialInteraction createSerialInteraction();
  virtual void foo(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void foo(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void fooImpl(const apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
 public:

  virtual void sync_foo();
  virtual void sync_foo(apache::thrift::RpcOptions& rpcOptions);

  virtual folly::Future<folly::Unit> future_foo();
  virtual folly::SemiFuture<folly::Unit> semifuture_foo();
  virtual folly::Future<folly::Unit> future_foo(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<folly::Unit> semifuture_foo(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_foo(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_foo(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
  template <int = 0>
  folly::coro::Task<void> co_foo() {
    return co_foo<false>(nullptr);
  }
  template <int = 0>
  folly::coro::Task<void> co_foo(apache::thrift::RpcOptions& rpcOptions) {
    return co_foo<true>(&rpcOptions);
  }
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_foo(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientSyncCallback<false> callback(&returnState);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto ctx = fooCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static const apache::thrift::RpcOptions defaultRpcOptions;
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      fooImpl(*rpcOptions, ctx, std::move(wrappedCallback));
    } else {
      fooImpl(defaultRpcOptions, ctx, std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::shared_ptr<apache::thrift::ContextStack>(ctx, &ctx->ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header() && !returnState.header()->getHeaders().empty()) {
        rpcOptions->setReadHeaders(returnState.header()->releaseHeaders());
      }
    };
    if (auto ew = recv_wrapped_foo(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  virtual void foo(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  static folly::exception_wrapper recv_wrapped_foo(::apache::thrift::ClientReceiveState& state);
  static void recv_foo(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_foo(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_foo(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void fooT(Protocol_* prot, apache::thrift::RpcOptions rpcOptions, std::shared_ptr<apache::thrift::detail::ac::ClientRequestContext> ctx, apache::thrift::RequestClientCallback::Ptr callback);
  std::shared_ptr<::apache::thrift::detail::ac::ClientRequestContext> fooCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};

} // cpp2
