#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  int n;

  while (cin >> s) {
    cin >> n;

    while (n--) {
      int x;
      cin >> x;
      cout << s[x - 1];
    }

    cout << endl;
  }

  return 0;
}