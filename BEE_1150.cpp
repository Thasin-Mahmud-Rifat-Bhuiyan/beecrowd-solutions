#include <iostream>
using namespace std;

int main() {
  int X, Z;

  cin >> X;

  while (cin >> Z && Z <= X)
    ;

  int sum = 0, count = 0, num = X;

  while (sum <= Z) {
    sum += num;
    num++;
    count++;
  }

  cout << count << endl;

  return 0;
}