#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int total = 0, c = 0, r = 0, s = 0;

  while (n--) {
    int x;
    char type;

    cin >> x >> type;

    total += x;

    if (type == 'C')
      c += x;
    else if (type == 'R')
      r += x;
    else if (type == 'S')
      s += x;
  }

  cout << "Total: " << total << " cobaias" << endl;
  cout << "Total de coelhos: " << c << endl;
  cout << "Total de ratos: " << r << endl;
  cout << "Total de sapos: " << s << endl;

  cout << fixed << setprecision(2);

  cout << "Percentual de coelhos: " << (c * 100.0) / total << " %" << endl;

  cout << "Percentual de ratos: " << (r * 100.0) / total << " %" << endl;

  cout << "Percentual de sapos: " << (s * 100.0) / total << " %" << endl;

  return 0;
}