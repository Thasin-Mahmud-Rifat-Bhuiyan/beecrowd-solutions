#include <bits/stdc++.h>
using namespace std;

bool works(int n, int m) {
  vector<int> regions;

  for (int i = 1; i <= n; i++)
    regions.push_back(i);

  int pos = 0;
  regions.erase(regions.begin());

  while (regions.size() > 1) {
    pos = (pos + m - 1) % regions.size();

    if (regions[pos] == 13)
      return false;

    regions.erase(regions.begin() + pos);
  }

  return regions[0] == 13;
}

int main() {
  int n;

  while (cin >> n && n != 0) {
    int m = 1;

    while (!works(n, m))
      m++;

    cout << m << '\n';
  }

  return 0;
}