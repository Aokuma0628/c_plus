#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <limits>
#include <iterator>


void f (int& x) {
  x = 123;
}

int main() {
  int a = 1;

  int& ref = a;

  ref = 3;
  f(a);

  std::cout << a << std::endl;


  return 0;
}