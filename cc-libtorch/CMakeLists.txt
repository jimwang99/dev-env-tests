cmake_minimum_required(VERSION 3.14.0)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(test LANGUAGES CXX VERSION 0.1.0)

set(CMAKE_FIND_DEBUG_MODE 1)

################################################################

enable_testing()
find_package(GTest CONFIG  REQUIRED)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GLOG REQUIRED IMPORTED_TARGET libglog)

set(Torch_DIR /home/codespace/libtorch/share/cmake/Torch)
find_package(Torch CONFIG REQUIRED)

add_executable(main.x main.cc)
target_link_libraries(main.x "${TORCH_LIBRARIES}" PkgConfig::GLOG GTest::gtest GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(main.x)
