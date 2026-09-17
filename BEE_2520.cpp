#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int N, M;

  while (cin >> N >> M) {
    vector<vector<int>> a(N, vector<int>(M));
    queue<pair<int, int>> q;
    vector<vector<int>> dist(N, vector<int>(M, -1));

    int sr, sc, tr, tc;

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        cin >> a[i][j];

        if (a[i][j] == 1) {
          sr = i;
          sc = j;
        }

        if (a[i][j] == 2) {
          tr = i;
          tc = j;
        }
      }
    }

    q.push({sr, sc});
    dist[sr][sc] = 0;

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    while (!q.empty()) {
      auto [r, c] = q.front();
      q.pop();

      for (int k = 0; k < 4; k++) {
        int nr = r + dr[k];
        int nc = c + dc[k];

        if (nr >= 0 && nr < N && nc >= 0 && nc < M && dist[nr][nc] == -1) {
          dist[nr][nc] = dist[r][c] + 1;
          q.push({nr, nc});
        }
      }
    }

    cout << dist[tr][tc] << '\n';
  }

  return 0;
}