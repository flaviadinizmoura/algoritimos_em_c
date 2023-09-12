#include <stdio.h>

int main() 

{
    int num;
    int multiplica = 0;
	for(int cnt = 0; cnt <2; cnt++)
   {

	printf(" entre com um numero \n ") ;
	scanf ("%d", &num);	
	
    multiplica= num*=num;
}

printf (" a multiplicacao e : %d ", multiplica);

}
	

