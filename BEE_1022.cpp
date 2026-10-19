
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  while (N--) {
    long long N1, D1, N2, D2;
    char slash, op;

    cin >> N1 >> slash >> D1 >> op >> N2 >> slash >> D2;

    long long num, den;

    if (op == '+') {
      num = N1 * D2 + N2 * D1;
      den = D1 * D2;
    } else if (op == '-') {
      num = N1 * D2 - N2 * D1;
      den = D1 * D2;
    } else if (op == '*') {
      num = N1 * N2;
      den = D1 * D2;
    } else {
      num = N1 * D2;
      den = N2 * D1;
    }

    cout << num << "/" << den << " = ";

    long long g = gcd(abs(num), abs(den));
    num /= g;
    den /= g;

    if (den < 0) {
      num = -num;
      den = -den;
    }

    cout << num << "/" << den << '\n';
  }

  return 0;
}
