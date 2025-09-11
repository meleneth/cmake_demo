# tests/CMakeLists.txt

# Glob test sources
file(GLOB_RECURSE TEST_SOURCES CONFIGURE_DEPENDS *.cpp)

# Test executable (uses Catch2WithMain)
add_executable(test_some ${TEST_SOURCES})

# Link test binary with main code + test framework
target_link_libraries(test_some
    PRIVATE
        some
        Catch2::Catch2WithMain
        spdlog::spdlog
)

target_include_directories(test_some
    PRIVATE
        ${CMAKE_SOURCE_DIR}/src/secondary
)


# Test discovery integration
include(CTest)
include(Catch)
catch_discover_tests(test_some)
