
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;

  while (cin >> N && N != 0) {
    while (true) {
      vector<int> a(N);
      cin >> a[0];

      if (a[0] == 0) {
        cout << '\n';
        break;
      }

      for (int i = 1; i < N; i++) {
        cin >> a[i];
      }

      stack<int> st;
      int coach = 1;
      bool possible = true;

      for (int x : a) {
        while ((st.empty() || st.top() != x) && coach <= N) {
          st.push(coach);
          coach++;
        }

        if (!st.empty() && st.top() == x) {
          st.pop();
        } else {
          possible = false;
          break;
        }
      }

      cout << (possible ? "Yes" : "No") << '\n';
    }
  }

  return 0;
}
