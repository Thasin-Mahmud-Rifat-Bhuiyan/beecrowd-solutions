#include <iostream>
using namespace std;

int main() {
  int n;

  while (cin >> n && n != 0) {
    while (n--) {
      int a, b, c, d, e;
      cin >> a >> b >> c >> d >> e;

      int cnt = 0;
      char ans;

      if (a <= 127) {
        cnt++;
        ans = 'A';
      }
      if (b <= 127) {
        cnt++;
        ans = 'B';
      }
      if (c <= 127) {
        cnt++;
        ans = 'C';
      }
      if (d <= 127) {
        cnt++;
        ans = 'D';
      }
      if (e <= 127) {
        cnt++;
        ans = 'E';
      }

      if (cnt == 1)
        cout << ans << endl;
      else
        cout << "*" << endl;
    }
  }

  return 0;
}