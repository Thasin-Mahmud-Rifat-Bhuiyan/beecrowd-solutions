#include <iostream>
using namespace std;

int main() {
  int n;

  while (cin >> n) {
    bool prime = true;

    if (n < 2)
      prime = false;

    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        prime = false;
        break;
      }
    }

    if (!prime) {
      cout << "Nada" << endl;
      continue;
    }

    bool super = true;
    int temp = n;

    while (temp > 0) {
      int d = temp % 10;

      if (d != 2 && d != 3 && d != 5 && d != 7) {
        super = false;
        break;
      }

      temp /= 10;
    }

    if (super)
      cout << "Super" << endl;
    else
      cout << "Primo" << endl;
  }

  return 0;
}