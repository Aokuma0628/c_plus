#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
#include <limits>

using namespace std;

int main() {
  float a = 123.456f;
  double b = 123.456;
  long double c = 123.456L;

  double n = numeric_limits<double>::quiet_NaN();

  cout << sizeof(float) << endl;
  cout << sizeof(double) << endl;
  cout << sizeof(long double) << endl;

  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << n << endl;

  cout << "float "s << numeric_limits<float>::digits10 << endl
       << "double "s << numeric_limits<double>::digits10 << endl
       << "long double "s << numeric_limits<long double>::digits10 << endl;

  float e = 123.456;
  float f = 1234.567;

  cout << e << endl;
  cout << f << endl;

  return 0;
}