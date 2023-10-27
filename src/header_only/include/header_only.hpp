#pragma once

#include "absl/log/log.h"
#include "git.h"

namespace header_only {
namespace common {
inline int some_fun() {
    LOG(INFO) << git::ProjectVersion();
    return 0;
}

constexpr int some_constexpr_fun() {
    return 0;
}

const std::string_view const_string() {
    LOG(INFO) << "Calling " << __FUNCTION__;
    return "This is a header_only only const string";
}
} // namespace common

} // namespace header_only