#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int L;
  char T;

  cin >> L;
  cin >> T;

  double a[12][12];
  double sum = 0;

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> a[i][j];
    }
  }

  for (int j = 0; j < 12; j++) {
    sum += a[L][j];
  }

  if (T == 'S')
    cout << fixed << setprecision(1) << sum << endl;
  else
    cout << fixed << setprecision(1) << sum / 12.0 << endl;

  return 0;
}