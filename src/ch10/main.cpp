#include <iostream>
#include <string>
#include <vector>
#include <cstdint>


using namespace std;

int main() {
  int binary = 0b101;
  int octal = 0123;
  int hex = 0x12;
  int big = 1'000'000'000;
  int32_t aaa = 0;

  cout << binary << endl;
  cout << octal << endl;
  cout << hex << endl;
  cout << big << endl;

  cout << aaa << endl;

  cout << sizeof(char) << endl;
  cout << sizeof(short) << endl;
  cout << sizeof(int) << endl;
  cout << sizeof(long) << endl;
  cout << sizeof(long long int) << endl;

  return 0;
}