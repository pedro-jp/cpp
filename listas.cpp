#include <iostream>
#include <list>

using namespace std;

int main()
{
  list<int> aula;
  list<int> aula2;
  list<int>::iterator it;

  for (int i = 0; i < 5; i++)
  {
    aula.push_front(i);
  }

  for (int i = 10; i > 5; i--)
  {
    aula2.push_front(i);
  }

  // aula.reverse();
  aula.merge(aula2);
  aula.sort();

  it = aula.begin();

  advance(it, 3);
  aula.insert(it, 10);
  aula.erase(--it);

  // aula.clear();

  while (!aula.size() <= 0)
  {
    cout << "Primeiro item da lista: " << aula.front() << endl;
    aula.pop_front();
  }

  return 0;
}