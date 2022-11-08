#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <limits>
#include <iterator>


template <typename T> 
auto output_all(T first, T end) {
  std::cout << __func__ << std::endl;
  for (auto iter = first; iter != end; ++iter) {
    std::cout << *iter << std::endl;
  }
}

int main() {
  std::vector<int> v = { 1,3,5,7,9 };
  std::vector<float> vf = { 1.1,3.3,5.5,7.7,9.9 };

  std::istream_iterator<int> first(std::cin), last;

  auto i = std::begin(v);
  auto e = std::end(v);

  // std::cout << *(i + 1) << std::endl;
  // std::cout << *(e - 1) << std::endl;

  output_all(i, e);
  output_all(std::begin(vf), std::end(vf));
  output_all(first, last);

  return 0;
}