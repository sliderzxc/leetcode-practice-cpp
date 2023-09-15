cmake_minimum_required(VERSION 3.12)

project(leetcode-practice)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

set(CMAKE_GENERATOR "Visual Studio 17 2022")
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)