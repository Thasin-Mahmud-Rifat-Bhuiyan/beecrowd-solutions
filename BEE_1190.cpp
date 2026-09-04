#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  char op;
  cin >> op;

  double sum = 0;
  int count = 0;

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      double x;
      cin >> x;

      if (j > i && j > 11 - i) {
        sum += x;
        count++;
      }
    }
  }

  if (op == 'M')
    sum /= count;

  cout << fixed << setprecision(1) << sum << endl;

  return 0;
}