#include <cassert>
#include <iostream>

#include "solution.h"

void TestFirstBadVersion() {
  Solution s;

  Solution::FirstBadVersion = 2;
  assert(2 == s.firstBadVersion(5));
  assert(2 == s.firstBadVersion(3));

  Solution::FirstBadVersion = 1;
  assert(1 == s.firstBadVersion(5));
  assert(1 == s.firstBadVersion(3));
  assert(1 == s.firstBadVersion(1));

  Solution::FirstBadVersion = 1702766719;
  assert(1702766719 == s.firstBadVersion(2126753390));
}

int main() {
  TestFirstBadVersion();
  std::cout << "Ok!" << std::endl;
  return 0;
}
