#include <iomanip>
#include <iostream>

using namespace std;

int main() {

  double salary, increase, new_salary;
  int percent;

  cin >> salary;

  if (salary <= 400.00) {
    percent = 15;
  } else if (salary <= 800.00) {
    percent = 12;
  } else if (salary <= 1200.00) {
    percent = 10;
  } else if (salary <= 2000.00) {
    percent = 7;
  } else {
    percent = 4;
  }

  increase = salary * percent / 100.0;
  new_salary = salary + increase;

  cout << fixed << setprecision(2);
  cout << "Novo salario: " << new_salary << endl;
  cout << "Reajuste ganho: " << increase << endl;
  cout << "Em percentual: " << percent << " %" << endl;

  return 0;
}