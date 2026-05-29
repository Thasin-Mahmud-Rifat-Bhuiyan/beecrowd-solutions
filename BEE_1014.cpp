#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int X;
  double Y, average;

  cin >> X >> Y;

  average = X / Y;

  cout << fixed << setprecision(3);
  cout << average << " km/l" << endl;

  return 0;
}