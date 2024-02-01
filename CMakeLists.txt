cmake_minimum_required(VERSION 3.22)

project(piecutter)

set(CMAKE_TOOLCHAIN_FILE conan_toolchain.cmake)

# Terminal executable
add_executable(piecutter PRIVATE PieCutter.cpp main.cpp)

# Test executable
enable_testing()

add_executable(piecutter_test private PieCutter.cpp PieCutterTest.cpp)
target_link_libraries(piecutter_test GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(hello_test)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
