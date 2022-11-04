#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {
  auto a = 1;
  a = 1 + 2;

  string str = "ssss\n";
  cout << str + " world";

  char tmp[24] = { 0 };

  // ラムダ式関数
  auto print = [](auto x) {
    cout << x << "\n"s;
  };

  sprintf(tmp, "%d %d", 1, 2);
  printf("%s\n", str.c_str());

  print(tmp);

  print(123);
  print("hello");
  print(12.3);



  return 0;
}