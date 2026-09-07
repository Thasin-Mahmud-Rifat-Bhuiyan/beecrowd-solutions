#include <algorithm>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int n;

  while (cin >> n && n != 0) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        int x = min(min(i, j), min(n - 1 - i, n - 1 - j)) + 1;

        if (j > 0)
          cout << " ";

        cout << setw(3) << x;
      }
      cout << endl;
    }

    cout << endl;
  }

  return 0;
}