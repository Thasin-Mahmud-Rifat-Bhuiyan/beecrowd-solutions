
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;

  while (getline(cin, s)) {
    int balance = 0;
    bool correct = true;

    for (char c : s) {
      if (c == '(') {
        balance++;
      } else if (c == ')') {
        balance--;
        if (balance < 0) {
          correct = false;
          break;
        }
      }
    }

    if (balance != 0)
      correct = false;

    cout << (correct ? "correct" : "incorrect") << '\n';
  }

  return 0;
}
