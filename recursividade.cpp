#include <iostream>

using namespace std;

void count(int i, int contador = 0);

int main()
{

	count(5);

	return 0;
}

void count(int num, int contador)
{
	cout << contador << endl;
	if(num > contador)
		count(num, ++contador);
}	
