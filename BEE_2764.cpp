#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int d, m, y;
  char slash;

  cin >> d >> slash >> m >> slash >> y;

  cout << setfill('0') << setw(2) << m << "/" << setw(2) << d << "/" << setw(2)
       << y << endl;

  cout << setw(2) << y << "/" << setw(2) << m << "/" << setw(2) << d << endl;

  cout << setw(2) << d << "-" << setw(2) << m << "-" << setw(2) << y << endl;

  return 0;
}