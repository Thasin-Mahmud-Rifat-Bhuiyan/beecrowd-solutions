#include <iostream>
using namespace std;

int main() {
  long long A, B, sum;

  cin >> A >> B;

  sum = (B * (B + 1) / 2) - ((A - 1) * A / 2);

  cout << sum << endl;

  return 0;
}