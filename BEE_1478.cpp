#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int n;

  while (cin >> n && n != 0) {
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n; j++) {
        if (j > 1)
          cout << " ";

        cout << setw(3) << abs(i - j) + 1;
      }
      cout << endl;
    }

    cout << endl;
  }

  return 0;
}