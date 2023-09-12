#include <iostream>
#include <stdio.h>

/*
	Name: Flávia Moura
	Date: 31/03/23 23:28
	Description: Faça um programa que peça 10 números inteiros, calcule e mostre a quantidade de números pares e a quantidade de números impares.
*/

int main() 

{
    int num;
    int par = 0;
    int impar = 0;
		
    printf(" entre com 10 numeros: \n ");
    for(int cnt = 0; cnt <10; cnt++)
{

	scanf ("%d", &num);	
	
    if (num %2 == 0)	    
	{par++;	}
    else 
	{impar++;} 
   
}

printf (" a quantidade de numeros pares e : %d ", par);
printf (" a quantidade de numeros impares e : %d ", impar);

}
