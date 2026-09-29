#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;

  while (cin >> N) {
    string result;

    for (int i = 0; i < N; i++) {
      string B;
      cin >> B;

      int decimal = stoi(B, nullptr, 2);
      result += char(decimal);
    }

    cout << result << '\n';
  }

  return 0;
}