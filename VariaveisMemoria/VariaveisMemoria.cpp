#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int Numero = 10;
	double Salario = 4567.90;

	std::cout << "Tamanho vari�vel Numero: " << sizeof(Numero) << " Bytes\n";
	std::cout << "Tamanho vari�vel Salario: " << sizeof(Salario) << " Bytes\n";

	std::cout << "Endere�o de mem�ria da vari�vel Numero: " << &Numero << "\n";
	std::cout << "Endere�o de mem�ria da vari�vel Salario: " << &Salario << "\n";
	return 0;
}