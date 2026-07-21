#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int x[1000];

  for (int i = 0; i < n; i++) {
    cin >> x[i];
  }

  int minValue = x[0];
  int position = 0;

  for (int i = 1; i < n; i++) {
    if (x[i] < minValue) {
      minValue = x[i];
      position = i;
    }
  }

  cout << "Menor valor: " << minValue << endl;
  cout << "Posicao: " << position << endl;

  return 0;
}