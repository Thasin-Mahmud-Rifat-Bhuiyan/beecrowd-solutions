#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int x, y;
  cin >> x >> y;

  vector<string> a(y);
  for (int i = 0; i < y; i++)
    cin >> a[i];

  int r = 0, c = 0;
  int dr = 0, dc = 1;

  vector<vector<bool>> visited(y, vector<bool>(x, false));

  while (true) {
    if (r < 0 || r >= y || c < 0 || c >= x) {
      cout << "!\n";
      break;
    }

    if (a[r][c] == '*') {
      cout << "*\n";
      break;
    }

    if (visited[r][c]) {
      cout << "!\n";
      break;
    }

    visited[r][c] = true;

    if (a[r][c] == '>') {
      dr = 0;
      dc = 1;
    } else if (a[r][c] == '<') {
      dr = 0;
      dc = -1;
    } else if (a[r][c] == 'v') {
      dr = 1;
      dc = 0;
    } else if (a[r][c] == '^') {
      dr = -1;
      dc = 0;
    }

    r += dr;
    c += dc;
  }

  return 0;
}