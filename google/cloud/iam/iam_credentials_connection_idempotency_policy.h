// Copyright 2020 Google LLC
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
// source: google/iam/credentials/v1/iamcredentials.proto
#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_IAM_CREDENTIALS_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_IAM_CREDENTIALS_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/iam/credentials/v1/iamcredentials.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace iam {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

class IAMCredentialsConnectionIdempotencyPolicy {
 public:
  virtual ~IAMCredentialsConnectionIdempotencyPolicy() = 0;

  /// Create a new copy of this object.
  virtual std::unique_ptr<IAMCredentialsConnectionIdempotencyPolicy> clone()
      const = 0;

  virtual google::cloud::internal::Idempotency GenerateAccessToken(
      ::google::iam::credentials::v1::GenerateAccessTokenRequest const&
          request) = 0;

  virtual google::cloud::internal::Idempotency GenerateIdToken(
      ::google::iam::credentials::v1::GenerateIdTokenRequest const&
          request) = 0;

  virtual google::cloud::internal::Idempotency SignBlob(
      ::google::iam::credentials::v1::SignBlobRequest const& request) = 0;

  virtual google::cloud::internal::Idempotency SignJwt(
      ::google::iam::credentials::v1::SignJwtRequest const& request) = 0;
};

std::unique_ptr<IAMCredentialsConnectionIdempotencyPolicy>
MakeDefaultIAMCredentialsConnectionIdempotencyPolicy();

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace iam
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAM_IAM_CREDENTIALS_CONNECTION_IDEMPOTENCY_POLICY_H
