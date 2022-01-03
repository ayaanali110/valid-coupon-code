#!/usr/bin/env bash
# Copyright 2019 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

set -eu

# Exit successfully (and silently) if there are no documents to upload.
if [[ "${GENERATE_DOCS:-}" != "yes" ]]; then
  # No documentation generated by this build, skip upload.
  exit 0
fi

if [[ -n "${KOKORO_GITHUB_PULL_REQUEST_NUMBER:-}" ]]; then
  # Do not publish new documentation on PR builds.
  exit 0
fi

# For docuploader to work
export LC_ALL=C.UTF-8
export LANG=C.UTF-8

# docuploader needs python 3.5 or higher so run this on Kokoro
if [[ -n "${KOKORO_JOB_NAME:-}" ]]; then
  pyenv global 3.6.1
fi

if [[ -z "${CREDENTIALS_FILE:-}" ]]; then
  readonly CREDENTIALS_FILE="${KOKORO_KEYSTORE_DIR}/73713_docuploader_service_account"
fi

if [[ -z "${STAGING_BUCKET:-}" ]]; then
  readonly STAGING_BUCKET="docs-staging"
fi

if [[ -z "${PROJECT_ROOT+x}" ]]; then
  readonly PROJECT_ROOT="$(
    cd "$(dirname "$0")/../../.."
    pwd
  )"
fi
source "${PROJECT_ROOT}/ci/kokoro/define-docker-variables.sh"

echo "================================================================"
echo "Installing docuploader package $(date)."
python3 -m pip install --user gcp-docuploader protobuf --upgrade

upload_docs() {
  local docs_name="${1}"
  local docs_dir="${2}"
  local branch="${3}"
  local credentials_file="${4}"
  local staging_bucket="${5}"
  if [[ ! -d "${docs_dir}" ]]; then
    echo "Document not found at: ${docs_dir}, skipping"
    return 0
  fi
  pushd "${docs_dir}"
  if [[ "${branch}" == "master" ]]; then
    docs_version="master"
  else
    # Extract the version from index.html
    docs_version=$(sed -n 's:.*<span id="projectnumber">\(.*\)</span>.*:\1:p' \
      index.html)
  fi

  # Create docs metadata
  python3 -m docuploader create-metadata \
    --name "${docs_name}" \
    --version "${docs_version}" \
    --language cpp

  # Upload the docs
  python3 -m docuploader upload . \
    --credentials "${credentials_file}" \
    --staging-bucket "${staging_bucket}"
  popd
  return 0
}

upload_docs "google-cloud-common" \
  "${BUILD_OUTPUT}/google/cloud/html" "${BRANCH}" \
  "${CREDENTIALS_FILE}" "${STAGING_BUCKET}"
upload_docs "google-cloud-bigtable" \
  "${BUILD_OUTPUT}/google/cloud/bigtable/html" "${BRANCH}" \
  "${CREDENTIALS_FILE}" "${STAGING_BUCKET}"
upload_docs "google-cloud-spanner" "${BUILD_OUTPUT}/google/cloud/spanner/html" \
  "${BRANCH}" "${CREDENTIALS_FILE}" "${STAGING_BUCKET}"
upload_docs "google-cloud-storage" "${BUILD_OUTPUT}/google/cloud/storage/html" \
  "${BRANCH}" "${CREDENTIALS_FILE}" "${STAGING_BUCKET}"
upload_docs "google-cloud-firestore" \
  "${BUILD_OUTPUT}/google/cloud/firestore/html" "${BRANCH}" \
  "${CREDENTIALS_FILE}" "${STAGING_BUCKET}"
