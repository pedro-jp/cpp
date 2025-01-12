#include <iostream>
#include "Classes.h"

using namespace std;

int main()
{
  Veiculo *carro = new Veiculo("Porshe", 320);

  for (int i = 0; i < 10; i++)
  {
    carro->increment_vel(4);
    if (i == 4)
      carro->turn_on_off();
  }

  return 0;
}