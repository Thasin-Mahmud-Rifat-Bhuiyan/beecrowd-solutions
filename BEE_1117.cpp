#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double x, sum = 0;
  int count = 0;

  while (count < 2) {
    cin >> x;

    if (x >= 0 && x <= 10) {
      sum += x;
      count++;
    } else {
      cout << "nota invalida" << endl;
    }
  }

  cout << fixed << setprecision(2);
  cout << "media = " << sum / 2.0 << endl;

  return 0;
}