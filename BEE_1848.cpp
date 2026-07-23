#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  int sum = 0, cnt = 0;

  while (cnt < 3) {
    cin >> s;

    if (s == "caw") {
      cin >> s; // read the second "caw"
      cout << sum << endl;
      sum = 0;
      cnt++;
    } else {
      if (s[0] == '*')
        sum += 4;
      if (s[1] == '*')
        sum += 2;
      if (s[2] == '*')
        sum += 1;
    }
  }

  return 0;
}
