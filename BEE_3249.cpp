#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int wins = 0;

  while (n--) {
    string s;
    cin >> s;

    if (s.find("CD") == string::npos)
      wins++;
  }

  cout << wins << '\n';

  return 0;
}