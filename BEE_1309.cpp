#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  long long dollars;
  int cents;

  while (cin >> dollars >> cents) {
    string s = to_string(dollars);
    string result;

    int count = 0;

    for (int i = s.size() - 1; i >= 0; i--) {
      result += s[i];
      count++;

      if (count == 3 && i != 0) {
        result += ',';
        count = 0;
      }
    }

    reverse(result.begin(), result.end());

    cout << "$" << result << ".";

    if (cents < 10)
      cout << "0";

    cout << cents << endl;
  }

  return 0;
}