
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, city = 0;

  while (cin >> N && N != 0) {
    int people[201] = {};
    long long totalPeople = 0, totalConsumption = 0;

    for (int i = 0; i < N; i++) {
      int X, Y;
      cin >> X >> Y;

      people[Y / X] += X;
      totalPeople += X;
      totalConsumption += Y;
    }

    if (city > 0)
      cout << '\n';
    cout << "Cidade# " << ++city << ":\n";

    bool first = true;
    for (int i = 0; i <= 200; i++) {
      if (people[i] > 0) {
        if (!first)
          cout << ' ';
        cout << people[i] << '-' << i;
        first = false;
      }
    }
    cout << '\n';

    long long avg = totalConsumption * 100 / totalPeople;
    cout << "Consumo medio: " << avg / 100 << '.' << setw(2) << setfill('0')
         << avg % 100 << " m3.\n";
    cout << setfill(' ');
  }

  return 0;
}
