#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string a, b;

  while (getline(cin, a) && getline(cin, b)) {
    int n = a.size();
    int m = b.size();
    int ans = 0;

    int dp[51][51] = {};

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        if (a[i - 1] == b[j - 1]) {
          dp[i][j] = dp[i - 1][j - 1] + 1;
          ans = max(ans, dp[i][j]);
        }
      }
    }

    cout << ans << endl;
  }

  return 0;
}