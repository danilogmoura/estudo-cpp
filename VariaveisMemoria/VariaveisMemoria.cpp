#include <iostream>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int Numero = 10;
	double Salario = 4567.90;

	std::cout << "Tamanho variável Numero: " << sizeof(Numero) << " Bytes\n";
	std::cout << "Tamanho variável Salario: " << sizeof(Salario) << " Bytes\n";

	std::cout << "Endereço de memória da variável Numero: " << &Numero << "\n";
	std::cout << "Endereço de memória da variável Salario: " << &Salario << "\n";
	return 0;
}