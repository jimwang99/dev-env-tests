cmake_minimum_required(VERSION 3.14.0)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(test LANGUAGES CXX VERSION 0.1.0)

set(CMAKE_FIND_DEBUG_MODE 1)

################################################################

set(Torch_DIR /home/codespace/libtorch/share/cmake/Torch)
find_package(Torch CONFIG REQUIRED)

add_executable(main.x main.cc)
target_link_libraries(main.x "${TORCH_LIBRARIES}")
