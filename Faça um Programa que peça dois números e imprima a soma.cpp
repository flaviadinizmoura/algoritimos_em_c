#include <iostream>

/*
	Name: SOMA
	Date: 12/03/23 22:38
	Description: Fa�a um Programa que pe�a dois n�meros e imprima a soma.
*/	
using namespace std;

int main()
{
	int numero1,  numero2, soma;
	cout << "digite o primeiro numero:";
	cin >> numero1;
	cout << "digite o ssegundo numero:";
	cin >> numero2;
	soma= numero1 + numero2;
	cout << "a soma dos dois numeros � " << soma << endl;
	return 0; 
}
