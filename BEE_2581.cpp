#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  string question;
  getline(cin, question);

  while (n--) {
    getline(cin, question);
    cout << "I am Toorg!" << endl;
  }

  return 0;
}