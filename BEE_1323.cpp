
#include <iostream>
using namespace std;

int main() {
  int N;
  while (cin >> N && N != 0) {
    long long ans = 0;

    for (int i = 1; i <= N; i++) {
      ans += 1LL * i * i;
    }

    cout << ans << '\n';
  }

  return 0;
}
