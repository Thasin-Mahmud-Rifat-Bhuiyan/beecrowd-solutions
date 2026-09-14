#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  cin >> N;
  cin.ignore();

  while (N--) {
    string s;
    getline(cin, s);

    bool newWord = true;

    for (char c : s) {
      if (c == ' ') {
        newWord = true;
      } else {
        if (newWord) {
          cout << c;
          newWord = false;
        }
      }
    }

    cout << endl;
  }

  return 0;
}