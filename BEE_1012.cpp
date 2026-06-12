#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double A, B, C;
  cin >> A >> B >> C;

  cout << fixed << setprecision(3);

  cout << "TRIANGULO: " << (A * C) / 2 << endl;
  cout << "CIRCULO: " << 3.14159 * C * C << endl;
  cout << "TRAPEZIO: " << ((A + B) * C) / 2 << endl;
  cout << "QUADRADO: " << C * C << endl;
  cout << "RETANGULO: " << A * B << endl;

  return 0;
}