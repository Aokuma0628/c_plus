#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <limits>
#include <iterator>
#include <algorithm>
#include <array>
#include <cstring>


int main() {
  void *p = NULL;
  void *p2 = NULL;

  try {
    p = ::operator new(4);
    p2 = new int{128};
  }
  catch (std::bad_alloc e) {
    (void)e;
    return 0;
  }
  int *i = (int*)p;
  *i = 123;
  int *arr = (int*)p2;
  arr[0] = 123;

  ::operator delete (p);
  std::cout << *i << " " << arr[0] << std::endl;
  delete p2;

  return 0;
}