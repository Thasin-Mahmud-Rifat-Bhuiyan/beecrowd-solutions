#include <iostream>
using namespace std;

int main() {
  int N;

  while (cin >> N) {
    for (int i = 1; i <= N; i += 2) {
      int spaces = (N - i) / 2;
      cout << string(spaces, ' ') << string(i, '*') << endl;
    }

    cout << string((N - 1) / 2, ' ') << "*" << endl;
    cout << string((N - 3) / 2, ' ') << "***" << endl;

    cout << endl;
  }

  return 0;
}