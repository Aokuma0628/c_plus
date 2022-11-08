#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <limits>
#include <iterator>
#include <algorithm>

struct point {
  int x = 1;
  int y = 2;

  double calc() {
    return (double)x / (double)y;
  }
};

int main() {
  point p = {5,6};

  std::cout << p.x << " " << p.y << std::endl;
  std::cout << p.calc() << std::endl;

  return 0;
}