cmake_minimum_required(VERSION 3.14.0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(test LANGUAGES CXX VERSION 0.1.0)

set(CMAKE_FIND_DEBUG_MODE 1)

################################################################

enable_testing()
find_package(GTest CONFIG  REQUIRED)

add_executable(main.x main.cc)
target_link_libraries(main.x GTest::gtest GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(main.x)
