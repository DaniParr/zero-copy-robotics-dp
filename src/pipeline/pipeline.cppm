module;
#include <cstdio>
#include <typeinfo>

export module Pipeline;

import Concepts;

export class Pipeline {
	public:
		Pipeline() {};

		void publish(Message auto const& msg) {
			std::printf("Publishing %s message.\n", typeid(msg).name());
		}
};
