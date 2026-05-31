add_library(messages)

target_sources(messages
	PUBLIC
	FILE_SET CXX_MODULES FILES
		dvl.cppm
		frame.cppm
		imu.cppm
		pressure.cppm
		vec3.cppm
)

target_link_libraries(messages
    PUBLIC
        core
)
