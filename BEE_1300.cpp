
#include <bits/stdc++.h>
using namespace std;

int main() {
  bool possible[181] = {};

  for (int t = 0; t < 720; t++) {
    int minute = t % 60;
    int hour = (t / 12) % 60;

    int diff = abs(minute - hour);
    int angle = min(diff * 6, 360 - diff * 6);

    possible[angle] = true;
  }

  int A;
  while (cin >> A) {
    cout << (possible[A] ? 'Y' : 'N') << '\n';
  }

  return 0;
}
