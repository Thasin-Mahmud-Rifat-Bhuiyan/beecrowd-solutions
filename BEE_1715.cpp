#include <iostream>
using namespace std;

int main() {
  int n, m;

  while (cin >> n >> m) {
    int ans = 0;

    for (int i = 0; i < n; i++) {
      bool scoredAll = true;

      for (int j = 0; j < m; j++) {
        int x;
        cin >> x;

        if (x == 0)
          scoredAll = false;
      }

      if (scoredAll)
        ans++;
    }

    cout << ans << endl;
  }

  return 0;
}