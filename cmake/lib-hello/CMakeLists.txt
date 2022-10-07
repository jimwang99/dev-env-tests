add_library(lib_hello hello.cc)
target_include_directories(lib_hello PUBLIC $(CMAKE_CURRENT_SOURCE_DIR))