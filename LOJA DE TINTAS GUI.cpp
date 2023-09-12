#include <stdio.h>

int main()
{

    int media_por_litro = 3;
    int valor_lata = 80;
    int litro_lata = 18;

    float tamanho_area, litros_necessarios; 
	int latas_necessaria;

    printf("Informe o Tamanho em metros quadrados a serem pintados: \n");
    scanf("%f",&tamanho_area);

    litros_necessarios = tamanho_area / media_por_litro;
    latas_necessaria = litros_necessarios / litro_lata;

    if(litros_necessarios - (latas_necessaria * litro_lata) > 0){
    latas_necessaria++;
}

float valor_total = latas_necessaria * valor_lata;

printf("latas Necessarias: %d\n", latas_necessaria);
printf("O preco total e de: %.2f \n", valor_total);

}
