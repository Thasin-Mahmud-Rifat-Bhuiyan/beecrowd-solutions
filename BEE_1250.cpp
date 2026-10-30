
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  while (N--) {
    int S;
    cin >> S;

    vector<int> height(S);

    for (int i = 0; i < S; i++) {
      cin >> height[i];
    }

    string jumps;
    cin >> jumps;

    int hits = 0;

    for (int i = 0; i < S; i++) {
      if (jumps[i] == 'S' && height[i] <= 2) {
        hits++;
      } else if (jumps[i] == 'J' && height[i] > 2) {
        hits++;
      }
    }

    cout << hits << '\n';
  }

  return 0;
}
