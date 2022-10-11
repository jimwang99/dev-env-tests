#include <gtest/gtest.h>
#include <string>

#include "lib-world/world.h"

TEST(TestLibWorld, Simple) {
  const auto &s = world();
  EXPECT_NE(s, std::string("hello"));
  EXPECT_STREQ(s.c_str(), "world");
}
