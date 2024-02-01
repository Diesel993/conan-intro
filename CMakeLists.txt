cmake_minimum_required(VERSION 3.22)

project(piecutter)

set(CMAKE_TOOLCHAIN_FILE conan_toolchain.cmake)

find_package(units)
find_package(GTest)

# Terminal executable
add_executable(piecutter PieCutter.cpp main.cpp)
target_link_libraries(piecutter units::units)

# Test executable
enable_testing()

add_executable(piecutter_test PieCutter.cpp PieCutterTest.cpp)
target_link_libraries(piecutter_test GTest::gtest_main units::units)

include(GoogleTest)
gtest_discover_tests(piecutter_test)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
