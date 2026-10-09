#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  cin >> N;

  while (N--) {
    string s;
    cin >> s;

    int d1 = s[0] - '0';
    int d2 = s[2] - '0';
    char c = s[1];

    int result;
    if (d1 == d2) {
      result = d1 * d2;
    } else if (isupper(c)) {
      result = d2 - d1;
    } else {
      result = d1 + d2;
    }

    cout << result << "\n";
  }

  return 0;
}
