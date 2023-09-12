#include <iostream>
#include <stdio.h>
/*
	Name: Flávia Moura
	Date: 29/03/23 19:31
	Description: 
*/

int main()
{
int x, y, result, cnt;

for (cnt=1; cnt<=3; cnt++)	
{
	printf (" Entre com os dois numeros para serem somados \n" );
	scanf (" %d%d", &x, &y);
	
	result = x + y;
	printf (" O valor da soma e: %d \n", result);
	cnt ++;
}
}

