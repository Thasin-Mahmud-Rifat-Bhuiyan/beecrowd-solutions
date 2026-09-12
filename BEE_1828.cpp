#include <iostream>
#include <string>
using namespace std;

int main() {
  int T;
  cin >> T;

  for (int t = 1; t <= T; t++) {
    string a, b;
    cin >> a >> b;

    if (a == b)
      cout << "Caso #" << t << ": De novo!" << endl;
    else if ((a == "tesoura" && (b == "papel" || b == "lagarto")) ||
             (a == "papel" && (b == "pedra" || b == "Spock")) ||
             (a == "pedra" && (b == "lagarto" || b == "tesoura")) ||
             (a == "lagarto" && (b == "Spock" || b == "papel")) ||
             (a == "Spock" && (b == "tesoura" || b == "pedra")))
      cout << "Caso #" << t << ": Bazinga!" << endl;
    else
      cout << "Caso #" << t << ": Raj trapaceou!" << endl;
  }

  return 0;
}