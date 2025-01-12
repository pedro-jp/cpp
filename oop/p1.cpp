#include <iostream>

using namespace std;

class Aviao
{

public:
  int vel = 0;
  int vel_max;
  string type;

  void increment_vel(int v);
  void set_vel_max(int v);

private:
};

void Aviao::increment_vel(int v)
{
  if (!this->vel_max)
    cout << "Primeiro defina uma velocidade máxima!" << endl;

  if (this->vel + v <= this->vel_max)
    this->vel += v;
  else
    this->vel = this->vel_max;
  cout << this->vel << endl;
}

void Aviao::set_vel_max(int v)
{
  this->vel_max = v;
}

int main()
{
  Aviao *aviao1 = new Aviao();

  cout << aviao1->vel << endl;

  aviao1->set_vel_max(350);

  aviao1->increment_vel(200);
  aviao1->increment_vel(50);

  return 0;
}