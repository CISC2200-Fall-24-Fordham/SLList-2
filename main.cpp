#include <cstdlib>
// We would love to include this library, but gcc12 doesn't support it (only gcc 13+)
// #include <format>
#include <iostream>
#include "SLList.h"

int main() {

  SLList *aList = new SLList(5);
  aList->addFirst(10);
  aList->addFirst(10);

  // TODO: Uncomment and implment addLast
  // aList->addLast(10);

  // TODO: Implement removeDuplicates + Add to header file

  //aList->removeDuplicates();

  // In order to use std::format, we need to add something to our Makefile
  // We changed `-std=c++14` to `-std=c++20` in order to change the c++ standard being used
  // NOTE: Not all compilers support all c++ standards
  // NOTE: The autograder only supports c++11 at the moment
  // std::cout << std::format("List size: {}", aList->size()) << std::endl;
  
  std::cout <<  aList->size() << std::endl;
  return 0;
}
