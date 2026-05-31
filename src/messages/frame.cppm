module;
#include <vector>
#include <memory>
#include <cstdint>

export module Frame;

import Timestamp;

export struct Frame 
{	
	Timestamp timestamp;

	std::shared_ptr<std::vector<uint8_t>> buffer;
	int width;
	int height;
};
