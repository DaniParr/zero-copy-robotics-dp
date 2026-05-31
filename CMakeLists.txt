cmake_minimum_required(VERSION 3.28)

project(
	ZeroCopyPipeline
	VERSION 0.1
	LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_SCAN_FOR_MODULES ON)

add_subdirectory(src/core)
add_subdirectory(src/messages)
add_subdirectory(src/pipeline)

add_executable( 
	zerocopy 
	src/main.cpp
)

target_link_libraries(
	zerocopy 
	PRIVATE 
		messages 
		pipeline
)
