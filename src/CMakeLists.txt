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

if(MSVC)
	target_compile_options(eyeRT_sim
		PRIVATE
			/W4 /w14640 /permissive
	)
else()
	target_compile_options(eyeRT_sim
		PRIVATE
			-pedantic									# warn on language extensions
			-Wall 
			-Wextra										# reasonable and standard
			-Wshadow									# warn the user if a variable declaration 
																# shadows one from a parent context
			-Wnon-virtual-dtor				# warn the user if a class with virtual
																# functions has a non-virtual destructor
			-Wold-style-cast					# warn for c-style casts
			-Wcast-align							# warn for potential 
																# performance problem casts
			-Wunused									# warn on anything being unused
			-Woverloaded-virtual			# warn if you overload (not override)
																# a virtual function
			-Wpedantic								# warn if non-standard C++ is used
			-Wconversion							# warn on type conversions 
																# that may lose data
			-Wsign-conversion					# warn on sign conversions
			-Wmisleading-indentation	# warn if indentation applies blocks
																# where blocks do not exist
			-Wduplicated-cond					# warn if `if`/`else` chain has
																# duplicated conditions
			-Wduplicated-branches			# warn if `if`/`else` branches have
																# duplicated code
			-Wlogical-op							# warn about logical operations being used
																# where bitwise were probably wanted
			-Wnull-dereference				# warn if a null dereference is detected
			-Wuseless-cast						# warn if you perform a cast 
																# to the same type
			-Wdouble-promotion				# warn if `float` is implicit promoted
																# to double
			-Wformat=2								# warn on security issues around functions
																# that format output (ie `printf`)
			#-Wlifetime								# (Clang) shows object lifetime issues
	)
endif()
