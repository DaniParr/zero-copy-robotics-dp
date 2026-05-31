module;
#include <chrono>

export module Timestamp;

export using Timestamp = std::chrono::steady_clock::time_point;
