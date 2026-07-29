#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  char op;
  cin >> op;

  double m[12][12];
  double sum = 0;
  int count = 0;

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> m[i][j];

      if (j < i && j < 11 - i) {
        sum += m[i][j];
        count++;
      }
    }
  }

  if (op == 'S')
    cout << fixed << setprecision(1) << sum << endl;
  else
    cout << fixed << setprecision(1) << sum / count << endl;

  return 0;
}