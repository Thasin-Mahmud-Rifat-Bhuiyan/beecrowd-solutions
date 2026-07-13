#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double s = 0.0;
  double denominator = 1.0;

  for (int numerator = 1; numerator <= 39; numerator += 2) {
    s += numerator / denominator;
    denominator *= 2;
  }

  cout << fixed << setprecision(2) << s << endl;

  return 0;
}