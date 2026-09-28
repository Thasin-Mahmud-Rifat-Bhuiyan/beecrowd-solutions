#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int r = a % b;

  if (r < 0)
    r += abs(b);

  int q = (a - r) / b;

  cout << q << " " << r << '\n';

  return 0;
}