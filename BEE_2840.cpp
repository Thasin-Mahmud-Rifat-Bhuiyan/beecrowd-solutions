#include <iostream>
using namespace std;

int main() {
  double R, L;
  cin >> R >> L;

  double volume = (4.0 / 3.0) * 3.1415 * R * R * R;

  cout << (int)(L / volume) << endl;

  return 0;
}