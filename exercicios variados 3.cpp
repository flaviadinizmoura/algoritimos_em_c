#include <iostream>
using namespace std;

/*
	Name: EXERCICIO 4
	Author: FLAVIA MOURA
	Date: 15/03/23 21:19
	Description: 
*/

int main() 
{
	
//Escreva um programa que calcule e mostre a �rea de um trap�zio. Sabe-se que: A = ((base maior + base menor)* altura)/2.

   int basemaior, basemenor, altura, area;
   basemaior = 15;
   basemenor = 10;
   altura = 20;
   area = ((basemaior + basemenor)* altura)/2;
   printf (" valor da area %d ", area);

//Escreva um algoritmo que leia uma temperatura na escala Celsius (C)  e imprima o equivalente em Fahrenheit (F). Dados: (F�rmula de convers�o: F = 9/5 * C + 32)

   int celcius,fahrenheit;
   celcius = 28;
   fahrenheit = (9/5)*(celcius + 32);
   printf (" A temperatura em Fahrenheit e: %d ", fahrenheit);
   
//Escreva um algoritmo para calcular o consumo m�dio de um autom�vel (medido em Km/l), dado que s�o conhecidos a dist�ncia total percorrida e o volume de combust�vel consumido para percorr�-la (medido em litros). CM = DIST / VOL.

   int consumomedio, volume, km;
   volume = 25;
   km = 50;
   consumomedio = km/volume;
   printf (" o consumo medio e %d ", consumomedio);

 //Escreva um algoritmo para calcular o consumo m�dio de um autom�vel (medido em Km/l), dado que s�o conhecidos a dist�ncia total percorrida e o volume de combust�vel consumido para percorr�-la (medido em litros). CM = DIST / VOL.  
   
   int distancia, litro, consumom;
   cout << "digite a distancia:";
   cin >> distancia;
   cout << "digite o litro:";
   cin >> litro;
   consumom = distancia/litro;
   cout << " o consumo medio e:" << consumom << endl;
   
   
//O custo ao consumidor de um carro novo � a soma do custo de f�brica com a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo de f�brica. Supondo que a porcentagem do distribuidor seja de 12% e a dos impostos de 45%, prepare um algoritmo para ler o custo de f�brica do carro e imprimir o valor pago a distribuidora, o valor dos impostos e o custo total ao consumidor.

   int custofabrica, custodistribuidor, custoconsumidor, imposto;
   cout << " Digite o custo de Fabrica: R$ ";
   cin >> custofabrica;
   custodistribuidor = custofabrica * 0.12;
   imposto = custofabrica * 0.45;
   custoconsumidor = custofabrica + custodistribuidor + imposto;
   cout << " O Valor pago � Distribuidora foi de:R$ " << custodistribuidor <<endl;
   cout << " O valor dos Impostos e: R$ " << imposto << endl;
   cout << " O valor final do produto para o consumidor foi de: R$ " << custoconsumidor << endl;
   return 0;

}
