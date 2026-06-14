#include <cmath>
#include <iostream>

using namespace std;

int main() {

  int R1, X1, Y1, R2, X2, Y2;

  while (cin >> R1 >> X1 >> Y1 >> R2 >> X2 >> Y2) {

    double d = sqrt((X1 - X2) * (X1 - X2) + (Y1 - Y2) * (Y1 - Y2));

    if (d + R2 <= R1)
      cout << "RICO" << endl;
    else
      cout << "MORTO" << endl;
  }

  return 0;
}