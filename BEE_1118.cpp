#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double x, y;

  while (true) {
    int valid = 0;
    double sum = 0;

    while (valid < 2) {
      double n;
      cin >> n;

      if (n >= 0 && n <= 10) {
        sum += n;
        valid++;
      } else {
        cout << "nota invalida" << endl;
      }
    }

    cout << fixed << setprecision(2);
    cout << "media = " << sum / 2 << endl;

    int op;

    do {
      cout << "novo calculo (1-sim 2-nao)" << endl;
      cin >> op;
    } while (op != 1 && op != 2);

    if (op == 2)
      break;
  }

  return 0;
}