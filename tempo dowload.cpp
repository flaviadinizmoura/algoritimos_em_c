#include <iostream>
#include <stdio.h>

/* Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), 
calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos). */

int main() 
{
	
	float tam_arq, velocid,tempo;
	
	    printf ("Tamanho do arquivo para dowload em MB:");
	scanf ("%f/n",&tam_arq);
	
	
		printf ("Velocidade de um link de internet em Mbps:");
	scanf ("%f/n",&velocid);
		

	tempo = tam_arq / (velocid / 8)/60;
	{
			printf( "O tempo aproximado de dowload do arquivo utilizando o link e de %f minutos.\n", tempo);
	}
	
}
