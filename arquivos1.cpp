#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  // ofstream, ifstream, fstream
  // ofstream arquivo;

  // arquivo.open("cpp.txt", ios::app);
  // arquivo << "curso world\n";
  // arquivo << "curso world1\n";
  // arquivo << "curso world2\n";

  // arquivo.close();

  ifstream arquivo_read;
  string linha;
  arquivo_read.open("cpp.txt");
  if (arquivo_read.is_open())
  {
    int line = 1;
    while (getline(arquivo_read, linha))
    {
      cout << line << " " << linha << endl;
      line++;
    }
    arquivo_read.close();
  }
  else
  {
    cout << "Erro ao abrir o arquivo.";
  }

  return 0;
}