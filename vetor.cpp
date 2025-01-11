#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<string> carros;

  carros.push_back("GT4 RS");
  carros.push_back("GT2 RS");
  carros.push_back("GT3 RS");
  carros.push_back("GT RS");

  for (int i = 0; i < carros.size(); i++)
    cout << carros[i] << endl;

  return 0;
}