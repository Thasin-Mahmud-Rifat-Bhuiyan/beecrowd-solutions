#include <iostream>
#include <queue>
using namespace std;

int main() {
  int n;

  while (cin >> n && n != 0) {
    queue<int> q;

    for (int i = 1; i <= n; i++)
      q.push(i);

    cout << "Discarded cards:";

    bool first = true;

    while (q.size() > 1) {
      if (!first)
        cout << ", ";

      cout << " " << q.front();
      q.pop();
      first = false;

      q.push(q.front());
      q.pop();
    }

    cout << "\nRemaining card: " << q.front() << '\n';
  }

  return 0;
}