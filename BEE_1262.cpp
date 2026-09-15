#include <iostream>
#include <string>
using namespace std;

int main() {
  string trace;
  int P;

  while (cin >> trace >> P) {
    int cycles = 0;
    int reads = 0;

    for (char c : trace) {
      if (c == 'R') {
        if (reads == 0)
          cycles++;

        reads++;

        if (reads == P)
          reads = 0;
      } else {
        cycles++;
        reads = 0;
      }
    }

    cout << cycles << '\n';
  }

  return 0;
}