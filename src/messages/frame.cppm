module;
#include <span>
#include <cstdint>

export module Frame;

import Timestamp;

export struct Frame 
{	
	Timestamp timestamp;

	std::span<uint8_t> data;
	int width;
	int height;
};
