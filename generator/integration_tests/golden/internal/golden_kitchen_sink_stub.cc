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
// source: generator/integration_tests/test.proto

#include "generator/integration_tests/golden/internal/golden_kitchen_sink_stub.h"
#include "absl/memory/memory.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <generator/integration_tests/test.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace golden_internal {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

GoldenKitchenSinkStub::~GoldenKitchenSinkStub() = default;

StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse>
DefaultGoldenKitchenSinkStub::GenerateAccessToken(
  grpc::ClientContext& client_context,
  google::test::admin::database::v1::GenerateAccessTokenRequest const& request) {
    google::test::admin::database::v1::GenerateAccessTokenResponse response;
    auto status =
        grpc_stub_->GenerateAccessToken(&client_context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse>
DefaultGoldenKitchenSinkStub::GenerateIdToken(
  grpc::ClientContext& client_context,
  google::test::admin::database::v1::GenerateIdTokenRequest const& request) {
    google::test::admin::database::v1::GenerateIdTokenResponse response;
    auto status =
        grpc_stub_->GenerateIdToken(&client_context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse>
DefaultGoldenKitchenSinkStub::WriteLogEntries(
  grpc::ClientContext& client_context,
  google::test::admin::database::v1::WriteLogEntriesRequest const& request) {
    google::test::admin::database::v1::WriteLogEntriesResponse response;
    auto status =
        grpc_stub_->WriteLogEntries(&client_context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

StatusOr<google::test::admin::database::v1::ListLogsResponse>
DefaultGoldenKitchenSinkStub::ListLogs(
  grpc::ClientContext& client_context,
  google::test::admin::database::v1::ListLogsRequest const& request) {
    google::test::admin::database::v1::ListLogsResponse response;
    auto status =
        grpc_stub_->ListLogs(&client_context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

std::unique_ptr<internal::StreamingReadRpc<google::test::admin::database::v1::TailLogEntriesResponse>>
DefaultGoldenKitchenSinkStub::TailLogEntries(
    std::unique_ptr<grpc::ClientContext> client_context,
    google::test::admin::database::v1::TailLogEntriesRequest const& request) {
  auto stream = grpc_stub_->TailLogEntries(client_context.get(), request);
  return absl::make_unique<internal::StreamingReadRpcImpl<
      google::test::admin::database::v1::TailLogEntriesResponse>>(
      std::move(client_context), std::move(stream));
}

StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse>
DefaultGoldenKitchenSinkStub::ListServiceAccountKeys(
  grpc::ClientContext& client_context,
  google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) {
    google::test::admin::database::v1::ListServiceAccountKeysResponse response;
    auto status =
        grpc_stub_->ListServiceAccountKeys(&client_context, request, &response);
    if (!status.ok()) {
      return google::cloud::MakeStatusFromRpcError(status);
    }
    return response;
}

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace golden_internal
}  // namespace cloud
}  // namespace google
