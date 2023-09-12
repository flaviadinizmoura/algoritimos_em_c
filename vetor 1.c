#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Carregue dois vetores com 10 números inteiros cada. 
Gere um terceiro vetor somando os elementos do primeiro vetor com o segundo vetor.
 Imprima o vetor resultante.*/

int main() 
{
	int vetor_1 [10] = {10,20,13, 4,5,40,55,2,35,8};
	int vetor_2 [10] = {4,14,23,1,55,43,14,18,16,3};
	int vetor_soma [10];
	int i;
					
//imprimindo os numeros do primeiro vetor
    printf ("apresente os numeros do vetor1:\n");		
	for (i=0; i<=9; i++) {
	  	printf("%d\n", vetor_1 [i]); 
 }
 
 //imprimindo os numeros do segundo vetor
 	printf ("apresente os numeros do vetor2:\n");		
	for (i=0; i<=9; i++){
	  	printf("%d\n", vetor_2 [i]); 
 }
  
// Somando os dois vetores		
		for (i=0; i<=9; i++){
	    vetor_soma [i] = vetor_1 [i] + vetor_2 [i];		
	}
	
//imprimindo os numeros somados		
	printf("Soma dos vetores\n");
    for (i=0; i<=9; i++) {
	  	printf("%d\n", vetor_soma[i]); 
		  	
	    }		
}
	

