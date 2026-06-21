#include <iostream>
using namespace std;

int main() {
  long long k;
  cin >> k;

  long long a = 1, b = 2;

  while (true) {
    long long gap = b - a - 1;

    if (k <= gap) {
      cout << a + k << endl;
      break;
    }

    k -= gap;

    long long c = a + b;
    a = b;
    b = c;
  }

  return 0;
}