#include <iostream>

int main() 
{

	int Numero{ 4096 };

	// iniciar e declarar a variavel ponteiro
	int* ptr = &Numero;
	int* ptr2 = ptr;

	std::cout << "\nValor da variavel Numero: " << Numero << "\n";
	std::cout << "\nValor da variavel ptr: " << ptr << "\n";

	std::cout << "\nValor do endereco da variavel Numero : " << &Numero << "\n";
	std::cout << "\nValor do endereco da variavel ptr: " << &ptr << "\n";
	
	std::cout << "\nValor contido na variavel apontada por ptr: " << *ptr << "\n";

	*ptr = 20063;

	std::cout << "\nValor contido na variavel apontada por ptr: " << *ptr << "\n";
	std::cout << "\nValor da variavel Numero: " << Numero << "\n";



	return 0;
}