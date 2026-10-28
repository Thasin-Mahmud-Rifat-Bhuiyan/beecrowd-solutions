
#include <bits/stdc++.h>
using namespace std;

bool valid(int n) {
  bool seen[10] = {};

  while (n > 0) {
    int digit = n % 10;

    if (seen[digit]) {
      return false;
    }

    seen[digit] = true;
    n /= 10;
  }

  return true;
}

int main() {
  int N, M;

  while (cin >> N >> M) {
    int count = 0;

    for (int i = N; i <= M; i++) {
      if (valid(i)) {
        count++;
      }
    }

    cout << count << '\n';
  }

  return 0;
}
