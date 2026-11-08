
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  int N;
  cin >> N;

  int totalKg = 0;
  double totalMoney = 0;

  for (int i = 1; i <= N; i++) {
    double V;
    cin >> V;
    cin.ignore();

    string line;
    getline(cin, line);

    stringstream ss(line);
    string fruit;
    int kg = 0;

    while (ss >> fruit) {
      kg++;
    }

    totalKg += kg;
    totalMoney += V;

    cout << "day " << i << ": " << kg << " kg\n";
  }

  cout << fixed << setprecision(2);
  cout << (double)totalKg / N << " kg by day\n";
  cout << "R$ " << totalMoney / N << " by day\n";

  return 0;
}
