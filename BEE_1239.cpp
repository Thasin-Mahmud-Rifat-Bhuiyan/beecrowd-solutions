#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;

  while (getline(cin, s)) {
    bool italic = false;
    bool bold = false;

    for (char c : s) {
      if (c == '_') {
        if (italic)
          cout << "</i>";
        else
          cout << "<i>";
        italic = !italic;
      } else if (c == '*') {
        if (bold)
          cout << "</b>";
        else
          cout << "<b>";
        bold = !bold;
      } else {
        cout << c;
      }
    }

    cout << '\n';
  }

  return 0;
}