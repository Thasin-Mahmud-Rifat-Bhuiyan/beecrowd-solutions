#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;

  while (getline(cin, s)) {
    for (int i = 1; i < s.size(); i++) {
      if ((s[i] == ',' || s[i] == '.') && s[i - 1] == ' ')
        s.erase(i - 1, 1);
    }

    cout << s << endl;
  }

  return 0;
}