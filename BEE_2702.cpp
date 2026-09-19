#include <iostream>
using namespace std;

int main() {
  int Ca, Ba, Pa;
  int Cr, Br, Pr;

  cin >> Ca >> Ba >> Pa;
  cin >> Cr >> Br >> Pr;

  int ans = 0;

  if (Cr > Ca)
    ans += Cr - Ca;
  if (Br > Ba)
    ans += Br - Ba;
  if (Pr > Pa)
    ans += Pr - Pa;

  cout << ans << '\n';

  return 0;
}