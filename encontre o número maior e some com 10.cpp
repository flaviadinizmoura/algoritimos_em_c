#include <iostream>

/* Faça um programa que leia 10 números, encontre o número maior e some com 10 */

int main() {
	
	int num;
	int maior = 0;
	int soma = 0;
	for (int i=0; i < 10; i++)
	
	{
		printf (" Digite um numero:");
		scanf ("%d", &num);
		
		if(num > maior)
		
	{  
			maior = num+10;
          }

	}
	
		printf( " O maior numero + 10 e %d ",maior);	
}
