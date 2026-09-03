#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    if (s.size() == 5) {
      cout << "3" << endl;
    } else {
      int one = 0, two = 0;

      string a = "one";
      string b = "two";

      for (int i = 0; i < 3; i++) {
        if (s[i] == a[i])
          one++;
        if (s[i] == b[i])
          two++;
      }

      if (one >= 2)
        cout << "1" << endl;
      else
        cout << "2" << endl;
    }
  }

  return 0;
}