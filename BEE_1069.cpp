
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  cin.ignore();

  while (N--) {
    string s;
    getline(cin, s);

    int open = 0, diamonds = 0;

    for (char c : s) {
      if (c == '<') {
        open++;
      } else if (c == '>' && open > 0) {
        open--;
        diamonds++;
      }
    }

    cout << diamonds << '\n';
  }

  return 0;
}
