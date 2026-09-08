#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n;
  bool first = true;

  while (cin >> n && n != 0) {
    vector<string> words(n);
    int mx = 0;

    for (int i = 0; i < n; i++) {
      cin >> words[i];
      mx = max(mx, (int)words[i].size());
    }

    if (!first)
      cout << endl;

    first = false;

    for (string word : words)
      cout << setw(mx) << word << endl;
  }

  return 0;
}