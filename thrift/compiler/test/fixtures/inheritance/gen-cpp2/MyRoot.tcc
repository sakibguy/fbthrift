/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyRoot.h"

#include <thrift/lib/cpp2/gen/service_tcc.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> MyRoot_do_root_pargs;
typedef apache::thrift::ThriftPresult<true> MyRoot_do_root_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void MyRootAsyncProcessor::setUpAndProcess_do_root(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!setUpRequestProcessing(req, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, this)) {
    return;
  }
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread(std::move(req), std::move(serializedRequest), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &MyRootAsyncProcessor::process_do_root<ProtocolIn_, ProtocolOut_>, this);
}

template <typename ProtocolIn_, typename ProtocolOut_>
void MyRootAsyncProcessor::process_do_root(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  MyRoot_do_root_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyRoot.do_root", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), serializedRequest, ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "do_root");
    return;
  }
  req->setStartedProcessing();
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(std::move(req), std::move(ctxStack), return_do_root<ProtocolIn_,ProtocolOut_>, throw_wrapped_do_root<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    return;
  }
  iface_->async_tm_do_root(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue MyRootAsyncProcessor::return_do_root(int32_t protoSeqId, apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  MyRoot_do_root_presult result;
  return serializeResponse("do_root", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void MyRootAsyncProcessor::throw_wrapped_do_root(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "do_root");
    return;
  }
}


} // cpp2
