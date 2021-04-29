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

namespace apache {
namespace thrift {
namespace detail {

#if FOLLY_HAS_COROUTINES
template <bool WithHeader, typename T>
ServerStreamFn<T> ServerGeneratorStream::fromAsyncGenerator(
    folly::coro::AsyncGenerator<
        std::conditional_t<WithHeader, PayloadAndHeader<T>, T>&&>&& gen) {
  return [gen = std::move(gen)](
             folly::Executor::KeepAlive<> serverExecutor,
             folly::Try<StreamPayload> (*encode)(folly::Try<T> &&)) mutable {
    return ServerStreamFactory([gen = std::move(gen),
                                serverExecutor = std::move(serverExecutor),
                                encode](
                                   FirstResponsePayload&& payload,
                                   StreamClientCallback* callback,
                                   folly::EventBase* clientEb,
                                   Tile* interaction) mutable {
      DCHECK(clientEb->isInEventBaseThread());
      auto stream = new ServerGeneratorStream(callback, clientEb);
      auto streamPtr = stream->copy();
      folly::coro::co_invoke(
          [stream = std::move(streamPtr),
           encode,
           gen = std::move(gen),
           interaction]() mutable -> folly::coro::Task<void> {
            bool pauseStream = false;
            int64_t credits = 0;
            class ReadyCallback
                : public apache::thrift::detail::ServerStreamConsumer {
             public:
              void consume() override { baton.post(); }

              void canceled() override { std::terminate(); }

              folly::coro::Baton baton;
            };
            SCOPE_EXIT {
              if (interaction) {
                stream->clientEventBase_->add(
                    [interaction, eb = stream->clientEventBase_] {
                      interaction->__fbthrift_releaseRef(*eb);
                    });
              }
              stream->serverClose();
            };

            while (true) {
              if (credits == 0 || pauseStream) {
                ReadyCallback ready;
                if (stream->wait(&ready)) {
                  co_await ready.baton;
                }
              }

              {
                auto queue = stream->getMessages();
                while (!queue.empty()) {
                  auto next = queue.front();
                  queue.pop();
                  switch (next) {
                    case detail::StreamControl::CANCEL:
                      co_return;
                    case detail::StreamControl::PAUSE:
                      pauseStream = true;
                      break;
                    case detail::StreamControl::RESUME:
                      pauseStream = false;
                      break;
                    default:
                      credits += next;
                      break;
                  }
                }
              }

              if (UNLIKELY(pauseStream || credits == 0)) {
                continue;
              }

              auto&& next = co_await folly::coro::co_awaitTry(
                  folly::coro::co_withCancellation(
                      stream->cancelSource_.getToken(), gen.next()));
              if (next.hasValue()) {
                if constexpr (WithHeader) {
                  if (!next->payload) {
                    StreamPayloadMetadata md;
                    md.otherMetadata_ref() = std::move(next->metadata);
                    stream->publish(folly::Try<StreamPayload>(
                        folly::in_place, nullptr, std::move(md)));
                  } else {
                    StreamPayload sp =
                        *encode(folly::Try<T>(*std::move(next->payload)));
                    sp.metadata.otherMetadata_ref() = std::move(next->metadata);
                    stream->publish(folly::Try<StreamPayload>(std::move(sp)));
                    --credits;
                  }
                } else {
                  stream->publish(encode(std::move(next)));
                  --credits;
                }
                continue;
              } else if (next.hasException()) {
                stream->publish(
                    encode(folly::Try<T>(std::move(next.exception()))));
              } else {
                stream->publish({});
              }
              co_return;
            }
          })
          .scheduleOn(std::move(serverExecutor))
          .start([](folly::Try<folly::Unit> t) {
            if (t.hasException()) {
              LOG(FATAL) << t.exception().what();
            }
          });
      std::ignore =
          callback->onFirstResponse(std::move(payload), clientEb, stream);
      stream->processPayloads();
    });
  };
}
#endif // FOLLY_HAS_COROUTINES

} // namespace detail
} // namespace thrift
} // namespace apache
