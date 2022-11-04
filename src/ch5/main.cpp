#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
  string a = "dog"s;
  string b = "cat"s;
  string c = "dogdog"s;

  bool test = 123;

  if (a == b) {
    cout << "a=b\n";
  }
  else if (a == c) {
    cout << "a=c\n";
  }
  else {
    cout << "not same\n";
  }

  cout << test << "\n"s; // print "1"

  cout << test + 10 << "\n"s;


  return 0;
}