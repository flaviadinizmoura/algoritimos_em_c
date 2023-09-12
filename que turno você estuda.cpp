#include <iostream>
#include <stdio.h>

/* Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N-Noturno.
Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso. */

int main() {

    char turno;
    printf("Digite o turno em que voce estuda (M-matutino, V-vespertino, N-noturno): ");
    scanf(" %c", &turno);
    
    if (turno == 'M' || turno == 'm') {
        printf("Bom Dia!\n");
    } 
	else if (turno == 'V' || turno == 'v') {
        printf("Boa Tarde!\n");
    } 
	else if (turno == 'N' || turno == 'n') {
        printf("Boa Noite!\n");
    } 
	else {
        printf("Valor Invalido!\n");
    }
    return 0;
}


