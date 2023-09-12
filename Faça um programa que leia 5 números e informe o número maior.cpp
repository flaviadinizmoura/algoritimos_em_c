#include <stdio.h>
/*
	Name: Flávia Moura
	Date: 29/03/23 19:31
	Description: Faça um programa que leia 5 números e informe o número maior.
*/

int main() 

{
	int num;
	int maior = 0;
	for(int cnt = 0; cnt < 5; cnt++)
	
{
	printf(" entre com um numero\n ") ;
	scanf ("%d", &num);
	
	if (num > maior)
	{
	maior = num;	
	}
	
	}
	
	printf (" o maior numero : %d ", maior);


}
	
	

