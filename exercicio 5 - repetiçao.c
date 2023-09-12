#include <stdio.h>

/* O Departamento Estadual de Meteorologia contratou para
desenvolver um programa que leia um conjunto
indeterminado de temperaturas, e informe ao final a menor e as
maiores temperaturas climáticas, bem como a média das
temperaturas.
 */

int main() {
	
    int quant = 0;
    float temp, menor, maior; 
	float soma = 0;

    printf("Digite as temperaturas ( ao final de todas as temperaturas desejadas, digite qualquer letra para calcular): \n");

    while (scanf("%f", &temp) == 1) {
        if (quant == 0) {
            menor = temp;
            maior = temp;
        } else {
            if (temp < menor) {
                menor = temp;
            }

            if (temp > maior) {
                maior = temp;
            }
        }

        soma += temp;
        quant++;
    }

    if (quant > 0) {
        float media = soma / quant;

        printf(" A menor temperatura e: %.2f\n", menor);
        printf("A maior temperatura e : %.2f\n", maior);
        printf(" A media das temperaturas e: %.2f\n", media);
    } else {
        printf("Temperatura invalida.\n");
    }

    return 0;
}

