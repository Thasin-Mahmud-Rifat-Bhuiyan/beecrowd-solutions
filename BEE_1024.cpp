#include <algorithm>
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

    for (int i = 0; i < s.size(); i++) {
      if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
        s[i] += 3;
      }
    }

    reverse(s.begin(), s.end());

    for (int i = s.size() / 2; i < s.size(); i++) {
      s[i]--;
    }

    cout << s << endl;
  }

  return 0;
}