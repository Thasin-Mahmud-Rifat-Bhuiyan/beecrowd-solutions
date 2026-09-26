#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;

  while (getline(cin, s)) {
    int words = 0;
    int total = 0;

    stringstream ss(s);
    string token;

    while (ss >> token) {
      bool valid = true;
      int len = token.size();

      if (token.back() == '.') {
        len--;
      }

      if (len <= 0) {
        valid = false;
      }

      for (int i = 0; i < len; i++) {
        if (!isalpha(token[i])) {
          valid = false;
          break;
        }
      }

      if (valid && (token.size() == len || token.back() == '.')) {
        words++;
        total += len;
      }
    }

    int avg = (words == 0) ? 0 : total / words;

    if (avg <= 3)
      cout << 250 << '\n';
    else if (avg <= 5)
      cout << 500 << '\n';
    else
      cout << 1000 << '\n';
  }

  return 0;
}