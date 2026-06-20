#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int cs = 1; cs <= t; cs++) {
    int n;
    cin >> n;

    int age[n];

    for (int i = 0; i < n; i++) {
      cin >> age[i];
    }

    cout << "Case " << cs << ": " << age[n / 2] << endl;
  }

  return 0;
}