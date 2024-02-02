cmake_minimum_required(VERSION 3.22)

project(piecutter)

find_package(units REQUIRED) # Find the units-config.cmake file in the build folder
find_package(GTest) # Find the GTestConfig.cmake file in the build folder

# Terminal executable
add_executable(piecutter PieCutter.cpp main.cpp)
target_link_libraries(piecutter units::units) # Include the units library to the target

# Test executable
enable_testing()

add_executable(piecutter_test PieCutter.cpp PieCutterTest.cpp)
target_link_libraries(piecutter_test GTest::gtest_main units::units) # Include the gtest and units libraries to the test target.

include(GoogleTest)
gtest_discover_tests(piecutter_test) 

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
