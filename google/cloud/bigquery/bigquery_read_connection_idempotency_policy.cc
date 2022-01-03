// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/bigquery/storage/v1/storage.proto
#include "google/cloud/bigquery/bigquery_read_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

using google::cloud::internal::Idempotency;

BigQueryReadConnectionIdempotencyPolicy::
    ~BigQueryReadConnectionIdempotencyPolicy() = default;

namespace {
class DefaultBigQueryReadConnectionIdempotencyPolicy
    : public BigQueryReadConnectionIdempotencyPolicy {
 public:
  ~DefaultBigQueryReadConnectionIdempotencyPolicy() override = default;

  /// Create a new copy of this object.
  std::unique_ptr<BigQueryReadConnectionIdempotencyPolicy> clone()
      const override {
    return absl::make_unique<DefaultBigQueryReadConnectionIdempotencyPolicy>(
        *this);
  }

  Idempotency CreateReadSession(
      google::cloud::bigquery::storage::v1::CreateReadSessionRequest const&)
      override {
    return Idempotency::kNonIdempotent;
  }

  Idempotency SplitReadStream(
      google::cloud::bigquery::storage::v1::SplitReadStreamRequest const&)
      override {
    return Idempotency::kIdempotent;
  }
};
}  // namespace

std::unique_ptr<BigQueryReadConnectionIdempotencyPolicy>
MakeDefaultBigQueryReadConnectionIdempotencyPolicy() {
  return absl::make_unique<DefaultBigQueryReadConnectionIdempotencyPolicy>();
}

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace bigquery
}  // namespace cloud
}  // namespace google
