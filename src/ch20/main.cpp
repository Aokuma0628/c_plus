#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <limits>
#include <iterator>
#include <algorithm>
#include <array>

int main() {
  std::array<int, 10> arr;
  int n = 0;

  std::cin >> n;
  std::vector<int> vec(n);

  arr.at(0) = 123;
  // arr[10] = 44;
  // arr.at(10) = 44;

  std::cout << arr.at(0) << std::endl;
  std::cout << arr.size() << " " << vec.size() << std::endl;

  vec.push_back(100);
  std::cout << arr.size() << " " << vec.size() << std::endl;

  return 0;
}