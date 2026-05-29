#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int number, hours;
  double amount, salary;

  cin >> number >> hours >> amount;

  salary = hours * amount;

  cout << "NUMBER = " << number << endl;
  cout << fixed << setprecision(2);
  cout << "SALARY = U$ " << salary << endl;

  return 0;
}