//
// Created by Антон Шмидт on 06.12.2021.
//

#include "solution.h"
#include <cstdint>

using namespace std;

bool isBadVersion(int version) {
  return Solution::FirstBadVersion <= version;
}

int Solution::firstBadVersion(int n) {
  int32_t upper = n;
  int32_t lower = 1;
  while (lower <= upper) {
//    int32_t mid = (lower + upper) / 2;
    int32_t mid = lower + (upper - lower) / 2;
    if (isBadVersion(mid)) {
      if (!isBadVersion(mid - 1)) {
        return mid;
      }
      upper = mid - 1;
    } else {
      lower = mid + 1;
    }
  }

  return 1;
}
