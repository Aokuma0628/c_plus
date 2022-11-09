#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <limits>
#include <iterator>
#include <algorithm>
#include <array>
#include <cstring>

struct STR {
  int data = 0;

  void set(int n) {
    STR *p = this;
    p->data = n;
  }
};

int main() {
  STR str;
  STR *p = NULL;

  str.set(12);
  std::cout << str.data << std::endl;
  std::cout << sizeof(p) << std::endl;

  std::memset(&str, 0, sizeof(STR));
  std::cout << str.data << std::endl;

  return 0;
}