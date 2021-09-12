/**
 * Autogenerated by Thrift for src/service.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/MyServiceAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::structure, ::cpp2::MyStruct*>, apache::thrift::FieldData<2, ::apache::thrift::type_class::structure, ::cpp2::Included*>> MyService_query_pargs;
typedef apache::thrift::ThriftPresult<true> MyService_query_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::structure, ::cpp2::MyStruct*>, apache::thrift::FieldData<2, ::apache::thrift::type_class::structure, ::cpp2::Included*>> MyService_has_arg_docs_pargs;
typedef apache::thrift::ThriftPresult<true> MyService_has_arg_docs_presult;

template <typename Protocol_, typename RpcOptions>
void MyServiceAsyncClient::queryT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {

  MyService_query_pargs args;
  args.get<0>().value = const_cast<::cpp2::MyStruct*>(&p_s);
  args.get<1>().value = const_cast<::cpp2::Included*>(&p_i);
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "query",
                ::apache::thrift::FunctionQualifier::Unspecified);
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::forward<RpcOptions>(rpcOptions), std::move(callback), contextStack, std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata), writer, sizer);
}

template <typename Protocol_, typename RpcOptions>
void MyServiceAsyncClient::has_arg_docsT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {

  MyService_has_arg_docs_pargs args;
  args.get<0>().value = const_cast<::cpp2::MyStruct*>(&p_s);
  args.get<1>().value = const_cast<::cpp2::Included*>(&p_i);
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "has_arg_docs",
                ::apache::thrift::FunctionQualifier::Unspecified);
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::forward<RpcOptions>(rpcOptions), std::move(callback), contextStack, std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata), writer, sizer);
}



void MyServiceAsyncClient::query(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  ::apache::thrift::RpcOptions rpcOptions;
  query(rpcOptions, std::move(callback), p_s, p_i);
}

void MyServiceAsyncClient::query(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  auto [ctx, header] = queryCtx(&rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto* contextStack = ctx.get();
  if (callback) {
    callbackContext.ctx = std::move(ctx);
  }
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  queryImpl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback), p_s, p_i);
}

void MyServiceAsyncClient::queryImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i, bool stealRpcOptions) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      if (stealRpcOptions) {
        queryT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback), p_s, p_i);
      } else {
        queryT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback), p_s, p_i);
      }
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      if (stealRpcOptions) {
        queryT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback), p_s, p_i);
      } else {
        queryT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback), p_s, p_i);
      }
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> MyServiceAsyncClient::queryCtx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      getServiceName(),
      "MyService.query",
      *header);

  return {std::move(ctx), std::move(header)};
}

void MyServiceAsyncClient::sync_query(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_query(rpcOptions, p_s, p_i);
}

void MyServiceAsyncClient::sync_query(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = queryCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  callback.waitUntilDone(
    evb,
    [&] {
      queryImpl(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback), p_s, p_i);
    });

  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctxAndHeader.first));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      recv_query(returnState);
  });
}


folly::Future<folly::Unit> MyServiceAsyncClient::future_query(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_query(rpcOptions, p_s, p_i);
}

folly::SemiFuture<folly::Unit> MyServiceAsyncClient::semifuture_query(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_query(rpcOptions, p_s, p_i);
}

folly::Future<folly::Unit> MyServiceAsyncClient::future_query(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_query, channel_);
  query(rpcOptions, std::move(callback), p_s, p_i);
  return future;
}

folly::SemiFuture<folly::Unit> MyServiceAsyncClient::semifuture_query(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_query, channel_);
  auto callback = std::move(callbackAndFuture.first);
  query(rpcOptions, std::move(callback), p_s, p_i);
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_future_query(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_query, channel_);
  query(rpcOptions, std::move(callback), p_s, p_i);
  return future;
}

folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_semifuture_query(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_query, channel_);
  auto callback = std::move(callbackAndFuture.first);
  query(rpcOptions, std::move(callback), p_s, p_i);
  return std::move(callbackAndFuture.second);
}

void MyServiceAsyncClient::query(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  query(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_s, p_i);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper MyServiceAsyncClient::recv_wrapped_query(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = MyService_query_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void MyServiceAsyncClient::recv_query(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_query(state);
  if (ew) {
    ew.throw_exception();
  }
}

void MyServiceAsyncClient::recv_instance_query(::apache::thrift::ClientReceiveState& state) {
  recv_query(state);
}

folly::exception_wrapper MyServiceAsyncClient::recv_instance_wrapped_query(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_query(state);
}

void MyServiceAsyncClient::has_arg_docs(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  ::apache::thrift::RpcOptions rpcOptions;
  has_arg_docs(rpcOptions, std::move(callback), p_s, p_i);
}

void MyServiceAsyncClient::has_arg_docs(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  auto [ctx, header] = has_arg_docsCtx(&rpcOptions);
  apache::thrift::RequestCallback::Context callbackContext;
  callbackContext.protocolId =
      apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto* contextStack = ctx.get();
  if (callback) {
    callbackContext.ctx = std::move(ctx);
  }
  auto wrappedCallback = apache::thrift::toRequestClientCallbackPtr(std::move(callback), std::move(callbackContext));
  has_arg_docsImpl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback), p_s, p_i);
}

void MyServiceAsyncClient::has_arg_docsImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i, bool stealRpcOptions) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      if (stealRpcOptions) {
        has_arg_docsT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback), p_s, p_i);
      } else {
        has_arg_docsT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback), p_s, p_i);
      }
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      if (stealRpcOptions) {
        has_arg_docsT(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback), p_s, p_i);
      } else {
        has_arg_docsT(&writer, rpcOptions, std::move(header), contextStack, std::move(callback), p_s, p_i);
      }
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::pair<std::unique_ptr<::apache::thrift::ContextStack>, std::shared_ptr<::apache::thrift::transport::THeader>> MyServiceAsyncClient::has_arg_docsCtx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      getServiceName(),
      "MyService.has_arg_docs",
      *header);

  return {std::move(ctx), std::move(header)};
}

void MyServiceAsyncClient::sync_has_arg_docs(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_has_arg_docs(rpcOptions, p_s, p_i);
}

void MyServiceAsyncClient::sync_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = has_arg_docsCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  callback.waitUntilDone(
    evb,
    [&] {
      has_arg_docsImpl(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback), p_s, p_i);
    });

  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctxAndHeader.first));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      recv_has_arg_docs(returnState);
  });
}


folly::Future<folly::Unit> MyServiceAsyncClient::future_has_arg_docs(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_has_arg_docs(rpcOptions, p_s, p_i);
}

folly::SemiFuture<folly::Unit> MyServiceAsyncClient::semifuture_has_arg_docs(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_has_arg_docs(rpcOptions, p_s, p_i);
}

folly::Future<folly::Unit> MyServiceAsyncClient::future_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  folly::Promise<folly::Unit> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_has_arg_docs, channel_);
  has_arg_docs(rpcOptions, std::move(callback), p_s, p_i);
  return future;
}

folly::SemiFuture<folly::Unit> MyServiceAsyncClient::semifuture_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_has_arg_docs, channel_);
  auto callback = std::move(callbackAndFuture.first);
  has_arg_docs(rpcOptions, std::move(callback), p_s, p_i);
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_future_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(promise), recv_wrapped_has_arg_docs, channel_);
  has_arg_docs(rpcOptions, std::move(callback), p_s, p_i);
  return future;
}

folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_semifuture_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_has_arg_docs, channel_);
  auto callback = std::move(callbackAndFuture.first);
  has_arg_docs(rpcOptions, std::move(callback), p_s, p_i);
  return std::move(callbackAndFuture.second);
}

void MyServiceAsyncClient::has_arg_docs(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  has_arg_docs(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_s, p_i);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper MyServiceAsyncClient::recv_wrapped_has_arg_docs(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = MyService_has_arg_docs_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void MyServiceAsyncClient::recv_has_arg_docs(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_has_arg_docs(state);
  if (ew) {
    ew.throw_exception();
  }
}

void MyServiceAsyncClient::recv_instance_has_arg_docs(::apache::thrift::ClientReceiveState& state) {
  recv_has_arg_docs(state);
}

folly::exception_wrapper MyServiceAsyncClient::recv_instance_wrapped_has_arg_docs(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_has_arg_docs(state);
}


} // cpp2
