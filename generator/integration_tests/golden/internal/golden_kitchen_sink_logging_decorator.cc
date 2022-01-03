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
#include "generator/integration_tests/golden/internal/golden_kitchen_sink_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/internal/streaming_read_rpc_logging.h"
#include "google/cloud/status_or.h"
#include <generator/integration_tests/test.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace golden_internal {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

GoldenKitchenSinkLogging::GoldenKitchenSinkLogging(
    std::shared_ptr<GoldenKitchenSinkStub> child,
    TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)), tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse>
GoldenKitchenSinkLogging::GenerateAccessToken(
    grpc::ClientContext& context,
    google::test::admin::database::v1::GenerateAccessTokenRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::test::admin::database::v1::GenerateAccessTokenRequest const& request) {
        return child_->GenerateAccessToken(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse>
GoldenKitchenSinkLogging::GenerateIdToken(
    grpc::ClientContext& context,
    google::test::admin::database::v1::GenerateIdTokenRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::test::admin::database::v1::GenerateIdTokenRequest const& request) {
        return child_->GenerateIdToken(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse>
GoldenKitchenSinkLogging::WriteLogEntries(
    grpc::ClientContext& context,
    google::test::admin::database::v1::WriteLogEntriesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::test::admin::database::v1::WriteLogEntriesRequest const& request) {
        return child_->WriteLogEntries(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::test::admin::database::v1::ListLogsResponse>
GoldenKitchenSinkLogging::ListLogs(
    grpc::ClientContext& context,
    google::test::admin::database::v1::ListLogsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::test::admin::database::v1::ListLogsRequest const& request) {
        return child_->ListLogs(context, request);
      },
      context, request, __func__, tracing_options_);
}

std::unique_ptr<internal::StreamingReadRpc<google::test::admin::database::v1::TailLogEntriesResponse>>
GoldenKitchenSinkLogging::TailLogEntries(
    std::unique_ptr<grpc::ClientContext> context,
    google::test::admin::database::v1::TailLogEntriesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](std::unique_ptr<grpc::ClientContext> context,
             google::test::admin::database::v1::TailLogEntriesRequest const& request) ->
      std::unique_ptr<internal::StreamingReadRpc<
          google::test::admin::database::v1::TailLogEntriesResponse>> {
        auto stream = child_->TailLogEntries(std::move(context), request);
        if (components_.count("rpc-streams") > 0) {
          stream = absl::make_unique<internal::StreamingReadRpcLogging<
             google::test::admin::database::v1::TailLogEntriesResponse>>(
               std::move(stream), tracing_options_,
               internal::RequestIdForLogging());
        }
        return stream;
      },
      std::move(context), request, __func__, tracing_options_);
}

StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse>
GoldenKitchenSinkLogging::ListServiceAccountKeys(
    grpc::ClientContext& context,
    google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) {
        return child_->ListServiceAccountKeys(context, request);
      },
      context, request, __func__, tracing_options_);
}

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace golden_internal
}  // namespace cloud
}  // namespace google
