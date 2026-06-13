#include <bits/stdc++.h>
using namespace std;

int main() {
  const double PI = 3.14;
  double V, D;

  while (cin >> V >> D) {
    double r = D / 2.0;
    double area = PI * r * r;
    double height = V / area;

    cout << fixed << setprecision(2);
    cout << "ALTURA = " << height << "\n";
    cout << "AREA = " << area << "\n";
  }

  return 0;
}