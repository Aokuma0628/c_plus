#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <limits>

namespace ns {
  int b{};
  void f();
  int fc() { return 0; }
  int a {};
}

namespace ab {
  int aaa = 1;
}

int x = 123;

// using namespace std;

int main() {
  //　コンパイルエラーにならないが、下記の変数はすべて予約語
  int _a = 1;
  int _A = 2;
  int __b = 3;

  std::cout << _a << std::endl;
  std::cout << _A << std::endl;
  std::cout << __b << std::endl;

  std::cout << ns::fc() << std::endl;
  std::cout << ab::aaa << std::endl;
  std::cout << ::x << std::endl;

  using Number = int;
  Number xyz = 123456;

  std::cout << xyz << std::endl;

  return 0;
}