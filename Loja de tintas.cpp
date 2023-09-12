#include <iostream>
#include <stdio.h>

/* Faça um programa para uma loja de tintas. O programa deve pedir o tamanho em metros quadrados da área a ser pintada.

Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00.

Informe ao usuário a quantidade de latas de tinta a serem compradas e o preço total. */

int main() {
	
	int LITROS_LATA = 18;
	float VALOR_LATA = 80.0;
	int COBERTURA_LATA = 3;
	int tam_area, quant_latas;
	float custo_total;
	
	printf("entre com o tamanho da area a ser pintada em metros quadrados:");
	scanf("%d",&tam_area);
	quant_latas = tam_area /(COBERTURA_LATA * LITROS_LATA);
{
                   custo_total = (VALOR_LATA * quant_latas);		
	}	
    printf("Quantidade de latas de tinta necessarias: %d\n", quant_latas);
    printf("Custo total das latas de tinta: R$%f\n", custo_total);
}

