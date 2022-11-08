#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <limits>
#include <iterator>
#include <algorithm>

struct cls {
  int data;
  int data2;
  
  cls(int val, int val2 = 222) {
    data = val;
    data2 = val2;
  }

  ~cls() {
    std::cout << "destruct" << std::endl;
  }
};

int main() {
  cls c = {54};

  std::cout << c.data << " " << c.data2 << std::endl;

  return 0;
}