cmake_minimum_required(VERSION 3.1)

project(cpp-teach-zero)

add_executable(main
	main.cpp
	test/testlib.cpp
	test/algo/integer.cpp
	test/algo/array.cpp
)

target_include_directories(main PUBLIC "${CMAKE_SOURCE_DIR}")
