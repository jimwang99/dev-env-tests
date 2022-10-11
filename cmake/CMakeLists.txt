cmake_minimum_required(VERSION 3.14.0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(cmake LANGUAGES CXX VERSION 0.1.0)

add_subdirectory(lib-hello)
add_subdirectory(lib-world)

add_subdirectory(tests)
add_custom_target(test cd tests && ctest)

add_subdirectory(demo)
add_custom_target(run cd demo && ./demo.x)