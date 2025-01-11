#include <iostream>

using namespace std;

struct Carro
{
  string model;
  string color;
  int power;
  int max_velocity;

  void insert(string model, string color, int power, int max_velocity)
  {
    this->model = model;
    this->color = color;
    this->power = power;
    this->max_velocity = max_velocity;
  }

  void showData()
  {
    cout << "Modelo do carro: " << model << endl;
    cout << "Cor do carro: " << color << endl;
    cout << "Potência do carro: " << power << endl;
    cout << "Velocidade máxima do carro: " << max_velocity << endl
         << endl;
  }
};

int main()
{

  Carro *carros = new Carro[5];

  Carro carro, carro2, carro3, carro4, carro5;

  carros[0] = carro;
  carros[1] = carro2;
  carros[2] = carro3;
  carros[3] = carro4;
  carros[4] = carro5;

  carros[0].insert("Panamera", "preto", 1000, 320);
  carros[1].insert("m5", "branco", 507, 320);
  carros[2].insert("Gol", "preto", 120, 170);
  carros[3].insert("Celta", "preto", 90, 190);
  carros[4].insert("GT3 RS", "Branco", 600, 320);

  for (int i = 0; i < sizeof(carros); i++)
    carros[i].showData();

  return 0;
}