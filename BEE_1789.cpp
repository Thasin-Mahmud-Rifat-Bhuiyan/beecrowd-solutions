#include <iostream>
using namespace std;

int main() {
  int l;

  while (cin >> l) {
    int speed, mx = 0;

    for (int i = 0; i < l; i++) {
      cin >> speed;
      if (speed > mx)
        mx = speed;
    }

    if (mx < 10)
      cout << 1 << endl;
    else if (mx < 20)
      cout << 2 << endl;
    else
      cout << 3 << endl;
  }

  return 0;
}