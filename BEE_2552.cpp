#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, M;

  while (cin >> N >> M) {
    vector<vector<int>> a(N, vector<int>(M));

    for (int i = 0; i < N; i++)
      for (int j = 0; j < M; j++)
        cin >> a[i][j];

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        if (a[i][j] == 1) {
          cout << 9;
        } else {
          int cnt = 0;

          if (i > 0 && a[i - 1][j] == 1)
            cnt++;
          if (i + 1 < N && a[i + 1][j] == 1)
            cnt++;
          if (j > 0 && a[i][j - 1] == 1)
            cnt++;
          if (j + 1 < M && a[i][j + 1] == 1)
            cnt++;

          cout << cnt;
        }
      }
      cout << '\n';
    }
  }

  return 0;
}