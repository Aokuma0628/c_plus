#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
  double height = 0.0;
  double mass = 0.0;

  cin >> height >> mass;
  cout << fixed;
  cout << "bmi = " << setprecision(2) << mass / (height * height) << endl;

  return 0;
}
