
#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;

  while (cin >> A >> B && (A || B)) {
    set<int> alice, betty;
    int x;

    for (int i = 0; i < A; i++) {
      cin >> x;
      alice.insert(x);
    }

    for (int i = 0; i < B; i++) {
      cin >> x;
      betty.insert(x);
    }

    int common = 0;

    for (int card : alice) {
      if (betty.count(card)) {
        common++;
      }
    }

    cout << min((int)alice.size() - common, (int)betty.size() - common) << '\n';
  }

  return 0;
}
