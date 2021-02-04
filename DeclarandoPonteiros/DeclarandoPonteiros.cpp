#include <iostream>

int main()
{
	// entao para declarar uma variavel que seja considerada um ponteiro
	// basta colocar <tipo a ser apontado>* <nome da variavel> 

	// nullptr = ponteiro não inicializa com lixo de memória
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

	// endereco de memoria da variavel Numero. Ou seja onde ela está carregada
	// na memoria RAM. Lembra-se que o que para tela é o primeiro endereco da 
	// variavel numero, pois ela ocupa 4 enderecos, pois tem 4 bytes de tamanho.
	std::cout << "Endereco de Numero: " << &Numero << "\n";

	// ALGO IMPORTENTE: &ptr vai colocar na tela o endereço de memoria alocado para a variavel
	// ponteiro ou seja, qual lugar da RAM ele está alocado.
	// não estamos colocando na tela nada que esteja dentro das variaveis, pois para coloca oque está dentro das variáveis
	// nos usamos penas o nome da variavel!
	// exemplo std::cout << Numero
	// std::cout << ptr
	std::cout << "Endereco de ptr: " << &ptr << "\n";

	return 0;
}