enable_testing()
find_package(GTest CONFIG REQUIRED)
include(GoogleTest)

add_executable(test_hello.x test_hello.cc)
target_link_libraries(test_hello.x GTest::gtest GTest::gtest_main lib_hello)
gtest_discover_tests(test_hello.x)

add_executable(test_world.x test_world.cc)
target_link_libraries(test_world.x GTest::gtest GTest::gtest_main lib_world)
gtest_discover_tests(test_world.x)
