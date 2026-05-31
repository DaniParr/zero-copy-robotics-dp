#include <chrono>

import Pipeline;
import Pressure;

int main() 
{
	Pipeline pipeline;

	Pressure msg = {
		.timestamp = std::chrono::system_clock::now(),
		.depth 	   = 1.0
	};

	pipeline.publish(msg);

	return 0;
}
