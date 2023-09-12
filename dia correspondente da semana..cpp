#include <stdio.h>

/* Faça um Programa que leia um número e exiba o dia correspondente da semana. 
(1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido. */

int main() 
{
    int dia;
    
    printf("Digite um numero correspondente ao dia da semana (1-Domingo, 2-Segunda, 3-terca, 4-quarta, 5-quinta, 6-sexta, 7-Sabado): ");
    scanf("%d", &dia);
    
    if (dia == 1) {
        printf("Domingo\n");
    } 
	else if (dia == 2) {
        printf("Segunda\n");
    } 
	else if (dia == 3) {
        printf("Terca\n");
    } 
	else if (dia == 4) {
        printf("Quarta\n");
    } 
	else if (dia == 5) {
        printf("Quinta\n");
    } 
	else if (dia == 6) {
        printf("Sexta\n");
    } 
	else if (dia == 7) {
        printf("Sabado\n");
    } 
	else {
        printf("Valor Invalido!\n");
    }
    return 0;
}
