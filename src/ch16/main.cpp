#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <limits>
#include <iterator>
#include <algorithm>


static void print(int x) {
  std::cout << x << std::endl;
}

int main() {
  std::vector<int> v = {1,1,1,2,3,4,5};
  std::vector<int>::iterator b = v.begin();
  std::vector<int>::iterator e = v.end();

  //std::for_each(b, e, print);
  bool all_0 = std::all_of(b, e, [](int x){ return x == 0; });
  bool any_1 = std::any_of(b, e, [](int x){ return x == 1; });
  bool none_0 = std::none_of(b, e, [](int x){ return x == 0; });
  std::cout << all_0 << " " << any_1 << " " << none_0 << std::endl;

  auto pos = std::find(b, e, 6);
  if (pos != e) {
    std::cout << *pos << std::endl;
  }
  pos = std::find_if(b, e, [](int x){ return x % 2 == 0; });
  if (pos != e) {
    std::cout << *pos << std::endl;
  }
  
  auto cnt = std::count(b, e, 1);
  std::cout << cnt << std::endl;

  std::vector<int> des(7);
  std::copy(b, e, des.begin());
  std::cout << "copy" << std::endl;
  std::for_each(des.begin(), des.end(), print);

  std::vector<int> tra(7);
  std::transform(b, e, tra.begin(), [](int x) { return x * 2; });
  std::cout << "transform" << std::endl;
  std::for_each(tra.begin(), tra.end(), print);

  std::fill(tra.begin(), tra.end(), 0);
  std::cout << "fill" << std::endl;
  std::for_each(tra.begin(), tra.end(), print);

  return 0;
}