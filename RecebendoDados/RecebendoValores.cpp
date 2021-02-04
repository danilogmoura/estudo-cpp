#include <iostream>

int main() 
{
	
	int Numero01;
	int Numero02;

	int Resultado;

	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero01;
	std::cout << "Numero01: " << Numero01 << "\n";

	std::cout << "Digite o primeiro numero: ";
	std::cin >> Numero02;
	std::cout << "Numero02: " << Numero02 << "\n";

	Resultado = Numero01 + Numero02;
	std::cout << "A soma dos dois numeros " << Resultado << "\n\n";

	system("PAUSE");
	return 0;
}

