#include <iostream>
#include <stdio.h>

using namespace std;
/*
	Name: Flávia Moura
	Tipo: Estrutura de Decisão
	Date: 22/03/23 19:22 
*/

int main() 
{
//1)	Faça um Programa que peça dois números e imprima o maior deles.
	
	int num1, num2;
	
	cout << " digite o primeiro numero: ";
	cin >> num1;
	cout << " digite o segundo numero: ";
	cin >> num2;
	
		if ( num1 > num2 ){
		cout << " o primeiro numero e maior:" << num1 << endl;}
		else if (num2 > num1){
		cout << " o segundo numero e maior:" << num2 <<endl;	}
		else {
		cout << " Os dois numeros sao iguais!" <<endl;	
		}
				
//2)	Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.
	
    int val;
		
	cout << " digite o valor: ";
	cin >> val;
	
        if ( val > 0 ){
		cout << " o valor e positico:" << endl;}
		else if (val < 0){
		cout << " o valor e negativo:" <<endl;	}
		else {
		cout << " O valor e igual a Zero!" <<endl;	
		}
		
//3)	Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.

    char sexo;
		
	cout << " digite o sexo: ";
	cin >> sexo;
	
        if ( sexo == 'F' || sexo =='f' ){
		cout << " o sexo e Feminino:" << endl;}
		else if (sexo == 'M'|| sexo =='m'){
		cout << " o sexo Masculino:" <<endl;	}
		else {
		cout << " Sexo invalido!" <<endl;	
		}


//4)	Faça um Programa que verifique se uma letra digitada é vogal.

    char le;
		
	cout << " digite uma letra: ";
	cin >> le;
	
        if ( le == 'a'|| le =='A'|| le == 'e'|| le == 'E'|| le == 'i' || le =='I'|| le == 'o'|| le == 'O'|| le =='u'|| le =='U' ){
		cout << " a letra e vogal: " << endl;}
		else {
		cout << " Nao e vogal" <<endl;	
		}

//5)	Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada pelo aluno e apresentar: A mensagem "Aprovado", se a média alcançada for maior ou igual a sete; A mensagem "Reprovado", se a média para menor do que sete; A mensagem "Aprovado com Distinção", se a média for igual a dez.

    int nota1, nota2, media;
    
	cout << " digite a nota1: ";
	cin >> nota1;
	cout << " digite a nota2: ";
	cin >> nota2;
	media = nota1 + nota2 / 2;
	
        if ( media >= 7 && media < 10)
		cout << " aprovado " ;
		else if ( media == 10)
		cout << " aprovado com distincao ";
		else 
		cout << " reprovado " ;			
		
//6)	Faça um Programa que leia três números e mostre o maior deles.

    int v1,v2,v3, maior;
    
    cout << " digite valor 1: ";
	cin >> v1;
	cout << " digite valor 2: ";
	cin >> v2;
	cout << " digite valor 3: ";
	cin >> v3;
	
		if ( v1 > v2 && v1 > v3 )	
		maior = v1;
		
	    else if ( v2 > v1 && v2 > v3 ) 
		maior = v2;
		
		else	
		maior = v3;
		
		cout << " maior numero e: " << maior << endl;
	
//7)	Faça um Programa que leia três números e mostre o maior e o menor deles. 
    
	int v4,v5,v6, maior1, menor;
    
    cout << " digite valor 1: ";
	cin >> v4;
	cout << " digite valor 2: ";
	cin >> v5;
	cout << " digite valor 3: ";
	cin >> v6;
	
		if ( v4 > v5 && v4 > v6 )	
		maior1 = v4;
		
	    else if ( v5 > v4 && v5 > v6 ) 
		maior1 = v5;
		
		else	
		maior1 = v6;
	
	    cout << " exiba o maior numero: " << maior1 << endl;
	    
	    if ( v4 < v5 && v4 < v6 )	
		menor = v4;
		
	    else if ( v5 < v4 && v5 < v6 ) 
		menor = v5;
		
		else	
		menor = v6;
	    
	    cout << " exiba o menor numero " << menor << endl;
	
		return 0;
}
