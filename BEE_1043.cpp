#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double A, B, C;
  cin >> A >> B >> C;

  cout << fixed << setprecision(1);

  if (A + B > C && A + C > B && B + C > A) {
    cout << "Perimetro = " << A + B + C << endl;
  } else {
    cout << "Area = " << ((A + B) * C) / 2.0 << endl;
  }

  return 0;
}