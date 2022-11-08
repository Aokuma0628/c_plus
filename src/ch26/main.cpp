#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <limits>
#include <iterator>
#include <algorithm>
#include <array>

int main() {
  std::cout << "Don't type 0." << std::endl;

  int input = 0;
  std::cin >> input;

  try {
    if (input == 0) throw 123;
    std::cout << "Success" << std::endl;
  }
  catch (int e) {
    std::cout << "ERR: " << e << std::endl;
  }

  return 0;
}