#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  while (N--) {
    double C;
    cin >> C;

    int days = 0;

    while (C > 1) {
      C /= 2.0;
      days++;
    }

    cout << days << " dias" << endl;
  }

  return 0;
}