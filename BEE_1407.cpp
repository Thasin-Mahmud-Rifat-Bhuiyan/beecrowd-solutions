
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, C, K;

  while (cin >> N >> C >> K && (N != 0 || C != 0 || K != 0)) {
    vector<int> freq(K + 1, 0);

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < C; j++) {
        int x;
        cin >> x;
        freq[x]++;
      }
    }

    int mn = *min_element(freq.begin() + 1, freq.end());

    bool first = true;

    for (int i = 1; i <= K; i++) {
      if (freq[i] == mn) {
        if (!first)
          cout << ' ';
        cout << i;
        first = false;
      }
    }

    cout << '\n';
  }

  return 0;
}
