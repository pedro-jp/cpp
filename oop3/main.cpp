#include <iostream>
#include "Veiculo.h"

using namespace std;

int main()
{
  Moto *moto = new Moto();

  cout << moto->vel;
  cout << moto->get_all_unlocked();
  return 0;
}