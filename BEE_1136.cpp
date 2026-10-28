
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, B;

  while (cin >> N >> B && (N || B)) {
    vector<bool> present(N + 1, false);
    vector<int> balls(B);

    for (int i = 0; i < B; i++) {
      cin >> balls[i];
      present[balls[i]] = true;
    }

    vector<bool> possible(N + 1, false);

    for (int i = 0; i < B; i++) {
      for (int j = i; j < B; j++) {
        possible[abs(balls[i] - balls[j])] = true;
      }
    }

    bool ok = true;

    for (int i = 0; i <= N; i++) {
      if (!possible[i]) {
        ok = false;
        break;
      }
    }

    cout << (ok ? 'Y' : 'N') << '\n';
  }

  return 0;
}
