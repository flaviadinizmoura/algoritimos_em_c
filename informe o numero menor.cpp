#include <iostream>
#include <stdio.h>

/* Fa�a um programa que leia 7 n�meros e informe o n�mero menor. */

int main() 
{
	int num;
	int menor;
	for (int i=0; i < 7; i++)
	
	{
		
		printf ( " digite os numeros\n" );
		scanf ( "%d", &num );
		
		if (num < menor)
		
		{
			menor = num;
		}
	}
	
			printf ("informe o numero menor: %d", menor);
	
}
