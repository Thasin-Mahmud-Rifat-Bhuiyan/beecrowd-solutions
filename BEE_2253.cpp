#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;

  while (getline(cin, s)) {
    bool upper = false;
    bool lower = false;
    bool digit = false;
    bool valid = true;

    if (s.length() < 6 || s.length() > 32)
      valid = false;

    for (char c : s) {
      if (isupper(c))
        upper = true;
      else if (islower(c))
        lower = true;
      else if (isdigit(c))
        digit = true;
      else
        valid = false;
    }

    if (upper && lower && digit && valid)
      cout << "Senha valida." << endl;
    else
      cout << "Senha invalida." << endl;
  }

  return 0;
}