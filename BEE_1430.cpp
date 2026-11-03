
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;

  while (cin >> s && s != "*") {
    int count = 0;
    int duration = 0;

    for (int i = 1; i < (int)s.size(); i++) {
      if (s[i] == '/') {
        if (duration == 64) {
          count++;
        }
        duration = 0;
      } else {
        switch (s[i]) {
        case 'W':
          duration += 64;
          break;
        case 'H':
          duration += 32;
          break;
        case 'Q':
          duration += 16;
          break;
        case 'E':
          duration += 8;
          break;
        case 'S':
          duration += 4;
          break;
        case 'T':
          duration += 2;
          break;
        case 'X':
          duration += 1;
          break;
        }
      }
    }

    cout << count << '\n';
  }

  return 0;
}
