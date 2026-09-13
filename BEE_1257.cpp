#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  cin >> N;

  while (N--) {
    int L;
    cin >> L;

    int hash = 0;

    for (int i = 0; i < L; i++) {
      string s;
      cin >> s;

      for (int j = 0; j < s.length(); j++) {
        hash += (s[j] - 'A') + i + j;
      }
    }

    cout << hash << endl;
  }

  return 0;
}