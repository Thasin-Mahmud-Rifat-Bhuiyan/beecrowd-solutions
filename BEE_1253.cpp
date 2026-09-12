#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  cin >> N;

  while (N--) {
    string s;
    int shift;

    cin >> s >> shift;

    for (char &c : s) {
      c = (c - 'A' - shift + 26) % 26 + 'A';
    }

    cout << s << endl;
  }

  return 0;
}