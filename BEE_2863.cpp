#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int n;

  while (cin >> n) {
    double t, mn = 100.0;

    for (int i = 0; i < n; i++) {
      cin >> t;

      if (t < mn)
        mn = t;
    }

    cout << fixed << setprecision(2) << mn << endl;
  }

  return 0;
}