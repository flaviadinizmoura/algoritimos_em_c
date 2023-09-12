#include <iostream>
#include <stdio.h>

/* Faça um Programa que peça os 3 lados de um triângulo. O programa deve informar se os valores podem ser um triângulo. Indique, caso os lados
 formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno. Dicas: Três lados formam um triângulo quando a soma de quaisquer dois lados 
 for maior que o terceiro; Triângulo Equilátero: três lados iguais; 
Triângulo Isósceles: todos os dois lados iguais; Triângulo Escaleno: três lados diferentes; */

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
