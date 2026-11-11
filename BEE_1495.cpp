
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, G;

  while (cin >> N >> G) {
    vector<int> losses;
    int points = 0, draws = 0;

    for (int i = 0; i < N; i++) {
      int S, R;
      cin >> S >> R;

      if (S > R) {
        points += 3;
      } else if (S == R) {
        points++;
        draws++;
      } else {
        losses.push_back(R - S);
      }
    }

    int used = min(G, draws);
    points += used * 2;
    G -= used;

    sort(losses.begin(), losses.end());

    for (int diff : losses) {
      if (G >= diff + 1) {
        G -= diff + 1;
        points += 3;
      } else if (G >= diff) {
        G -= diff;
        points++;
      } else {
        break;
      }
    }

    cout << points << '\n';
  }

  return 0;
}
