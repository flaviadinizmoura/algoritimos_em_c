#include <iostream>
#include <stdio.h>

/* Faça um programa que leia 7 números e informe o número menor. */

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
