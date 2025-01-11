#include <iostream>

using namespace std;

void fatorial(int n, int count = 0);

int main(int argc, char *argv[])
{
	cout << argv[1] << endl;
	fatorial(5);

	return 0;
}

void fatorial(int n, int count)
{
	cout << (n + n) * count << endl;

	if(n > count)
	{
		fatorial(n, ++count);
	}
}
