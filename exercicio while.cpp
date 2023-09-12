#include <iostream>
#include <stdio.h>

int main()
{
int x, y, result, cnt;

cnt = 1;
while (cnt<=3)	
{
	printf (" Entre com os dois numeros para serem somados \n" );
	scanf (" %d%d", &x, &y);
	
	result = x + y;
	printf (" O valor da soma e: %d \n", result);
	cnt ++;
}
}

