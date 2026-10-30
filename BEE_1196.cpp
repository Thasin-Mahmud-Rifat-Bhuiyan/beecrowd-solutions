
#include <bits/stdc++.h>
using namespace std;

int main() {
  string keyboard = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
  string line;

  while (getline(cin, line)) {
    for (char c : line) {
      if (c == ' ') {
        cout << ' ';
      } else {
        size_t pos = keyboard.find(c);

        if (pos != string::npos && pos > 0) {
          cout << keyboard[pos - 1];
        }
      }
    }

    cout << '\n';
  }

  return 0;
}
