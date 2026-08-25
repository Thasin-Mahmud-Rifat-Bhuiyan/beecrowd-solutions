#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int c;
  cin >> c;

  while (c--) {
    string s;
    cin >> s;

    cout << fixed << setprecision(2) << s.length() / 100.0 << endl;
  }

  return 0;
}