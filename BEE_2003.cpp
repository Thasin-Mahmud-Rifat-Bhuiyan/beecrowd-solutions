#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;

  while (cin >> s) {
    int h = (s[0] - '0');
    int m = (s[2] - '0') * 10 + (s[3] - '0');

    int total = h * 60 + m;
    int delay = total + 60 - 480;

    if (delay < 0)
      delay = 0;

    cout << "Atraso maximo: " << delay << '\n';
  }

  return 0;
}