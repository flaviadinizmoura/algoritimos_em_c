#include <iostream>
#include <stdio.h>
/* Fa�a um programa que leia 4 n�meros e informe o dobro do maior n�mero.*/

int main() {
	
	int num;
	int maior = 0;
	int dobro;
	for (int i=0; i < 4; i++)
	
	{
		printf (" Digite um numero:");
		scanf ("%d", &num);
		
		if(num > maior)
		
	{  
			maior = num;
          }
	    dobro = num*2;
	}
	
		printf( " informe o dobro do maior numero %d ",dobro);	
}
	
