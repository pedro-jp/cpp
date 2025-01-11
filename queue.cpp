// FILA First in First Out FIFO
#include <iostream>
#include <queue>

using namespace std;

int main()
{
  /*
    empty
    size
    front
    back
    push
    pop
  */

  queue<string> cartas;

  cartas.push("Copas");
  cartas.push("Paus");
  cartas.push("Espadas");
  cartas.push("Ouros");

  cout << "Tamanho da fila: " << cartas.size() << endl;

  while (!cartas.empty())
  {
    cout << "Primeiro da fila: " << cartas.front() << endl;
    cartas.pop();
  }

  return 0;
}