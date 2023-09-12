#include <stdio.h>

/* Supondo que a popula��o de um pa�s A seja da ordem de 80000
habitantes com uma taxa anual de crescimento de 3% e que a
popula��o de B seja 200000 habitantes com uma taxa de
crescimento de 1,5%.
Fa�a um programa que calcule e escreva o n�mero de anos
necess�rios para que a popula��o do pa�s A ultrapasse ou
iguale a popula��o do pa�s B, mantidas como taxas de
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



