#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  char T;
  cin >> T;

  double a[12][12];
  double sum = 0;
  int cnt = 0;

  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> a[i][j];

      if (i + j > 11) {
        sum += a[i][j];
        cnt++;
      }
    }
  }

  if (T == 'S')
    cout << fixed << setprecision(1) << sum << endl;
  else
    cout << fixed << setprecision(1) << sum / cnt << endl;

  return 0;
}