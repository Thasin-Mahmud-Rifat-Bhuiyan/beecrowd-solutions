#include <algorithm>
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

    int mid = s.size() / 2;
    string left = s.substr(0, mid);
    string right = s.substr(mid);

    reverse(left.begin(), left.end());
    reverse(right.begin(), right.end());

    cout << left << right << endl;
  }

  return 0;
}