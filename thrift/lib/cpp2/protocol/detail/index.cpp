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

#include <thrift/lib/cpp2/protocol/detail/index.h>

#include <limits>
#include <memory>
#include <random>

#include <xxhash.h>

DEFINE_bool(
    thrift_enable_lazy_deserialization,
    true,
    "Whether to enable lazy deserialization");

namespace apache {
namespace thrift {
namespace detail {

Xxh3Hasher::Xxh3Hasher() {
  state = static_cast<void*>(XXH3_createState());
  XXH3_64bits_reset(static_cast<XXH3_state_t*>(state));
}

Xxh3Hasher::~Xxh3Hasher() {
  XXH3_freeState(static_cast<XXH3_state_t*>(state));
}

void Xxh3Hasher::update(folly::io::Cursor cursor) {
  while (!cursor.isAtEnd()) {
    const auto buf = cursor.peekBytes();
    XXH3_64bits_update(
        static_cast<XXH3_state_t*>(state), buf.data(), buf.size());
    cursor += buf.size();
  }
}

Xxh3Hasher::operator int64_t() {
  return XXH3_64bits_digest(static_cast<XXH3_state_t*>(state));
}

int64_t random_64bits_integer() {
  thread_local std::default_random_engine engine(std::random_device{}());
  thread_local std::uniform_int_distribution<int64_t> dist(
      std::numeric_limits<int64_t>::min(), std::numeric_limits<int64_t>::max());
  return dist(engine);
}

} // namespace detail
} // namespace thrift
} // namespace apache
