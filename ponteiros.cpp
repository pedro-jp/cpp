#include <iostream>

using namespace std;

int main()
{
  // string veiculo = "carro", *pv = &veiculo;

  // cout << *pv << " no endereço: " << pv << endl;

  int *p, arr[10];

  p = &arr[0];

  *p = 20;

  for (int i = 0; i < 10; i++)
  {
    cout << "Endereço elemento " << i << ": " << (p++) << " valor: " << arr[i] << endl;
  }

  return 0;
}