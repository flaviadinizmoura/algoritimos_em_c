#include <stdio.h>

/* Fa�a um Programa que pe�a um valor e mostre na tela se o valor � positivo ou negativo. */

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
