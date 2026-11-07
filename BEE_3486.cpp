
#include <cstdint>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string reg;
  int modeID;

  cin >> reg >> modeID;

  uint32_t value;

  if (reg.size() >= 2 && reg[0] == '0' && (reg[1] == 'x' || reg[1] == 'X')) {
    value = stoul(reg, nullptr, 16);
  } else if (reg.size() >= 2 && reg[0] == '0' &&
             (reg[1] == 'b' || reg[1] == 'B')) {
    value = stoul(reg.substr(2), nullptr, 2);
  } else {
    value = stoul(reg);
  }

  cout << "===========================\n";
  cout << "  REGISTER STATE\n";
  cout << "===========================\n";
  cout << "  Power On    : " << ((value & (1u << 0)) ? "Yes" : "No") << '\n';
  cout << "  Error       : " << ((value & (1u << 1)) ? "Yes" : "No") << '\n';
  cout << "  Ready       : " << ((value & (1u << 2)) ? "Yes" : "No") << '\n';
  cout << "  Overheat    : " << ((value & (1u << 3)) ? "Yes" : "No") << '\n';
  cout << "  Mode ID     : " << modeID << '\n';

  return 0;
}
