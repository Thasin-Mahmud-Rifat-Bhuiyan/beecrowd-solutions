#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  while (N--) {
    long long x, y;
    cin >> x >> y;

    long long r = (3 * x) * (3 * x) + y * y;
    long long b = 2 * x * x + (5 * y) * (5 * y);
    long long c = -100 * x + y * y * y;

    if (r > b && r > c)
      cout << "Rafael ganhou\n";
    else if (b > r && b > c)
      cout << "Beto ganhou\n";
    else
      cout << "Carlos ganhou\n";
  }

  return 0;
}