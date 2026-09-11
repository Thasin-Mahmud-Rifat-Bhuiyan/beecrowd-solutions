#include <cctype>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  string s;

  while (getline(cin, s) && s != "*") {
    stringstream ss(s);
    string word;
    char first;
    bool ok = true;

    ss >> word;
    first = tolower(word[0]);

    while (ss >> word) {
      if (tolower(word[0]) != first)
        ok = false;
    }

    cout << (ok ? 'Y' : 'N') << endl;
  }

  return 0;
}