#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;

  while (cin >> s) {
    int plus = s.find('+');
    int equal = s.find('=');

    string r = s.substr(0, plus);
    string l = s.substr(plus + 1, equal - plus - 1);
    string j = s.substr(equal + 1);

    if (j == "J") {
      cout << stoi(r) + stoi(l) << '\n';
    } else if (l == "L") {
      cout << stoi(j) - stoi(r) << '\n';
    } else {
      cout << stoi(j) - stoi(l) << '\n';
    }
  }

  return 0;
}