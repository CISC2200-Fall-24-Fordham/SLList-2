#include <cstdlib>
#include <iostream>

int main() {

  // In order to use std::format, we need to add something to our Makefile
  // We changed `-std=c++14` to `-std=c++20` in order to change the c++ standard being used
  // NOTE: Not all compilers support all c++ standards
  // NOTE: The autograder only supports c++11 at the moment

  std::cout << std::format("{} {}!\n", Hello, world);
  return 0;
}
