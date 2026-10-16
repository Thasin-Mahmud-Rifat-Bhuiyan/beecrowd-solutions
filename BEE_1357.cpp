
#include <bits/stdc++.h>
using namespace std;

int main() {
  int D;
  while (cin >> D && D != 0) {
    char type;
    cin >> type;

    string braille[10][3] = {{".*", "**", ".."}, {"*.", "..", ".."},
                             {"*.", "*.", ".."}, {"**", "..", ".."},
                             {"**", ".*", ".."}, {"*.", ".*", ".."},
                             {"**", "*.", ".."}, {"**", "**", ".."},
                             {"*.", "**", ".."}, {".*", "*.", ".."}};

    if (type == 'S') {
      string s;
      cin >> s;

      for (int row = 0; row < 3; row++) {
        for (int i = 0; i < D; i++) {
          if (i > 0)
            cout << " ";
          cout << braille[s[i] - '0'][row];
        }
        cout << '\n';
      }
    } else {
      string rows[3];
      for (int i = 0; i < 3; i++)
        getline(cin >> ws, rows[i]);

      vector<string> cells[3];
      for (int row = 0; row < 3; row++) {
        stringstream ss(rows[row]);
        string cell;
        while (ss >> cell)
          cells[row].push_back(cell);
      }

      for (int i = 0; i < D; i++) {
        for (int digit = 0; digit < 10; digit++) {
          if (braille[digit][0] == cells[0][i] &&
              braille[digit][1] == cells[1][i] &&
              braille[digit][2] == cells[2][i]) {
            cout << digit;
            break;
          }
        }
      }
      cout << '\n';
    }
  }

  return 0;
}
