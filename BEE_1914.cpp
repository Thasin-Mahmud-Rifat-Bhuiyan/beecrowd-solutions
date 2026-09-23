#include <bits/stdc++.h>
using namespace std;

int main() {
  int QT;
  cin >> QT;

  while (QT--) {
    string player1, choice1, player2, choice2;
    cin >> player1 >> choice1 >> player2 >> choice2;

    long long N, M;
    cin >> N >> M;

    long long sum = N + M;

    if (sum % 2 == 0) {
      if (choice1 == "PAR")
        cout << player1 << '\n';
      else
        cout << player2 << '\n';
    } else {
      if (choice1 == "IMPAR")
        cout << player1 << '\n';
      else
        cout << player2 << '\n';
    }
  }

  return 0;
}