#include <stdio.h>

/* Fa�a um programa que pe�a uma nota, entre zero e dez. Mostre uma mensagem caso o valor seja inv�lido e continue pedindo 
at� que o usu�rio informe um valor v�lido.*/

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

