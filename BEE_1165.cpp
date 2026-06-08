#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    int x;
    cin >> x;

    bool prime = true;

    if (x == 1)
      prime = false;

    for (int i = 2; i < x; i++) {
      if (x % i == 0) {
        prime = false;
        break;
      }
    }

    if (prime)
      cout << x << " eh primo" << endl;
    else
      cout << x << " nao eh primo" << endl;
  }

  return 0;
}