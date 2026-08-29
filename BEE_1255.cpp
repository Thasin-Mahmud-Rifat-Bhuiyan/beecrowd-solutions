#include <cctype>
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

    int freq[26] = {};

    for (char c : s) {
      if (isalpha(c)) {
        c = tolower(c);
        freq[c - 'a']++;
      }
    }

    int mx = 0;

    for (int i = 0; i < 26; i++)
      mx = max(mx, freq[i]);

    for (int i = 0; i < 26; i++) {
      if (freq[i] == mx)
        cout << char('a' + i);
    }

    cout << endl;
  }

  return 0;
}