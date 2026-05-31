module;
#include <iostream>
#include <string>
#include <typeinfo>

export module Pipeline;

import Concepts;

export class Pipeline {
	public:
		Pipeline() {};

		void publish(Message auto const& msg) {
			std::cout << "Publishing " << typeid(msg).name() << " message." << std::endl; 		
		}
};
