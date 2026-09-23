#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int ans = 0;

  for (int i = 0; i < N; i++) {
    int S;
    cin >> S;

    ans += (S / 3) * 3;
  }

  cout << ans << '\n';

  return 0;
}