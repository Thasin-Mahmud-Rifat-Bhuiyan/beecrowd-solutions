
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, S;

  while (cin >> N >> M >> S && (N || M || S)) {
    vector<string> grid(N);
    int r = 0, c = 0, dir = 0;

    for (int i = 0; i < N; i++) {
      cin >> grid[i];

      for (int j = 0; j < M; j++) {
        if (grid[i][j] == 'N') {
          r = i;
          c = j;
          dir = 0;
        } else if (grid[i][j] == 'L') {
          r = i;
          c = j;
          dir = 1;
        } else if (grid[i][j] == 'S') {
          r = i;
          c = j;
          dir = 2;
        } else if (grid[i][j] == 'O') {
          r = i;
          c = j;
          dir = 3;
        }
      }
    }

    string instructions;
    cin >> instructions;

    int stickers = 0;
    int dr[] = {-1, 0, 1, 0};
    int dc[] = {0, 1, 0, -1};

    for (char ch : instructions) {
      if (ch == 'D') {
        dir = (dir + 1) % 4;
      } else if (ch == 'E') {
        dir = (dir + 3) % 4;
      } else if (ch == 'F') {
        int nr = r + dr[dir];
        int nc = c + dc[dir];

        if (nr >= 0 && nr < N && nc >= 0 && nc < M && grid[nr][nc] != '#') {
          r = nr;
          c = nc;

          if (grid[r][c] == '*') {
            stickers++;
            grid[r][c] = '.';
          }
        }
      }
    }

    cout << stickers << '\n';
  }

  return 0;
}
