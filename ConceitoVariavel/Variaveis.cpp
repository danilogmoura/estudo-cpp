#include <iostream>
#include <tchar.h>

int main() 
{
	//configuração para mostrar acentros
	_tsetlocale(LC_ALL, _T("portuguese"));
	int NumVidas = 5;
	int Pontuacao = 1350;

	std::cout << "********** INICIO DO JOGO **********" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Potuação: " << Pontuacao << std::endl;
	std::cout << "Endereço que NumVidas Ocupa na Memória RAM: " << &NumVidas << std::endl;
	std::cout << "Endereço que Pontuação Ocupa na Memória RAM: " << &Pontuacao << std::endl;
	
	std::cout << "Tamanho da variável NumVidas: " << sizeof(NumVidas) << "Bytes" << std::endl;
	std::cout << "Tamanho da variável Pontuação: " << sizeof(Pontuacao) << "Bytes" << std::endl;

	std::cout << "********** DURANTE O JOGO **********" << std::endl;
	Pontuacao = Pontuacao + 150;
	NumVidas -= 1;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Potuação: " << Pontuacao << std::endl;

	system("PAUSE");
	return 0;
}