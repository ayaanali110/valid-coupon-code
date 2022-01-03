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
// source: google/logging/v2/logging.proto
#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_LOGGING_SERVICE_V2_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_LOGGING_SERVICE_V2_CONNECTION_H

#include "google/cloud/logging/internal/logging_service_v2_stub.h"
#include "google/cloud/logging/logging_service_v2_connection_idempotency_policy.h"
#include "google/cloud/logging/retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace logging {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

using LoggingServiceV2RetryPolicy =
    google::cloud::internal::TraitBasedRetryPolicy<
        logging_internal::LoggingServiceV2RetryTraits>;

using LoggingServiceV2LimitedTimeRetryPolicy =
    google::cloud::internal::LimitedTimeRetryPolicy<
        logging_internal::LoggingServiceV2RetryTraits>;

using LoggingServiceV2LimitedErrorCountRetryPolicy =
    google::cloud::internal::LimitedErrorCountRetryPolicy<
        logging_internal::LoggingServiceV2RetryTraits>;

class LoggingServiceV2Connection {
 public:
  virtual ~LoggingServiceV2Connection() = 0;

  virtual Status DeleteLog(
      ::google::logging::v2::DeleteLogRequest const& request);

  virtual StatusOr<::google::logging::v2::WriteLogEntriesResponse>
  WriteLogEntries(::google::logging::v2::WriteLogEntriesRequest const& request);

  virtual StreamRange<::google::logging::v2::LogEntry> ListLogEntries(
      ::google::logging::v2::ListLogEntriesRequest request);

  virtual StreamRange<::google::api::MonitoredResourceDescriptor>
  ListMonitoredResourceDescriptors(
      ::google::logging::v2::ListMonitoredResourceDescriptorsRequest request);

  virtual StreamRange<std::string> ListLogs(
      ::google::logging::v2::ListLogsRequest request);
};

std::shared_ptr<LoggingServiceV2Connection> MakeLoggingServiceV2Connection(
    Options options = {});

std::shared_ptr<LoggingServiceV2Connection> MakeLoggingServiceV2Connection(
    std::shared_ptr<logging_internal::LoggingServiceV2Stub> stub,
    Options options = {});

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace logging
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_LOGGING_SERVICE_V2_CONNECTION_H
