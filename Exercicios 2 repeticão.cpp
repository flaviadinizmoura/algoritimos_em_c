#include <stdio.h>

/* Faça um programa que leia e valide as seguintes
informações: Idade: entre 0 e 150; Salário: maior que
zero; Sexo: 'f' ou 'm'; Estado Civil: 's', 'c', 'v', 'd'; */

int main() {
	
	 char idade, sexo, estado_civil;
	 int maior_zero, salario;
	 salario = 0;
	 

    printf ("Digite uma Idade entre 0 e 150:");
    scanf ("%d/n", &idade);

while(idade < 0 || idade > 150){
           
	printf ("valor Invalido");
	  
	   printf ("Digite uma Idade entre 0 e 150: \n");
       scanf ("%d/n", &idade); 
	   
	   }
	        
			{
	          printf ("Digite o valor do seu salario: \n");
              scanf ("%d/n", &salario); }
              
            {
               printf("Informe seu sexo M - masculino ou F - Feminino: ");
               scanf(" %c", &sexo);}
                   
				if (sexo == 'M' || sexo == 'm') {
                printf("Masculino!\n");} 
                
	               else if (sexo == 'F' || sexo == 'f') {
                   printf("Feminino!\n");}

               {
	               printf("Informe seu Estado Civil: ");
                   scanf(" %c", &estado_civil);}
                   
				   if (estado_civil == 'S' || estado_civil == 's') {
                   printf("solteiro!\n");} 
                   
	               else if (estado_civil == 'C' || estado_civil == 'c') {
                   printf("casado!\n");}                  
				   
				   else if (estado_civil == 'V' || estado_civil == 'v') {
                   printf("viuvo!\n");}
                   
                   else if (estado_civil == 'D' || estado_civil == 'd') {
                   printf("divorciado!\n");}
}


