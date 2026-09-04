#include <iostream>
using namespace std;

int main() {
  int n;

  while (cin >> n && n != 0) {
    int a[51];

    for (int i = 1; i <= n; i++)
      cin >> a[i];

    int k;
    cin >> k;

    while (a[k] != k)
      k = a[k];

    cout << k << endl;
  }

  return 0;
}