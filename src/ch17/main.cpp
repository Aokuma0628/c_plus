#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <limits>
#include <iterator>
#include <algorithm>

int main() {
  auto f = [](auto x) { std::cout << x << std::endl; };

  f(1);
  f(123.456);
  f("abc");
  f(true);

  [](auto x){ std::cout << x << std::endl; }("式中の呼び出し");

  auto fv = [] { std::cout << "ヤッホー" << std::endl; };
  fv();

  auto f2 = []() -> int { return 123; };
  std::cout << f2() << std::endl;

  auto i = 123;
  [=]() { std::cout << i << std::endl; } ();

  [&]() {i++;} ();
  std::cout << i << std::endl;

  return 0;
}