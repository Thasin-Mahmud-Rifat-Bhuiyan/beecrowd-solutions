
#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int solve(int side, int rows, vector<int> &planks) {
  int single = 0;
  vector<int> small;

  for (int x : planks) {
    if (x == side)
      single++;
    else if (x < side)
      small.push_back(x);
  }

  single = min(single, rows);
  int need = rows - single;

  if (need == 0)
    return single;

  sort(small.begin(), small.end());

  int left = 0, right = (int)small.size() - 1;
  int pairs = 0;

  while (left < right) {
    int sum = small[left] + small[right];

    if (sum == side) {
      pairs++;
      left++;
      right--;
    } else if (sum < side) {
      left++;
    } else {
      right--;
    }
  }

  if (pairs < need)
    return INF;

  return single + 2 * need;
}

int main() {
  int N, M;

  while (cin >> N >> M && (N != 0 || M != 0)) {
    int L, K;
    cin >> L >> K;

    vector<int> planks(K);
    for (int i = 0; i < K; i++)
      cin >> planks[i];

    int ans = INF;

    if ((M * 100) % L == 0)
      ans = min(ans, solve(N, M * 100 / L, planks));

    if ((N * 100) % L == 0)
      ans = min(ans, solve(M, N * 100 / L, planks));

    if (ans == INF)
      cout << "impossivel\n";
    else
      cout << ans << '\n';
  }

  return 0;
}
