
#include <iostream>
#include <string>
using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int N;
    string s;
    cin >> N >> s;

    int K = s.length();
    long long result = 1;

    for (int i = N; i >= 1; i -= K) {
      result *= i;
    }

    cout << result << '\n';
  }

  return 0;
}
