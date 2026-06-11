#include <iostream>
using namespace std;

long long fact(int n) {
  long long f = 1;

  for (int i = 1; i <= n; i++) {
    f *= i;
  }

  return f;
}

int main() {
  int M, N;

  while (cin >> M >> N) {
    cout << fact(M) + fact(N) << endl;
  }

  return 0;
}