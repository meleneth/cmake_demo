cmake_minimum_required(VERSION 3.14)

# Project name
project(SomeProgram LANGUAGES CXX)

include(cmake/CPM.cmake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

CPMAddPackage("gh:catchorg/Catch2@3.5.2")
CPMAddPackage("gh:CLIUtils/CLI11#main")
CPMAddPackage("gh:gabime/spdlog@1.13.0")

list(APPEND CMAKE_MODULE_PATH "${Catch2_SOURCE_DIR}/extras")

enable_testing()
add_subdirectory(tests)

add_executable(some_program
    src/main.cpp
)

add_library(secondary
    src/secondary/secondary.cpp
)

target_include_directories(secondary PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/secondary
)

target_link_libraries(some_program
  PRIVATE
  secondary
  spdlog::spdlog
  CLI11::CLI11
)

