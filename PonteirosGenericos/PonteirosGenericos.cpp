#include <iostream>

int main()
{

	int Numero{ 4890 };
	char Letra{ 'E' };

	/*
		é útil quando você por exemplo retornar algo de alguma função e atribuir a um ponteiro.
		Neste caso você não sabe de antemão que tipo de dado você vai retornar e assim depois você
		pode especificar qual tipo de dado o ponteiro void* passará a apontar
	*/
	void* ptrG = &Letra;

	/*
		Agora ptrG passa a apontar para a variavel Letra
	*/
	ptrG = &Letra;

	/*
		Precisa indicar o tipo, pois só assim ele saberá quantos byter percorer.
		Logo você deve indicar que o ponteiro ptrG está apontando para um char via cast

		primeiro você faz o cast e depois coloca o sinal de desreferenciamento
		*(cast para o tipo desejado*) NomeDoPonteiroGenerico
		*(char*) ptrG 
		
		Agora o compilador saber que devera ler 1 (byte) para colocar o valor na tela
	*/
	std::cout << "Valor de Letra via ptrG = " << *(char*) ptrG << "\n";

	ptrG = &Numero;
	std::cout << "Valor de Numero via ptrG = " << *(int*)ptrG << "\n";

	return 0;
}