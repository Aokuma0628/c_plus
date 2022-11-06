#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<int> vi;
  vector<char> vc;

  for (int i = 0; i < 10; i++) {
    vi.push_back(i);
    vc.push_back('a' + i);
    cout << vi.at(i) << " " << vc.at(i) << endl;
  }

  return 0;
}