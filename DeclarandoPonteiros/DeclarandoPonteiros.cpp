#include <iostream>

int main()
{
	// entao para declarar uma variavel que seja considerada um ponteiro
	// basta colocar <tipo a ser apontado>* <nome da variavel> 

	// nullptr = ponteiro n�o inicializa com lixo de mem�ria
	int* ptr{ nullptr };

	int Numero{ 101 };

	/*
		solicitand que a valiavel ponteiro de nome ptr tenha dentro dela o endereco
		de memoria da variavel numero. Logo ptr contera o primeiro endereco em que numero esta
		alocado na memoria RAM.
	*/
	ptr = &Numero;

	// atribuindo valo a variavel Numero a partir do endereco do ponteiro ptr
	*ptr = 103;

	// endereco de memoria da variavel Numero. Ou seja onde ela est� carregada
	// na memoria RAM. Lembra-se que o que para tela � o primeiro endereco da 
	// variavel numero, pois ela ocupa 4 enderecos, pois tem 4 bytes de tamanho.
	std::cout << "Endereco de Numero: " << &Numero << "\n";

	// ALGO IMPORTENTE: &ptr vai colocar na tela o endere�o de memoria alocado para a variavel
	// ponteiro ou seja, qual lugar da RAM ele est� alocado.
	// n�o estamos colocando na tela nada que esteja dentro das variaveis, pois para coloca oque est� dentro das vari�veis
	// nos usamos penas o nome da variavel!
	// exemplo std::cout << Numero
	// std::cout << ptr
	std::cout << "Endereco de ptr: " << &ptr << "\n";

	return 0;
}