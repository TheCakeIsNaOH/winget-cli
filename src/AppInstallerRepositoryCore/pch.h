﻿// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.
#pragma once

#define NOMINMAX
#include <windows.h>

#include <AppInstallerDateTime.h>
#include <AppInstallerDeployment.h>
#include <AppInstallerErrors.h>
#include <AppInstallerLogging.h>
#include <AppInstallerMsixInfo.h>
#include <AppInstallerRuntime.h>
#include <AppInstallerSHA256.h>
#include <AppInstallerStrings.h>
#include <AppInstallerSynchronization.h>
#include <yaml-cpp/yaml.h>

#include <wil/result_macros.h>

#include <winsqlite/winsqlite3.h>

#include <winrt/Windows.ApplicationModel.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>

#include <algorithm>
#include <filesystem>
#include <initializer_list>
#include <iomanip>
#include <optional>
#include <string>
#include <string_view>
#include <sstream>
#include <system_error>
#include <tuple>
#include <type_traits>
#include <utility>

#ifndef AICLI_DISABLE_TEST_HOOKS
#include <functional>
#include <map>
#endif
