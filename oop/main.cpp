#include <iostream>
#include "Aviao.h"

using namespace std;

int main()
{
  Aviao *aviao = new Aviao("Jatinho", 880);
  aviao->increment_vel(234);

  string res = aviao->increment_vel(439);

  cout << res;
  return 0;
}