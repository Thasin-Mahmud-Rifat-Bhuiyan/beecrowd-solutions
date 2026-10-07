#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
  string line, biggestWord;
  int maxLen = 0;

  while (true) {
    getline(cin, line);
    if (line == "0")
      break;

    stringstream ss(line);
    string word;
    bool first = true;

    while (ss >> word) {
      if (!first)
        cout << "-";
      cout << word.size();
      first = false;

      if ((int)word.size() >= maxLen) {
        maxLen = word.size();
        biggestWord = word;
      }
    }
    cout << "\n";
  }

  cout << "The biggest word: " << biggestWord << "\n";
  return 0;
}
