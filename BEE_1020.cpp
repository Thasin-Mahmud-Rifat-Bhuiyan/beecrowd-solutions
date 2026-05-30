#include <iostream>
using namespace std;

int main() {
  int N, years, months, days;

  cin >> N;

  years = N / 365;
  N = N % 365;

  months = N / 30;
  N = N % 30;

  days = N;

  cout << years << " ano(s)" << endl;
  cout << months << " mes(es)" << endl;
  cout << days << " dia(s)" << endl;

  return 0;
}