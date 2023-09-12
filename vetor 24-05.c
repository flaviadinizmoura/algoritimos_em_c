#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
	float altura[5];
	int idade[5];
	int i;
	
	printf("Digite a idade e a altura de 5 pessoas:\n");
 
   for (i = 0; i <5; i++) {
        printf("Pessoa %d:\n", i+1);
        printf("Idade:");
        scanf("%d", &idade[i]);
        printf("Altura:");
        scanf("%f", &altura[i]);
    }

    printf("Idade na ordem inversa:\n");
    for (i = 5 - 1; i >= 0; i--) {
        printf("%d ", idade[i]);
    }

    printf("\nAltura na ordem inversa:\n");
    for (i = 5 - 1; i >= 0; i--) {
        printf("%.2f ", altura[i]);
    }

    printf("\n");

}
