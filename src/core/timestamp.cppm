module;
#include <chrono>

export module Timestamp;

export using Timestamp = std::chrono::system_clock::time_point;
