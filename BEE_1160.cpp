#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int PA, PB;
    double G1, G2;
    cin >> PA >> PB >> G1 >> G2;

    int years = 0;
    while (PA <= PB && years <= 100) {
      PA += (int)(PA * G1 / 100.0);
      PB += (int)(PB * G2 / 100.0);
      years++;
    }

    if (years > 100)
      cout << "Mais de 1 seculo." << endl;
    else
      cout << years << " anos." << endl;
  }
  return 0;
}
