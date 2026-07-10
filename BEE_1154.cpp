#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int age;
  int sum = 0, count = 0;

  while (cin >> age) {
    if (age < 0)
      break;

    sum += age;
    count++;
  }

  cout << fixed << setprecision(2) << (double)sum / count << endl;

  return 0;
}