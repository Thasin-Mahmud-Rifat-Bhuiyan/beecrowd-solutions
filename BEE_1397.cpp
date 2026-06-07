#include <iostream>
using namespace std;

int main() {
  int n;

  while (cin >> n && n != 0) {
    int a, b;
    int p1 = 0, p2 = 0;

    for (int i = 0; i < n; i++) {
      cin >> a >> b;

      if (a > b)
        p1++;
      else if (b > a)
        p2++;
    }

    cout << p1 << " " << p2 << endl;
  }

  return 0;
}