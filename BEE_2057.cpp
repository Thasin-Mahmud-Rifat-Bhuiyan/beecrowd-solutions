#include <iostream>
using namespace std;

int main() {
  int s, t, f;
  cin >> s >> t >> f;

  int ans = (s + t + f) % 24;

  if (ans < 0)
    ans += 24;

  cout << ans << endl;

  return 0;
}