export module Concepts;

export template<typename T>
concept Message = requires(T msg) 
{
	msg.timestamp;
};
