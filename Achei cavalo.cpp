#include <iostream>
#include <stdio.h>
using namespace std;

/*
	Name: Flavia Moura
	Date: 01/04/23 01:08
	Description: Faça um programa que leia 10 nomes de animais e informe a mensagem “Achei cavalo” quando o nome do animal for cavalo.
*/

int main() 
{
	std::string animal;
{
	
	for (int cnt = 1; cnt <= 10; cnt++) {
    std::cout << "Digite o nome do animal: ";
    std::cin >> animal;

    if (animal == "cavalo") {
    std::cout << "Achei cavalo\n";
}
}
}  	
}

