#include <iostream>
using namespace std;

int main() {

  int d1, h1, m1, s1;
  int d2, h2, m2, s2;

  string temp;

  cin >> temp >> d1;
  cin >> h1 >> temp >> m1 >> temp >> s1;

  cin >> temp >> d2;
  cin >> h2 >> temp >> m2 >> temp >> s2;

  int start = d1 * 24 * 3600 + h1 * 3600 + m1 * 60 + s1;
  int end = d2 * 24 * 3600 + h2 * 3600 + m2 * 60 + s2;

  int diff = end - start;

  int days = diff / (24 * 3600);
  diff %= (24 * 3600);

  int hours = diff / 3600;
  diff %= 3600;

  int minutes = diff / 60;
  int seconds = diff % 60;

  cout << days << " dia(s)" << endl;
  cout << hours << " hora(s)" << endl;
  cout << minutes << " minuto(s)" << endl;
  cout << seconds << " segundo(s)" << endl;

  return 0;
}