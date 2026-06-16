#include <iostream>
using namespace std;

int main() {
  int par[5], impar[5];
  int p = 0, imp = 0;

  for (int i = 0; i < 15; i++) {
    int x;
    cin >> x;

    if (x % 2 == 0) {
      par[p++] = x;

      if (p == 5) {
        for (int j = 0; j < 5; j++) {
          cout << "par[" << j << "] = " << par[j] << endl;
        }
        p = 0;
      }
    } else {
      impar[imp++] = x;

      if (imp == 5) {
        for (int j = 0; j < 5; j++) {
          cout << "impar[" << j << "] = " << impar[j] << endl;
        }
        imp = 0;
      }
    }
  }

  for (int i = 0; i < imp; i++) {
    cout << "impar[" << i << "] = " << impar[i] << endl;
  }

  for (int i = 0; i < p; i++) {
    cout << "par[" << i << "] = " << par[i] << endl;
  }

  return 0;
}