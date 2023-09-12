#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int i, vetN1[5], vetN2[5];
	
	for (i=0; i<=4; i++){
		printf("Entre com o numero para ser armazenado\n");
	    scanf("%d", &vetN1[i]);
	}
	for (i=0; i<=4; i++){	
      vetN1[i] = vetN2[i]+2;
}
    printf ("\n\n Os valores armazenados no novo vetor sao: \n");
    for(i=0; i<=4; i++){
    printf("%d", vetN1[i]);	
	}
	printf ("\n\n Os valores atualizados e armazenados no novo vetor sao: \n");
    for(i=0; i<=4; i++){
    printf("%d", vetN2[i]);		
	}
}


