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

    int i = 0;
    long long attacked = 0;

    while (i >= 0 && i < n) {
        attacked++;

        if (sheep[i] > 0) {
            sheep[i]--;
            total--;
        }

        if (sheep[i] % 2 == 0)
            i--;
        else
            i++;
    }

    cout << attacked << " " << total << endl;

    return 0;
}
