#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();

  while (n--) {
    string s;
    getline(cin, s);

    bool seen[26] = {};
    int count = 0;

    for (char c : s) {
      if (c >= 'a' && c <= 'z' && !seen[c - 'a']) {
        seen[c - 'a'] = true;
        count++;
      }
    }

    if (count == 26)
      cout << "frase completa" << endl;
    else if (count >= 13)
      cout << "frase quase completa" << endl;
    else
      cout << "frase mal elaborada" << endl;
  }

  return 0;
}