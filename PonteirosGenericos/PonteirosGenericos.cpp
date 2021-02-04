#include <iostream>

int main()
{

	int Numero{ 4890 };
	char Letra{ 'E' };

	/*
		� �til quando voc� por exemplo retornar algo de alguma fun��o e atribuir a um ponteiro.
		Neste caso voc� n�o sabe de antem�o que tipo de dado voc� vai retornar e assim depois voc�
		pode especificar qual tipo de dado o ponteiro void* passar� a apontar
	*/
	void* ptrG = &Letra;

	/*
		Agora ptrG passa a apontar para a variavel Letra
	*/
	ptrG = &Letra;

	/*
		Precisa indicar o tipo, pois s� assim ele saber� quantos byter percorer.
		Logo voc� deve indicar que o ponteiro ptrG est� apontando para um char via cast

		primeiro voc� faz o cast e depois coloca o sinal de desreferenciamento
		*(cast para o tipo desejado*) NomeDoPonteiroGenerico
		*(char*) ptrG 
		
		Agora o compilador saber que devera ler 1 (byte) para colocar o valor na tela
	*/
	std::cout << "Valor de Letra via ptrG = " << *(char*) ptrG << "\n";

	ptrG = &Numero;
	std::cout << "Valor de Numero via ptrG = " << *(int*)ptrG << "\n";

	return 0;
}