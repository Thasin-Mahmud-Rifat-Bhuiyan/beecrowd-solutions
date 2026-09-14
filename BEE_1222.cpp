#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  int N, L, C;

  while (cin >> N >> L >> C) {
    string s;
    cin.ignore();
    getline(cin, s);

    stringstream ss(s);
    string word;

    int lines = 1;
    int current = 0;

    while (ss >> word) {
      int len = word.length();

      if (current == 0) {
        current = len;
      } else if (current + 1 + len <= C) {
        current += 1 + len;
      } else {
        lines++;
        current = len;
      }
    }

    int pages = (lines + L - 1) / L;

    cout << pages << endl;
  }

  return 0;
}