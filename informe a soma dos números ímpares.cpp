#include <iostream>

/* Fa�a um programa que leia 6 n�meros e informe a soma dos n�meros �mpares. */

int main() {

    int num;
    int soma = 0;
    
	printf ("entre com o numero:");
    for (int i=0; i<6;i++)
	
{
	scanf ("%d", &num);
	
	if (num %2 != 0)    
	    soma += num;
}
	printf (" a soma de numeros impares e : %d ",soma);		    
}
