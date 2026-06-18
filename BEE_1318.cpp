#include <iostream>
#include <map>
using namespace std;

int main() {
  int n, m;

  while (cin >> n >> m && (n || m)) {
    map<int, int> freq;

    for (int i = 0; i < m; i++) {
      int x;
      cin >> x;
      freq[x]++;
    }

    int cnt = 0;

    for (auto it : freq) {
      if (it.second > 1)
        cnt++;
    }

    cout << cnt << endl;
  }

  return 0;
}