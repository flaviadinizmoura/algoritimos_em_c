#include <stdio.h>

/* Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo. */

int main() {
	
	float valor;

	printf ("Entre com o valor:");
	scanf ("%f/n", &valor);
	
	if(valor >= 0) {	
	printf ("o valor e positivo.\n", valor);
	}
	else {
		printf ("o valor e negativo.\n", valor);
	}
      
}
