
#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, C;

  while (cin >> A >> C && (A || C)) {
    int previous = A;
    int total = 0;

    for (int i = 0; i < C; i++) {
      int x;
      cin >> x;

      if (x < previous) {
        total += previous - x;
      }

      previous = x;
    }

    cout << total << '\n';
  }

  return 0;
}
