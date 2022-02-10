project("physicsFUNs" 
	DESCRIPTION "Custom physics library"
	VERSION 0.1.0
)

add_library(${PROJECT_NAME})

target_sources(${PROJECT_NAME}
	PRIVATE
		src/vrl.cpp
)

target_include_directories(${PROJECT_NAME}
	PRIVATE
		# where the library itself 
		# will look for its internal headers
		${CMAKE_CURRENT_SOURCE_DIR}/src
	PUBLIC
		# where top-level project 
		# will look for the library's public headers
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
		# where external projects
		# will look for the library's public headers
		$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
