#include <iostream>
#include <queue>
using namespace std;

int main() {
  int n;
  while (cin >> n && n != 0) {
    queue<int> deck;
    for (int i = 1; i <= n; i++)
      deck.push(i);

    cout << "Discarded cards:";
    bool first = true;
    while (deck.size() > 1) {

      if (!first)
        cout << ",";
      cout << " " << deck.front();
      deck.pop();
      first = false;

      deck.push(deck.front());
      deck.pop();
    }
    cout << "\nRemaining card: " << deck.front() << "\n";
  }
  return 0;
}
