#include <iostream>
#include <stdio.h>

/*
	Name: Fl�via Moura
	Date: 31/03/23 23:28
	Description: Fa�a um programa que pe�a 10 n�meros inteiros, calcule e mostre a quantidade de n�meros pares e a quantidade de n�meros impares.
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
