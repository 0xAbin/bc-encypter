# CMake minimum version required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(bc_encrypter VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 22)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Add source files
file(GLOB SOURCES "src/*.cpp")

# Create an executable for the main project
add_executable(bc_encrypter ${SOURCES})

# Link libraries (if any)
# target_link_libraries(bc_encrypter some_library)

# Enable testing
enable_testing()

# Add test files
file(GLOB TEST_SOURCES "test/*.cpp")
add_executable(run_tests ${TEST_SOURCES})

# Add a custom target to run tests
add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND} --verbose)
add_test(NAME run_tests COMMAND run_tests)

# Add executable for debugger.cpp
add_executable(debugger test/debugger.cpp)