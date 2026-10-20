
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> even, odd;

  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;

    if (x % 2 == 0)
      even.push_back(x);
    else
      odd.push_back(x);
  }

  sort(even.begin(), even.end());
  sort(odd.begin(), odd.end(), greater<int>());

  for (int x : even)
    cout << x << '\n';

  for (int x : odd)
    cout << x << '\n';

  return 0;
}
