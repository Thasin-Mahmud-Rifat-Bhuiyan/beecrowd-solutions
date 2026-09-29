#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, Z, L;

  while (cin >> H >> Z >> L) {
    if ((H > Z && H < L) || (H < Z && H > L))
      cout << "huguinho\n";
    else if ((Z > H && Z < L) || (Z < H && Z > L))
      cout << "zezinho\n";
    else
      cout << "luisinho\n";
  }

  return 0;
}