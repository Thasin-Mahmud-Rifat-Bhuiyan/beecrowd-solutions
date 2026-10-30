
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D;

  while (cin >> N >> D && (N || D)) {
    vector<int> attended(N, 1);

    for (int i = 0; i < D; i++) {
      for (int j = 0; j < N; j++) {
        int x;
        cin >> x;

        if (x == 0) {
          attended[j] = 0;
        }
      }
    }

    bool found = false;

    for (int x : attended) {
      if (x == 1) {
        found = true;
        break;
      }
    }

    cout << (found ? "yes" : "no") << '\n';
  }

  return 0;
}
