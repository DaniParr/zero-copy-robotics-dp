add_library(pipeline)

target_sources(pipeline
	PUBLIC
	FILE_SET CXX_MODULES FILES
		pipeline.cppm
)

target_link_libraries(pipeline
	PRIVATE
		core
)
