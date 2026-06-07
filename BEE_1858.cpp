#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  int x, minimum = 101, position;

  for (int i = 1; i <= N; i++) {
    cin >> x;

    if (x < minimum) {
      minimum = x;
      position = i;
    }
  }

  cout << position << endl;

  return 0;
}