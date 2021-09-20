/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <boost/variant.hpp>

#include <folly/Portability.h>

#include <folly/Overload.h>
#if FOLLY_HAS_COROUTINES
#include <folly/experimental/coro/AsyncGenerator.h>
#include <folly/experimental/coro/Baton.h>
#include <folly/experimental/coro/Task.h>
#else
#include <folly/CancellationToken.h>
#endif

#include <thrift/lib/cpp2/async/SinkBridgeUtil.h>
#include <thrift/lib/cpp2/async/StreamCallbacks.h>
#include <thrift/lib/cpp2/async/TwoWayBridge.h>
#include <thrift/lib/cpp2/transport/rocket/RocketException.h>

namespace apache {
namespace thrift {
namespace detail {

class ClientSinkBridge;

// Instantiated in ClientSinkBridge.cpp
extern template class TwoWayBridge<
    ClientSinkConsumer,
    ClientMessage,
    ClientSinkBridge,
    ServerMessage,
    ClientSinkBridge>;

class ClientSinkBridge : public TwoWayBridge<
                             ClientSinkConsumer,
                             ClientMessage,
                             ClientSinkBridge,
                             ServerMessage,
                             ClientSinkBridge>,
                         public SinkClientCallback {
 public:
  ~ClientSinkBridge() override;

  using FirstResponseCallback = FirstResponseClientCallback<Ptr>;

  static SinkClientCallback* create(FirstResponseCallback* callback);

  void close();

  bool wait(ClientSinkConsumer* consumer);

  void push(ServerMessage&& value);

  ClientQueue getMessages();

#if FOLLY_HAS_COROUTINES
  folly::coro::Task<folly::Try<StreamPayload>> sink(
      folly::coro::AsyncGenerator<folly::Try<StreamPayload>&&> generator);
#endif

  void cancel(folly::Try<StreamPayload> payload);

  // SinkClientCallback method
  bool onFirstResponse(
      FirstResponsePayload&& firstPayload,
      folly::EventBase* evb,
      SinkServerCallback* serverCallback) override;

  void onFirstResponseError(folly::exception_wrapper ew) override;

  void onFinalResponse(StreamPayload&& payload) override;

  void onFinalResponseError(folly::exception_wrapper ew) override;

  bool onSinkRequestN(uint64_t n) override;

  void resetServerCallback(SinkServerCallback& serverCallback) override;

  void consume();

  bool hasServerCancelled();

  void canceled() {}

 private:
  explicit ClientSinkBridge(FirstResponseCallback* callback);

  void processServerMessages();

#if FOLLY_HAS_COROUTINES
  // TODO(T88629984): These are implemented as static functions because
  // clang-9 + member function coroutines + ASAN == ICE. Revert D27688850
  // once everything using thrift sink is past clang-9.
  static folly::coro::Task<folly::Try<StreamPayload>> sinkImpl(
      ClientSinkBridge& self,
      folly::coro::AsyncGenerator<folly::Try<StreamPayload>&&> generator);

  static folly::coro::Task<void> waitEventImpl(
      ClientSinkBridge& self,
      int64_t& credit,
      folly::Try<StreamPayload>& finalResponse,
      folly::CancellationToken& clientCancelToken);
#endif

  union {
    FirstResponseCallback* firstResponseCallback_;
    SinkServerCallback* serverCallback_;
  };
  folly::Executor::KeepAlive<folly::EventBase> evb_;
  folly::CancellationSource serverCancelSource_;
};

} // namespace detail
} // namespace thrift
} // namespace apache
