add_library(core)

target_sources(core
	PUBLIC
	FILE_SET CXX_MODULES FILES
		timestamp.cppm
		concepts.cppm
)
