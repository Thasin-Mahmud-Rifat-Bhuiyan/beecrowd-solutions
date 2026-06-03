#include <algorithm>
#include <iostream>

using namespace std;

int main() {

  int a, b, c;
  cin >> a >> b >> c;

  int x = a, y = b, z = c;

  if (a > b)
    swap(a, b);
  if (a > c)
    swap(a, c);
  if (b > c)
    swap(b, c);

  cout << a << endl << b << endl << c << endl;
  cout << endl;
  cout << x << endl << y << endl << z << endl;

  return 0;
}