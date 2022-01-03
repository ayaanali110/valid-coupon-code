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
#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_GOLDEN_THING_ADMIN_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_GOLDEN_THING_ADMIN_CONNECTION_H

#include "generator/integration_tests/golden/golden_thing_admin_connection_idempotency_policy.h"
#include "generator/integration_tests/golden/internal/golden_thing_admin_stub.h"
#include "generator/integration_tests/golden/retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace golden {
inline namespace GOOGLE_CLOUD_CPP_GENERATED_NS {

using GoldenThingAdminRetryPolicy = google::cloud::internal::TraitBasedRetryPolicy<
    golden_internal::GoldenThingAdminRetryTraits>;

using GoldenThingAdminLimitedTimeRetryPolicy = google::cloud::internal::LimitedTimeRetryPolicy<
    golden_internal::GoldenThingAdminRetryTraits>;

using GoldenThingAdminLimitedErrorCountRetryPolicy =
    google::cloud::internal::LimitedErrorCountRetryPolicy<
        golden_internal::GoldenThingAdminRetryTraits>;

class GoldenThingAdminConnection {
 public:
  virtual ~GoldenThingAdminConnection() = 0;

  virtual StreamRange<google::test::admin::database::v1::Database>
  ListDatabases(google::test::admin::database::v1::ListDatabasesRequest request);

  virtual future<StatusOr<google::test::admin::database::v1::Database>>
  CreateDatabase(google::test::admin::database::v1::CreateDatabaseRequest const& request);

  virtual StatusOr<google::test::admin::database::v1::Database>
  GetDatabase(google::test::admin::database::v1::GetDatabaseRequest const& request);

  virtual future<StatusOr<google::test::admin::database::v1::UpdateDatabaseDdlMetadata>>
  UpdateDatabaseDdl(google::test::admin::database::v1::UpdateDatabaseDdlRequest const& request);

  virtual Status
  DropDatabase(google::test::admin::database::v1::DropDatabaseRequest const& request);

  virtual StatusOr<google::test::admin::database::v1::GetDatabaseDdlResponse>
  GetDatabaseDdl(google::test::admin::database::v1::GetDatabaseDdlRequest const& request);

  virtual StatusOr<google::iam::v1::Policy>
  SetIamPolicy(google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy>
  GetIamPolicy(google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);

  virtual future<StatusOr<google::test::admin::database::v1::Backup>>
  CreateBackup(google::test::admin::database::v1::CreateBackupRequest const& request);

  virtual StatusOr<google::test::admin::database::v1::Backup>
  GetBackup(google::test::admin::database::v1::GetBackupRequest const& request);

  virtual StatusOr<google::test::admin::database::v1::Backup>
  UpdateBackup(google::test::admin::database::v1::UpdateBackupRequest const& request);

  virtual Status
  DeleteBackup(google::test::admin::database::v1::DeleteBackupRequest const& request);

  virtual StreamRange<google::test::admin::database::v1::Backup>
  ListBackups(google::test::admin::database::v1::ListBackupsRequest request);

  virtual future<StatusOr<google::test::admin::database::v1::Database>>
  RestoreDatabase(google::test::admin::database::v1::RestoreDatabaseRequest const& request);

  virtual StreamRange<google::longrunning::Operation>
  ListDatabaseOperations(google::test::admin::database::v1::ListDatabaseOperationsRequest request);

  virtual StreamRange<google::longrunning::Operation>
  ListBackupOperations(google::test::admin::database::v1::ListBackupOperationsRequest request);

};

std::shared_ptr<GoldenThingAdminConnection> MakeGoldenThingAdminConnection(
    Options options = {});

std::shared_ptr<GoldenThingAdminConnection> MakeGoldenThingAdminConnection(
    std::shared_ptr<golden_internal::GoldenThingAdminStub> stub,
    Options options = {});

}  // namespace GOOGLE_CLOUD_CPP_GENERATED_NS
}  // namespace golden
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTEGRATION_TESTS_GOLDEN_GOLDEN_THING_ADMIN_CONNECTION_H
