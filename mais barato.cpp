#include <stdio.h>

int main() 
{
	int num1, num2, num3;
	int menor;
	
	printf (" entre com os numeros:");
	scanf ("%d%d%d",&num1, &num2, &num3);	
	
    if (num1 > num2) {
        menor = num1;
        num1 = num2;
        num2 = menor;
    }
    if (num1 > num3) {
        menor= num1;
        num1 = num3;
        num3 = menor;
    }
    if (num2 > num3) {
        menor= num2;
        num2 = num3;
        num3 = menor;
    }

    printf("Os números em ordem crescente são: %d, %d, %d\n", num1, num2, num3);

    return 0;
}

