#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main()
{
	string palavra;
	cout << "Escolha a palavra:";
	cin >> palavra;
	system("clear");
	int length = palavra.length() + 1;

	int tentativas = (5 + length) * length;

	char certa[length];

	for(int i = 0; i < length; i++)
	{
		certa[i] = '_';
	}
	certa[length - 1] = '\0';

	inicio:
		char letra;
		system("clear");
		cout << "Tentativas restantes: " << tentativas / length << endl;
		cout << certa << endl;
		if(strcmp(palavra.c_str(), certa) == 0)
		{
			cout << "Você ganhou!!";
		}else if(tentativas / length == 0)
		{
			cout << "Você perdeu!!";
		}else 
		{

			cin >> letra;
			for(int i = 0; i <  length; i++)
			{
				if(letra == palavra[i])
				{
					certa[i] = letra;
				} else
				{
					tentativas--;
				}
			}	
			goto inicio;	
		}

		return 0;
}
