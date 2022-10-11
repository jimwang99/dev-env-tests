#include <iostream>
#include <torch/torch.h>

#include <glog/logging.h>
#include <gtest/gtest.h>

TEST(Tensor, Simple) {
  torch::Tensor tensor = torch::rand({2, 3});
  LOG(INFO) << tensor;
  EXPECT_EQ(tensor.sizes().size(), 2);
  EXPECT_EQ(tensor.sizes()[0], 2);
  EXPECT_EQ(tensor.sizes()[1], 3);
}

int main(int argc, char *argv[]) {
  // glog
  FLAGS_logtostderr = 1;
  google::InitGoogleLogging(argv[0]);

  // gtest
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}