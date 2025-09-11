cmake_minimum_required(VERSION 3.16)
project(cmake_demo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the library from the secondary folder
add_library(some
    src/secondary/secondary.cpp
)

target_include_directories(some PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/secondary
)

# Add the main executable
add_executable(some_program
    src/main.cpp
)

target_link_libraries(some_program PRIVATE some)
