#include <iostream>

using namespace std;

void somar(float *var, float value)
{
  *var += value;
}

void getElements(float *arr)
{
  arr[0] = 0;
  arr[1] = 0;
  arr[2] = 1;
  arr[3] = 0;
  arr[4] = 0;
}

int main()
{
  float arr[5];
  float num = 10;

  getElements(arr);

  for (int i = 0; i < 5; i++)
    cout << arr[i] << endl;

  // somar(&num, 15);
  // cout << num << endl;

  return 0;
}