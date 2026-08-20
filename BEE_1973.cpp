#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> sheep(n);
    long long total = 0;

    for (int i = 0; i < n; i++) {
        cin >> sheep[i];
        total += sheep[i];
    }

    int pos = 0;
    long long attacked = 0;

    while (pos >= 0 && pos < n) {
        long long current = sheep[pos];

        attacked++;

        if (sheep[pos] > 0) {
            sheep[pos]--;
            total--;
        }

        if (current % 2 == 1)
            pos++;
        else
            pos--;
    }

    cout << attacked << " " << total << endl;

    return 0;
}
