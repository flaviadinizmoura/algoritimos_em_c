#include <iostream>
#include <stdio.h>

/* Fa�a um Programa que pe�a os 3 lados de um tri�ngulo. O programa deve informar se os valores podem ser um tri�ngulo. Indique, caso os lados
 formem um tri�ngulo, se o mesmo �: equil�tero, is�sceles ou escaleno. Dicas: Tr�s lados formam um tri�ngulo quando a soma de quaisquer dois lados 
 for maior que o terceiro; Tri�ngulo Equil�tero: tr�s lados iguais; 
Tri�ngulo Is�sceles: todos os dois lados iguais; Tri�ngulo Escaleno: tr�s lados diferentes; */

int main() 
{
    float lado1, lado2, lado3;
    
    printf("Digite os tres lados do triangulo: ");
    scanf("%f %f %f", &lado1, &lado2, &lado3);
    
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) 
	{
        if (lado1 == lado2 && lado1 == lado3) {
            printf("Triangulo Equilatero\n");
        } 
		else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("Triangulo Isosceles\n");
        } 
		else {
            printf("Triangulo Escaleno\n");
        }
    } 
	else {
        printf("Nao forma um triangulo\n");
    }
    return 0;
}
