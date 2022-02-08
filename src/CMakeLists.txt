# add the physicsFUNs library
add_subdirectory(physicsFUNs)
# add the graphicsFUNs library
add_subdirectory(graphicsFUNs)

add_executable(eyeRT_sim sim_main.cpp)

target_link_libraries(eyeRT_sim
	PRIVATE
		physicsFUNs
		graphicsFUNs
)

target_include_directories(eyeRT_sim
	PRIVATE
		physicsFUNs
		graphicsFUNs
)
