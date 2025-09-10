cmake_minimum_required(VERSION 3.14)

# Project name
project(SomeProgram LANGUAGES CXX)

# Require at least C++11 (adjust if you want newer)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the executable
add_executable(some_program
    src/main.cpp
    src/secondary.cpp
)

# Optionally, tell CMake where to find headers
target_include_directories(some_program PRIVATE src)
