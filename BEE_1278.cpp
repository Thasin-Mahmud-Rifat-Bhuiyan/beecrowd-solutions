#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int n;
    bool first = true;

    while (cin >> n && n != 0) {
        cin.ignore();

        vector<string> lines;
        int maxLen = 0;

        for (int i = 0; i < n; i++) {
            string s, word, line;
            getline(cin, s);

            stringstream ss(s);

            while (ss >> word) {
                if (!line.empty())
                    line += " ";
                line += word;
            }

            lines.push_back(line);
            maxLen = max(maxLen, (int)line.length());
        }

        if (!first)
            cout << endl;

        first = false;

        for (string line : lines) {
            cout << string(maxLen - line.length(), ' ') << line << endl;
        }
    }

    return 0;
}
