#include <iostream>

/* Fa�a um programa que leia 8 n�meros e informe a soma dos n�meros pares. */

int main() {
	
	int num;
	int soma = 0;
	
	printf(" entre com o numero:");
	for(int i=0; i <8; i++)
	
	{	
		scanf("%d", &num);
		
		if (num %2 == 0)    
	      soma += num;
	}
		printf (" a soma de numeros pares e : %d ",soma);		    
}
