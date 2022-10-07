cmake_minimum_required (VERSION 3.0)
project(test)

set(CMAKE_CXX_STANDARD 14)
find_package(PkgConfig REQUIRED)
pkg_check_modules(SYSC REQUIRED IMPORTED_TARGET systemc)

add_executable(main.x main.cc)
target_link_libraries(main.x PkgConfig::SYSC)

add_custom_target(run ./main.x)