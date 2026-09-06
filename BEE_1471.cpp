#include <iostream>
using namespace std;

int main() {
  int n, r;

  while (cin >> n >> r) {
    bool returned[10005] = {};

    for (int i = 0; i < r; i++) {
      int x;
      cin >> x;
      returned[x] = true;
    }

    if (n == r) {
      cout << "*" << endl;
    } else {
      for (int i = 1; i <= n; i++) {
        if (!returned[i])
          cout << i << " ";
      }
      cout << endl;
    }
  }

  return 0;
}