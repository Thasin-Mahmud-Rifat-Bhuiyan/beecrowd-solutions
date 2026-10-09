#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int n;

  while (cin >> n && n != 0) {
    queue<int> q;

    for (int i = 1; i <= n; i++)
      q.push(i);

    vector<int> discarded;

    while (q.size() > 1) {
      discarded.push_back(q.front());
      q.pop();

      q.push(q.front());
      q.pop();
    }

    cout << "Discarded cards:";

    for (int i = 0; i < (int)discarded.size(); i++) {
      if (i > 0)
        cout << ", ";
      cout << discarded[i];
    }

    cout << '\n';
    cout << "Remaining card: " << q.front() << '\n';
  }

  return 0;
}