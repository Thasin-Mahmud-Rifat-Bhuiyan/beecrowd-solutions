#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int N, Q;

  while (cin >> N >> Q) {
    int grades[N];

    for (int i = 0; i < N; i++) {
      cin >> grades[i];
    }

    sort(grades, grades + N, greater<int>());

    while (Q--) {
      int k;
      cin >> k;
      cout << grades[k - 1] << endl;
    }
  }

  return 0;
}