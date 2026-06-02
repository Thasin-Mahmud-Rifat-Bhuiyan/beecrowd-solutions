#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double A, B, C;
  double R1, R2, delta;

  cin >> A >> B >> C;

  delta = (B * B) - (4 * A * C);

  if (A == 0 || delta < 0) {
    cout << "Impossivel calcular" << endl;
  } else {
    R1 = (-B + sqrt(delta)) / (2 * A);
    R2 = (-B - sqrt(delta)) / (2 * A);

    cout << fixed << setprecision(5);
    cout << "R1 = " << R1 << endl;
    cout << "R2 = " << R2 << endl;
  }

  return 0;
}