#include <iostream>
using namespace std;

int main() {

  int X, Y;
  cin >> X >> Y;

  int start = min(X, Y);
  int end = max(X, Y);

  for (int i = start + 1; i < end; i++) {
    if (i % 5 == 2 || i % 5 == 3) {
      cout << i << endl;
    }
  }

  return 0;
}