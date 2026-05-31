module;
#include <chrono>

export module Timestamp;

export using Timestamp = std::chrono::time_point<std::chrono::steady_clock>;
