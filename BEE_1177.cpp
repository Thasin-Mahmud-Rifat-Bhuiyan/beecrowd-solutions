#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;

  int value = 0;

  for (int i = 0; i < 1000; i++) {
    cout << "N[" << i << "] = " << value << endl;

    value++;

    if (value == T)
      value = 0;
  }

  return 0;
}