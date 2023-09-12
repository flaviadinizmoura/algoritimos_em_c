#include <iostream>
#include <stdio.h>
using namespace std;

/*
	Name: Flavia Moura
	Date: 01/04/23 01:08
	Description: Faça um programa que leia 10 nomes de frutas e informe a mensagem “Achei banana” quando a fruta for banana.
*/


int main() 
{
	std::string fruta;
{
	for (int cnt = 1; cnt <= 10; cnt++) {
    std::cout << "Digite o nome de fruta: ";
    std::cin >> fruta;

    if (fruta == "banana") {
    std::cout << "Achei banana\n";
}
}   
}   	
}

