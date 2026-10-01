#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  cin >> n;

  if (n.find("13") != string::npos)
    cout << n << " es de Mala Suerte\n";
  else
    cout << n << " NO es de Mala Suerte\n";

  return 0;
}