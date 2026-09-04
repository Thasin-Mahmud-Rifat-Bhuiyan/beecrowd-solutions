#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int a[1005][1005];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> a[i][j];

  for (int i = 1; i < n - 1; i++) {
    for (int j = 1; j < m - 1; j++) {
      if (a[i][j] != 42)
        continue;

      bool ok = true;

      for (int x = i - 1; x <= i + 1; x++) {
        for (int y = j - 1; y <= j + 1; y++) {
          if (x == i && y == j)
            continue;

          if (a[x][y] != 7)
            ok = false;
        }
      }

      if (ok) {
        cout << i + 1 << " " << j + 1 << endl;
        return 0;
      }
    }
  }

  cout << "0 0" << endl;

  return 0;
}