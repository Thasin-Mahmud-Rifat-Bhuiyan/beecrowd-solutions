#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  int count = 0;

  for (char c : s) {
    if (c == '1')
      count++;
  }

  cout << s << (count % 2) << endl;

  return 0;
}