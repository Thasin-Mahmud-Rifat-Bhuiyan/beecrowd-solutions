#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  while (N--) {
    int QT, S;
    cin >> QT >> S;

    int winner = 1;
    int guess, diff;

    cin >> guess;
    diff = abs(S - guess);

    for (int i = 2; i <= QT; i++) {
      cin >> guess;

      if (abs(S - guess) < diff) {
        diff = abs(S - guess);
        winner = i;
      }
    }

    cout << winner << endl;
  }

  return 0;
}