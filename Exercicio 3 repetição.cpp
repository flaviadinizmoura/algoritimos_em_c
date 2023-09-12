#include <stdio.h>

/* Supondo que a população de um país A seja da ordem de 80000
habitantes com uma taxa anual de crescimento de 3% e que a
população de B seja 200000 habitantes com uma taxa de
crescimento de 1,5%.
Faça um programa que calcule e escreva o número de anos
necessários para que a população do país A ultrapasse ou
iguale a população do país B, mantidas como taxas de
crescimento. */


int main() {
    
	int populacaoA = 80000;
    int populacaoB = 200000;
    float taxaCrescimentoA = 0.03;
    float taxaCrescimentoB = 0.015;
    int anos = 0;

    while (populacaoA < populacaoB) {
        populacaoA += populacaoA * taxaCrescimentoA;
        populacaoB += populacaoB * taxaCrescimentoB;
        anos++;
    }

    printf("A populacao do pais A ultrapassara ou igualara a populacao do pais B apos: %d\n", anos,);
    return 0;
}



