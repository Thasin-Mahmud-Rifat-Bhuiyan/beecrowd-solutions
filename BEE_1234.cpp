#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;

  while (getline(cin, s)) {
    bool upper = true;

    for (char &c : s) {
      if (c == ' ')
        continue;

      if (upper)
        c = toupper(c);
      else
        c = tolower(c);

      upper = !upper;
    }

    cout << s << endl;
  }

  return 0;
}