#include <iostream>
#include <string>
using namespace std;

int main() {
  char d;
  string n;

  while (cin >> d >> n) {
    if (d == '0' && n == "0")
      break;

    string ans = "";

    for (char c : n) {
      if (c != d)
        ans += c;
    }

    int i = 0;
    while (i < ans.size() && ans[i] == '0')
      i++;

    ans = ans.substr(i);

    if (ans.empty())
      cout << 0 << endl;
    else
      cout << ans << endl;
  }

  return 0;
}