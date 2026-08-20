#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();

  while (n--) {
    string s;
    getline(cin, s);

    int i = 0;

    while (i < s.size() && s[i] == ' ')
      i++;

    cout << s.substr(i) << endl;
  }

  return 0;
}