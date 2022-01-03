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

#include "google/cloud/iam/internal/iam_credentials_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/iam/credentials/v1/iamcredentials.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace iam_internal {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

IAMCredentialsStub::~IAMCredentialsStub() = default;

StatusOr<::google::iam::credentials::v1::GenerateAccessTokenResponse>
DefaultIAMCredentialsStub::GenerateAccessToken(
    grpc::ClientContext& client_context,
    ::google::iam::credentials::v1::GenerateAccessTokenRequest const& request) {
  ::google::iam::credentials::v1::GenerateAccessTokenResponse response;
  auto status =
      grpc_stub_->GenerateAccessToken(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<::google::iam::credentials::v1::GenerateIdTokenResponse>
DefaultIAMCredentialsStub::GenerateIdToken(
    grpc::ClientContext& client_context,
    ::google::iam::credentials::v1::GenerateIdTokenRequest const& request) {
  ::google::iam::credentials::v1::GenerateIdTokenResponse response;
  auto status =
      grpc_stub_->GenerateIdToken(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<::google::iam::credentials::v1::SignBlobResponse>
DefaultIAMCredentialsStub::SignBlob(
    grpc::ClientContext& client_context,
    ::google::iam::credentials::v1::SignBlobRequest const& request) {
  ::google::iam::credentials::v1::SignBlobResponse response;
  auto status = grpc_stub_->SignBlob(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<::google::iam::credentials::v1::SignJwtResponse>
DefaultIAMCredentialsStub::SignJwt(
    grpc::ClientContext& client_context,
    ::google::iam::credentials::v1::SignJwtRequest const& request) {
  ::google::iam::credentials::v1::SignJwtResponse response;
  auto status = grpc_stub_->SignJwt(&client_context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace iam_internal
}  // namespace cloud
}  // namespace google
