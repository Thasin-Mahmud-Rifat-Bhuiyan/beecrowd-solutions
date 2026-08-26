#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  getline(cin, s);

  if (s.length() <= 80)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}