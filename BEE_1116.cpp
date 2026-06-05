#include <iomanip>
#include <iostream>

using namespace std;

int main() {

  int N;
  cin >> N;

  while (N--) {

    double X, Y;
    cin >> X >> Y;

    if (Y == 0) {
      cout << "divisao impossivel" << endl;
    } else {
      cout << fixed << setprecision(1);
      cout << X / Y << endl;
    }
  }

  return 0;
}