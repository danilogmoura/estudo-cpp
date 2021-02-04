#include <iostream>
#include "Matematica.h"

int main()
{
	float Numero1;
	float Numero2;

	std::cout << "\nDigite o primeiro numero: ";
	std::cin >> Numero1;

	std::cout << "\nDigite o segundo numero: ";
	std::cin >> Numero2;

	std::cout << "\n\nResultado Operadores Matematicos\n";

	std::cout << "\nSoma: " << Soma(Numero1, Numero2);
	std::cout << "\nSubtracao: " << Subtracao(Numero1, Numero2);
	std::cout << "\nDivisao: " << Divisao(Numero1, Numero2);
	std::cout << "\nMultiplicacao: " << Multiplicacao(Numero1, Numero2);
	std::cout << "\nPotencia: " << Potencia(Numero1, Numero2);
	std::cout << "\nRaiz Quadrada: " << RaizQuadrada(Numero1);
	std::cout << std::endl;

	return 0;
}