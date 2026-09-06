#include <iostream>
using namespace std;

int main() {
  int n;

  while (cin >> n && n != 0) {
    int attempts = 0;

    while (true) {
      bool correct = true;

      for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (x != i)
          correct = false;
      }

      attempts++;

      if (correct)
        break;
    }

    cout << attempts << endl;
  }

  return 0;
}