#include <cmath>
#include <iostream>

using namespace std;

int main() {

  int R, W, L;
  int tc = 1;

  while (cin >> R && R != 0) {

    cin >> W >> L;

    double diagonal = sqrt(W * W + L * L);

    if (diagonal <= 2 * R)
      cout << "Pizza " << tc << " fits on the table." << endl;
    else
      cout << "Pizza " << tc << " does not fit on the table." << endl;

    tc++;
  }

  return 0;
}