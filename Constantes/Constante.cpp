#include <iostream>

// Para usar #define precisa colocar aqui abixo dos includes
//#define NUM_VIDAS 10
// Observe que não tem ; no final!!!

int main()
{
	const int NUM_VIDAS = 10;
	int TotalDeVidas;
	TotalDeVidas = NUM_VIDAS - 1;

	std::cout << "Total de Vidas: " << TotalDeVidas << "\n";
	std::cout << "Valor Constante NUM_VIDAS: " << NUM_VIDAS << "\n";
	std::cout << "Valor Constante NUM_VIDAS: " << NUM_VIDAS << "\n";
	std::cout << "Endereco na Memoria de NUM_VIDAS: " << &NUM_VIDAS << "\n\n";

	system("PAUSE");
}