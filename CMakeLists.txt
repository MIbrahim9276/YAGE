# Minimum CMake version to build the software
cmake_minimum_required(VERSION 3.27)

# Project Name
project(YAGE)

# Include directory
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

# add the Main executable
add_executable(
  yage
  "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp"
)