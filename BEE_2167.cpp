#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int prev, curr;
  cin >> prev;

  int ans = 0;

  for (int i = 2; i <= n; i++) {
    cin >> curr;

    if (curr < prev && ans == 0) {
      ans = i;
    }

    prev = curr;
  }

  cout << ans << endl;

  return 0;
}