
#include <iostream>
using namespace std;

int main() {
  int N;

  while (cin >> N && N != 0) {
    int pairs = 0;
    int rectangles = 0;

    for (int i = 0; i < N; i++) {
      int C, V;
      cin >> C >> V;

      pairs += V / 2;
    }

    rectangles = pairs / 2;

    cout << rectangles << '\n';
  }

  return 0;
}
