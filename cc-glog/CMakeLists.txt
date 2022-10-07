cmake_minimum_required(VERSION 3.14.0)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(test LANGUAGES CXX VERSION 0.1.0)

set(CMAKE_FIND_DEBUG_MODE 1)

################################################################

find_package(PkgConfig REQUIRED)
pkg_check_modules(GLOG REQUIRED IMPORTED_TARGET libglog)

add_executable(main.x main.cc)
target_link_libraries(main.x PkgConfig::GLOG)

add_custom_target(run ./main.x)