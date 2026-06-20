#include <iostream>
using namespace std;

int main() {
  int n;

  while (cin >> n && n != 0) {
    int a[n];

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int max1 = 0, max2 = 0;

    for (int i = 1; i < n; i++) {
      if (a[i] > a[max1]) {
        max2 = max1;
        max1 = i;
      } else if (a[i] > a[max2] || max1 == max2) {
        max2 = i;
      }
    }

    cout << max2 + 1 << endl;
  }

  return 0;
}