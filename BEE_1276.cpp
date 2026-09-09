#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;

  while (getline(cin, s)) {
    bool present[26] = {};

    for (char c : s) {
      if (c >= 'a' && c <= 'z')
        present[c - 'a'] = true;
    }

    bool first = true;

    for (int i = 0; i < 26; i++) {
      if (!present[i])
        continue;

      int start = i;

      while (i + 1 < 26 && present[i + 1])
        i++;

      int end = i;

      if (!first)
        cout << ", ";

      cout << char('a' + start) << ":" << char('a' + end);
      first = false;
    }

    cout << endl;
  }

  return 0;
}