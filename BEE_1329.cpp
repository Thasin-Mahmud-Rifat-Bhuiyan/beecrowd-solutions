#include <iostream>
using namespace std;

int main() {
  int N;

  while (cin >> N && N != 0) {
    int mary = 0, john = 0;

    for (int i = 0; i < N; i++) {
      int R;
      cin >> R;

      if (R == 0)
        mary++;
      else
        john++;
    }

    cout << "Mary won " << mary << " times and John won " << john << " times"
         << '\n';
  }

  return 0;
}