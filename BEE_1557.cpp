#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int n;

  while (cin >> n && n != 0) {
    int a[15][15];
    int biggest = 1;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        a[i][j] = 1 << (i + j);
        biggest = a[i][j];
      }
    }

    int width = 0;
    int temp = biggest;

    while (temp > 0) {
      width++;
      temp /= 10;
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (j > 0)
          cout << " ";

        cout << setw(width) << a[i][j];
      }
      cout << endl;
    }

    cout << endl;
  }

  return 0;
}