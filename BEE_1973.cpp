#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long total = 0;
    int attacked = 0;

    long long sheep[n];

    for (int i = 0; i < n; i++) {
        cin >> sheep[i];
        total += sheep[i];
    }

    int i = 0;

    while (i >= 0 && i < n) {
        attacked++;

        if (sheep[i] > 0) {
            sheep[i]--;
            total--;
        }

        if ((sheep[i] + 1) % 2 == 0)
            i--;
        else
            i++;
    }

    cout << attacked << " " << total << endl;

    return 0;
}
