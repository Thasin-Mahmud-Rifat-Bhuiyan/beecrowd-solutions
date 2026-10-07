#include <bits/stdc++.h>
using namespace std;

vector<int> primes;

void generatePrimes() {
  for (int x = 2; primes.size() < 3501; x++) {
    bool ok = true;

    for (int d = 2; d * d <= x; d++) {
      if (x % d == 0) {
        ok = false;
        break;
      }
    }

    if (ok)
      primes.push_back(x);
  }
}

int solve(int n) {
  int ans = 0;

  for (int k = 2; k <= n; k++) {
    int m = primes[n - k];
    ans = (ans + m) % k;
  }

  return ans + 1;
}

int main() {
  generatePrimes();

  int n;

  while (cin >> n && n != 0) {
    cout << solve(n) << '\n';
  }

  return 0;
}