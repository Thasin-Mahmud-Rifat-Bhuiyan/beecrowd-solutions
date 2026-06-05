#include <iomanip>
#include <iostream>

using namespace std;

int main() {

  for (int i = 0; i <= 20; i++) {

    double I = i / 10.0;

    if (i % 2 == 1)
      continue;

    I = i / 10.0;

    for (int j = 1; j <= 3; j++) {

      double J = I + j;

      if (i == 0 || i == 10 || i == 20)
        cout << "I=" << (int)I << " J=" << (int)J << endl;
      else
        cout << fixed << setprecision(1) << "I=" << I << " J=" << J << endl;
    }
  }

  return 0;
}