
#include <iomanip>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  int N;
  cin >> N;

  while (N--) {
    int M;
    cin >> M;

    map<string, double> price;

    for (int i = 0; i < M; i++) {
      string name;
      double value;
      cin >> name >> value;
      price[name] = value;
    }

    int P;
    cin >> P;

    double total = 0;

    for (int i = 0; i < P; i++) {
      string name;
      int quantity;
      cin >> name >> quantity;

      total += price[name] * quantity;
    }

    cout << "R$ " << fixed << setprecision(2) << total << '\n';
  }

  return 0;
}
