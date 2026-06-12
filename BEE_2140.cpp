#include <iostream>
using namespace std;

int main() {
  int N, M;
  int bills[] = {2, 5, 10, 20, 50, 100};

  while (cin >> N >> M) {
    if (N == 0 && M == 0)
      break;

    int change = M - N;
    bool possible = false;

    for (int i = 0; i < 6; i++) {
      for (int j = i + 1; j < 6; j++) {
        if (bills[i] + bills[j] == change) {
          possible = true;
        }
      }
    }

    if (possible)
      cout << "possible" << endl;
    else
      cout << "impossible" << endl;
  }

  return 0;
}