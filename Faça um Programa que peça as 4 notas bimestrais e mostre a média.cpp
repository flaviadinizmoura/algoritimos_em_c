#include <iostream>
/*
	Name: M�DIA
	Date: 12/03/23 22:52
	Description: Fa�a um Programa que pe�a as 4 notas bimestrais e mostre a m�dia.
*/

using namespace std;

int main()
{
	int nota1, nota2, nota3, nota4, media;
	
	cout << "digite a nota1:";
	cin >> nota1;
	cout << "digite a nota2:";
	cin >> nota2;
	cout << "digite a nota3:";
	cin >> nota3;
	cout << "digite a nota4:";
	cin >> nota4;
	media = nota1 + nota2+ nota3+ nota4 / 4;
	cout << "a media do bimestre e" << media << endl;
	return 0;
	
}
