#include <iomanip>
#include <iostream>
#include <sstream>

using namespace std;

int main() {

  int n;
  cin >> n;

  stringstream ss;

  ss << hex << uppercase << n;

  cout << ss.str() << endl;

  return 0;
}