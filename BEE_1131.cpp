#include <iostream>
using namespace std;

int main() {
  int inter = 0, gremio = 0, draw = 0, total = 0;
  int x, y, op;

  do {
    cin >> x >> y;
    total++;

    if (x > y)
      inter++;
    else if (x < y)
      gremio++;
    else
      draw++;

    cout << "Novo grenal (1-sim 2-nao)" << endl;
    cin >> op;

  } while (op == 1);

  cout << total << " grenais" << endl;
  cout << "Inter:" << inter << endl;
  cout << "Gremio:" << gremio << endl;
  cout << "Empates:" << draw << endl;

  if (inter > gremio)
    cout << "Inter venceu mais" << endl;
  else if (gremio > inter)
    cout << "Gremio venceu mais" << endl;
  else
    cout << "Nao houve vencedor" << endl;

  return 0;
}