#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    string a, b;
    cin >> a >> b;

    string result;
    int len = min(a.size(), b.size());

    for (int i = 0; i < len; i++) {
      result += a[i];
      result += b[i];
    }

    if (a.size() > b.size())
      result += a.substr(len);
    else
      result += b.substr(len);

    cout << result << endl;
  }

  return 0;
}