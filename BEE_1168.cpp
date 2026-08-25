#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  int led[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

  while (n--) {
    string s;
    cin >> s;

    int total = 0;

    for (char c : s) {
      total += led[c - '0'];
    }

    cout << total << " leds" << endl;
  }

  return 0;
}