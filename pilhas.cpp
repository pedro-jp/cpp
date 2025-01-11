#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<string> cartas;

	cartas.push("copas");
	cartas.push("espadilha");
	cartas.push("paus");
	cartas.push("ouros");

	cout << cartas.size() << endl;

	while (cartas.size() > 0)
	{
		cartas.pop();
	}

	cout << cartas.size();

	if (cartas.empty() == 1)
	{
		cout << "pilhas vazias";
	};

	return 0;
}
