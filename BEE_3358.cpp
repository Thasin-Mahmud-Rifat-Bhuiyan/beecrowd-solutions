#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  while (N--) {
    string s;
    cin >> s;

    int cnt = 0;
    bool difficult = false;

    for (char c : s) {
      c = tolower(c);

      if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
        cnt++;

        if (cnt >= 3) {
          difficult = true;
          break;
        }
      } else {
        cnt = 0;
      }
    }

    cout << s << (difficult ? " nao eh facil" : " eh facil") << '\n';
  }

  return 0;
}