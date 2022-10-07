#include <iostream>

#include "hello.h"
#include "world.h"

int main() {
  // print "hello world!"
  std::cout << hello() << " " << world() << "!" << std::endl;
}