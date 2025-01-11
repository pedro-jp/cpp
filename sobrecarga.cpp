#include <iostream>

using namespace std;

void soma();
void soma(int n1, int n2);

int main()
{
	soma();
	soma(2, 6);
	return 0;
}

void soma(int n1, int n2)
{
	cout << n1 + n2 << endl;
}

void soma()
{
	int n1, n2;

	n1 = 4;
	n2 = 3;

	cout << n1 + n2 << endl;
}
