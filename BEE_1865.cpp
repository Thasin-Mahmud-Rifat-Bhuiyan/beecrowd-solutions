#include <iostream>
#include <string>
using namespace std;

int main() {
  int c;
  cin >> c;

  while (c--) {
    string name;
    int n;

    cin >> name >> n;

    if (name == "Thor")
      cout << "Y" << endl;
    else
      cout << "N" << endl;
  }

  return 0;
}