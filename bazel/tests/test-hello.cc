#include <gtest/gtest.h>
#include <string>

#include "lib-hello/hello.h"

TEST(TestLibHello, Simple) {
  const auto &s = hello();
  EXPECT_EQ(s, std::string("hello"));
  EXPECT_STRNE(s.c_str(), "world");
}