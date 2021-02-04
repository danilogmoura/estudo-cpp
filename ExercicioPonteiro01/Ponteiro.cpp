#include <iostream>

/*
	Crie uma variável de nome Numero do Tipo inteiro e valor inicial igual a 234;
	Crie um ponteiro de nome Ponteiro capaz de apontar para um variável do tipo inteiro.
	Troque o valor de Numero para 1456 usando Ponteiro
	Coloque o valor de Numero na tela usando Ponteiro
	Mostre o endereço da memória RAM em que estão carregados, alocados as variáveis Ponteiro e Numero
	Crie um outro ponteiro de nome OutroPtr
	Faça OutroPtr apontar para a mesma variável que ptr aponta.
	Usando Ponteiro some 200 ao valor contido em Numero
	Usando OutroPtr coloque na tela o valor de Numero
*/

int main()
{

	int Numero{ 234 };

	int* ptr = &Numero;
	
	std::cout << "Valor atual de Numero: " << Numero << "\n";

	*ptr = 123;
	std::cout << "Valor novo de Numero (alterado usando o ponteiro): " << *ptr << "\n";

	void* OutroPtr = ptr;

	*(int*)OutroPtr += 200;
	std::cout << "Valor novo de Numero (alterado usando o ponteiro): " << *(int*) OutroPtr << "\n";
	
	return 0;
}