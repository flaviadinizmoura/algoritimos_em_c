#include <iostream>
#include <stdio.h>
/* Faça um programa que leia 4 números e informe o dobro do maior número.*/

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
	
