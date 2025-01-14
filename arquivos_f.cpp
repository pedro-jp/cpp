#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  fstream arquivo;

  char opc = 's';
  string nome;

  arquivo.open("cpp2.txt", ios::out | ios::app);

  while (opc == 's' or opc == 'S')
  {
    cout << "Digite um nome: " << endl;
    cin >> nome;
    arquivo << nome << endl;
    cout << "Novo nome (s/n)";
    cin >> opc;
    system("clear");
  }
  arquivo.close();

  arquivo.open("cpp2.txt", ios::in);

  cout << "Nomes digitados: " << endl;

  string line;

  int n = 1;
  if (arquivo.is_open())
  {
    while (getline(arquivo, line))
    {
      cout << n << " " << line << endl;
      n++;
    }
    arquivo.close();
  }
  else
  {
    cout << "Arquivo não encontrado." << endl;
  }

  return 0;
}