#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;

  while (cin >> N && N != 0) {
    vector<int> H(N);

    for (int i = 0; i < N; i++)
      cin >> H[i];

    int peaks = 0;

    for (int i = 0; i < N; i++) {
      int prev = H[(i - 1 + N) % N];
      int next = H[(i + 1) % N];

      if ((H[i] > prev && H[i] > next) || (H[i] < prev && H[i] < next)) {
        peaks++;
      }
    }

    cout << peaks << '\n';
  }

  return 0;
}