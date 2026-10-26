#include <iostream>
using namespace std;

int main() {
  long long A, P;
  cin >> A >> P;

  long long tigers = (P - 2 * A) / 2;
  long long geese = A - tigers;

  cout << tigers << "\n" << geese << "\n";

  return 0;
}