
#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  int N, M;

  while (cin >> N >> M && (N != 0 || M != 0)) {
    vector<set<string>> servers(N);
    vector<set<string>> clients(M);

    for (int i = 0; i < N; i++) {
      int Q;
      cin >> Q;

      for (int j = 0; j < Q; j++) {
        string app;
        cin >> app;
        servers[i].insert(app);
      }
    }

    for (int i = 0; i < M; i++) {
      int P;
      cin >> P;

      for (int j = 0; j < P; j++) {
        string app;
        cin >> app;
        clients[i].insert(app);
      }
    }

    int connections = 0;

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
        bool connected = false;

        for (const string &app : clients[j]) {
          if (servers[i].count(app)) {
            connected = true;
            break;
          }
        }

        if (connected) {
          connections++;
        }
      }
    }

    cout << connections << '\n';
  }

  return 0;
}
