#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int K;
    cin >> K;

    string first, s;
    cin >> first;

    bool same = true;

    for (int i = 1; i < K; i++) {
      cin >> s;
      if (s != first)
        same = false;
    }

    if (same)
      cout << first << '\n';
    else
      cout << "ingles\n";
  }

  return 0;
}