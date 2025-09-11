cmake_minimum_required(VERSION 3.14)

# Project name
project(SomeProgram LANGUAGES CXX)

include(cmake/CPM.cmake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

CPMAddPackage("gh:CLIUtils/CLI11#main")
CPMAddPackage("gh:gabime/spdlog@1.13.0")

add_executable(some_program
    src/main.cpp
)

add_library(some
    src/secondary/secondary.cpp
)

target_include_directories(some PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/secondary
)

target_link_libraries(some_program
  PRIVATE
  some
  spdlog::spdlog
  CLI11::CLI11
)

