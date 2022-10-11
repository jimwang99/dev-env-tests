#include <iostream>

#include "lib-hello/hello.h"
#include "lib-world/world.h"

int main() {
  // print "hello world!"
  std::cout << hello() << " " << world() << "!" << std::endl;
}