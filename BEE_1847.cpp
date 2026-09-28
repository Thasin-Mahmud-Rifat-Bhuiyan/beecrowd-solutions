#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int x = B - A;
  int y = C - B;

  if (x < 0 && y >= 0)
    cout << ":)\n";
  else if (x > 0 && y <= 0)
    cout << ":(\n";
  else if (x > 0 && y > 0)
    cout << (y >= x ? ":)" : ":(") << '\n';
  else if (x < 0 && y < 0)
    cout << (y > x ? ":)" : ":(") << '\n';
  else
    cout << (y > 0 ? ":)" : ":(") << '\n';

  return 0;
}