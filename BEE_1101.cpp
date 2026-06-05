#include <iostream>
using namespace std;

int main() {

  int M, N;

  while (cin >> M >> N) {

    if (M <= 0 || N <= 0)
      break;

    int start, end;

    if (M < N) {
      start = M;
      end = N;
    } else {
      start = N;
      end = M;
    }

    int sum = 0;

    for (int i = start; i <= end; i++) {
      cout << i << " ";
      sum += i;
    }

    cout << "Sum=" << sum << endl;
  }

  return 0;
}