#include <bits/stdc++.h>
using namespace std;

int main() {
  int NC;
  cin >> NC;

  for (int tc = 1; tc <= NC; tc++) {
    int n, k;
    cin >> n >> k;

    int ans = 0;

    for (int i = 2; i <= n; i++) {
      ans = (ans + k) % i;
    }

    cout << "Case " << tc << ": " << ans + 1 << '\n';
  }

  return 0;
}