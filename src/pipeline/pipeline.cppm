module;
#include <format>
#include <iostream>
#include <string>
#include <typeinfo>

export module Pipeline;

import Concepts;

export class Pipeline {
	public:
		Pipeline() {};

		void publish(Message auto msg) {
			// std::string time = std::format("{}", msg.timestamp);
			std::cout << "Publishing " << typeid(msg).name() << " message." << std::endl; 		
		}
};
