#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <limits>
#include <iterator>
#include <algorithm>
#include <array>

template <typename T>
void func(T x) {
  std::cout << x << " " << typeid(x).name() << std::endl;
}

int main() {

  func(1);
  func(1.2f);
  func(1.5555);
  func("aaa");

  return 0;
}