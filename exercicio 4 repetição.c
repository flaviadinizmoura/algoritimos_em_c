#include <stdio.h>
#include <stdlib.h>

/* Desenvolva um gerador de tabuada, capaz de gerar a tabuada
de qualquer número inteiro entre 1 a 10. O usuário deve
informar de qual número ele deseja ver a tabuada. A saída deve
ser conforme o exemplo abaixo: Tabuada de 5: 5 X 1 = 5 5 X 2
= 10 ... 5 X 10 = 50 */


int main() {
	
    int num;
    int result;
    int cnt;
    
    for (cnt=1; cnt<=10; cnt++)	
    
     {
	    printf("Digite um número inteiro de 1 a 10: ");
         scanf("%d", &num);

           printf("Tabuada de %d:\n", num);
            result = num * cnt;
             printf("%d X %d = %d\n", num, cnt, result);
                     
}    
         
    return 0;
}

