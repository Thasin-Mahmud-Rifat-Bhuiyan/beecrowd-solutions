#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int C;
  char T;

  cin >> C;
  cin >> T;

  double a[12][12];
  double sum = 0;

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < 12; i++) {
    sum += a[i][C];
  }

  if (T == 'S')
    cout << fixed << setprecision(1) << sum << endl;
  else
    cout << fixed << setprecision(1) << sum / 12.0 << endl;

  return 0;
}