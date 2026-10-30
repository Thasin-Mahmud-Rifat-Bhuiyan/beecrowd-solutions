
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;

  while (cin >> N) {
    vector<int> a(N);
    long long sum = 0;

    for (int i = 0; i < N; i++) {
      cin >> a[i];
      sum += a[i];
    }

    if (sum % N != 0) {
      cout << -1 << '\n';
      continue;
    }

    long long avg = sum / N;
    long long moves = 0;

    for (int i = 0; i < N; i++) {
      if (a[i] < avg) {
        moves += avg - a[i];
      }
    }

    cout << moves + 1 << '\n';
  }

  return 0;
}
