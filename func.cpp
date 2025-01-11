#include <iostream>

using namespace std;

void soma(int a, int b);
int soma2(int a, int b);
void vetores(string array[3]);

int main()
{
	string arr[3] = {"carro\n", "moto\n", "bike"};
	int res = soma2(2, 5);
	cout << res;

	vetores(arr);

	return 0;
}

void soma(int a, int b)
{
	cout << a + b << endl;		
}

int soma2(int a, int b)
{
	return a + b;
}

void vetores(string array[3])
{
	for(int i = 0; i < 3; i++)
	{
		cout << array[i];
	}
}
