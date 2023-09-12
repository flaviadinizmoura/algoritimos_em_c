#include <iostream>
/*
	Name: EXERCICIO 3
	Author: FLAVIA MOURA
	Date: 15/03/23 20:33 
*/

using namespace std;
int main ()
{
//Faça um algoritmo que receba um numero e imprima esse valor
	int num;
	cout << " Digite um numero: ";
	cin >> num;
	cout << " O numero informado foi " << num << endl;
	
//Faça um algoritmo que receba um numero, calcule e imprima o seu quadrado.	
	int num1, quadrado;
	cout << " Digite um numero: ";
	cin >> num1;
	quadrado = num1*num1;
	cout << " O quadrado de " << num1 << " e "<< quadrado << endl;
	
//Faça um algoritmo que receba a quantidade e o preço de custo de determinado produto. Imprima o valor de custo total deste item.
	int quantidade;
	double preco_custo, custo_total;
	cout << " digite a quantidade do produto: ";
	cin >> quantidade;
	cout << " digite o preco de custo do produto: ";
	cin >> preco_custo;
	custo_total = quantidade * preco_custo;
	cout <<" o custo total do produto e: R$ " << custo_total << endl;

//Faça um algoritmo que recebe dois números, calcule a soma e imprima o resultado.
    int num2,  num3, soma;
	cout << " digite o primeiro numero: ";
	cin >> num2;
	cout << " digite o segundo numero: ";
	cin >> num3;
	soma= num2 + num3;
	cout << " a soma dos dois numeros e: " << soma << endl;

//Faça um algoritmo que leia três notas de um aluno, calcule e imprima a média de suas notas.
    int nota1, nota2, nota3, media;
	cout << " digite a nota1: ";
	cin >> nota1;
	cout << " digite a nota2: ";
	cin >> nota2;
	cout << " digite a nota3: ";
	cin >> nota3;
	media = nota1 + nota2 + nota3 /3;
	cout << " a media das notas e: " << media << endl;

    return 0;
 } 

   
   

