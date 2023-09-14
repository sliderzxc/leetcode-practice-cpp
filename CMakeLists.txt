cmake_minimum_required(VERSION 3.12)

project(test)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)