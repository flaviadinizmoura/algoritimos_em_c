#include <stdio.h>

/* Faça um programa que peça uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inválido e continue pedindo 
até que o usuário informe um valor válido.*/

int main() {
	
int nota, cnt;
cnt=0;

printf ("Digite uma nota entre 0 e 10:");
scanf ("%d/n", &nota);

while(nota < 0 || nota > 10){


	  printf ("valor Invalido");
	  
	  printf ("Digite uma nota entre 0 e 10: \n");
      scanf ("%d/n", &nota); 
}
}

