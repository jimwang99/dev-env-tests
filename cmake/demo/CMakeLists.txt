add_executable(demo.x demo.cc)
target_link_libraries(demo.x lib_hello lib_world)
add_custom_target(demo ./demo.x)