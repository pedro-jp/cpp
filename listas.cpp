#include <iostream>
#include <list>

using namespace std;

int main()
{
  list<int> aula;
  list<int>::iterator it;

  for (int i = 0; i < 10; i++)
  {
    aula.push_front(i);
  }

  it = aula.begin();

  while (!aula.size() <= 0)
  {
    cout << "Primeiro item da lista: " << aula.front() << endl;
    aula.pop_front();
  }

  return 0;
}