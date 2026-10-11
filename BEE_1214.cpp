#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int C;
  cin >> C;

  while (C--) {
    int N;
    cin >> N;

    vector<int> grades(N);
    int sum = 0;

    for (int i = 0; i < N; i++) {
      cin >> grades[i];
      sum += grades[i];
    }

    double average = (double)sum / N;
    int count = 0;

    for (int grade : grades) {
      if (grade > average)
        count++;
    }

    double percentage = (double)count * 100 / N;

    cout << fixed << setprecision(3) << percentage << "%\n";
  }

  return 0;
}