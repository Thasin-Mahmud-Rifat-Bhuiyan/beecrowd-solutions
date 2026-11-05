
#include <iostream>
using namespace std;

int main() {
  long long A, B;

  while (cin >> A >> B && (A != 0 || B != 0)) {
    cout << 2 * A - B << '\n';
  }

  return 0;
}
