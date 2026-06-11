#include <iostream>
using namespace std;

int main() {
  int n, tc = 1;

  while (cin >> n) {
    int total = 1;

    for (int i = 1; i <= n; i++) {
      total += i;
    }

    if (total == 1)
      cout << "Caso " << tc << ": " << total << " numero" << endl;
    else
      cout << "Caso " << tc << ": " << total << " numeros" << endl;

    cout << "0";

    for (int i = 1; i <= n; i++) {
      for (int j = 0; j < i; j++) {
        cout << " " << i;
      }
    }

    cout << endl << endl;
    tc++;
  }

  return 0;
}