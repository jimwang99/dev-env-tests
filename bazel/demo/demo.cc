#include <iostream>

#include <glog/logging.h>

#include "lib-hello/hello.h"
#include "lib-world/world.h"

int main(int argc, char *argv[]) {
  // Initialize Google’s logging library.
  google::InitGoogleLogging(argv[0]);
  FLAGS_logtostderr = 1;

  // print "hello world!"
  std::cout << hello() << " " << world() << "!" << std::endl;

  LOG(WARNING) << hello();
  LOG(WARNING) << world();
}