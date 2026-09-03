#include <iostream>
#include <string>
using namespace std;

int main() {
  string a, b, c;
  cin >> a >> b >> c;

  if (a == "vertebrado") {
    if (b == "ave") {
      if (c == "carnivoro")
        cout << "aguia";
      else
        cout << "pomba";
    } else {
      if (c == "onivoro")
        cout << "homem";
      else
        cout << "vaca";
    }
  } else {
    if (b == "inseto") {
      if (c == "hematofago")
        cout << "pulga";
      else
        cout << "lagarta";
    } else {
      if (c == "hematofago")
        cout << "sanguessuga";
      else
        cout << "minhoca";
    }
  }

  cout << endl;
  return 0;
}