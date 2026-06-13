#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double L, C, R1, R2;

  while (true) {
    cin >> L >> C >> R1 >> R2;
    if (L == 0 && C == 0 && R1 == 0 && R2 == 0)
      break;

    if (L < C)
      swap(L, C);

    if ((2 * R1 > L) || (2 * R1 > C) || (2 * R2 > L) || (2 * R2 > C)) {
      cout << "N" << endl;
      continue;
    }

    double minDist = R1 + R2;

    double dx = L - (R1 + R2);
    double dy = C - (R1 + R2);
    double maxDist = sqrt(dx * dx + dy * dy);

    if (maxDist >= minDist) {
      cout << "S" << endl;
    } else {
      cout << "N" << endl;
    }
  }

  return 0;
}
