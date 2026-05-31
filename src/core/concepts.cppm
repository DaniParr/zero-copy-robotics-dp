module;
#include <concepts>

export module Concepts;

export template<typename T>
concept Message = 
std::movable<T> &&
requires(T msg) 
{
	msg.timestamp;
};
