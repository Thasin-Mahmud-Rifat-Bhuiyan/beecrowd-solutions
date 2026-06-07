#include <iostream>
using namespace std;

int main() {
  int num, highest = 0, position;

  for (int i = 1; i <= 100; i++) {
    cin >> num;

    if (num > highest) {
      highest = num;
      position = i;
    }
  }

  cout << highest << endl;
  cout << position << endl;

  return 0;
}