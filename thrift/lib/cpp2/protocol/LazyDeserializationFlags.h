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
#include <atomic>
#include <folly/portability/GFlags.h>

DECLARE_bool(thrift_enable_lazy_deserialization);

namespace apache {
namespace thrift {
namespace detail {

extern std::atomic<bool> gLazyDeserializationIsDisabledDueToChecksumMismatch;

inline bool isLazyDeserializationDisabled() {
  return !FLAGS_thrift_enable_lazy_deserialization ||
      gLazyDeserializationIsDisabledDueToChecksumMismatch.load(
          std::memory_order_relaxed);
}
} // namespace detail

inline bool lazyDeserializationIsDisabledDueToChecksumMismatch() {
  return detail::gLazyDeserializationIsDisabledDueToChecksumMismatch.load(
      std::memory_order_relaxed);
}
} // namespace thrift
} // namespace apache
