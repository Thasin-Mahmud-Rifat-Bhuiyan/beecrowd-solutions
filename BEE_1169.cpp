
#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  while (N--) {
    int X;
    cin >> X;

    unsigned long long grains;

    if (X == 64)
      grains = 18446744073709551615ULL;
    else
      grains = (1ULL << X) - 1;

    cout << grains / 12000 << " kg\n";
  }

  return 0;
}
