
#include <iostream>
using namespace std;

int main() {
  long long dp[41];

  dp[1] = 1;
  dp[2] = 2;

  for (int i = 3; i <= 40; i++) {
    dp[i] = dp[i - 1] + dp[i - 2];
  }

  int N;

  while (cin >> N && N != 0) {
    cout << dp[N] << '\n';
  }

  return 0;
}
