module;
#include <concepts>

export module Concepts;

import Timestamp;

export template<typename T>
concept Message = 
std::movable<T> &&
requires(T msg) 
{
	{ msg.timestamp } -> std::convertible_to<Timestamp>;
};
