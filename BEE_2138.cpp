#include <iostream>
#include <string>
using namespace std;

int main() {
  string n;

  while (cin >> n) {
    int freq[10] = {};

    for (char c : n)
      freq[c - '0']++;

    int ans = 0;

    for (int i = 1; i < 10; i++) {
      if (freq[i] >= freq[ans])
        ans = i;
    }

    cout << ans << endl;
  }

  return 0;
}