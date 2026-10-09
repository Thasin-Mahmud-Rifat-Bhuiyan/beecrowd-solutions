#include <iostream>
using namespace std;

int main() {
  int N;

  while (cin >> N) {
    int boots[61][2] = {};

    for (int i = 0; i < N; i++) {
      int M;
      char L;
      cin >> M >> L;

      if (L == 'D')
        boots[M][0]++;
      else
        boots[M][1]++;
    }

    int pairs = 0;

    for (int i = 30; i <= 60; i++) {
      pairs += min(boots[i][0], boots[i][1]);
    }

    cout << pairs << endl;
  }

  return 0;
}