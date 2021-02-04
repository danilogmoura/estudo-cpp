#include <iostream>
#include <tchar.h>

int main() 
{
	//configura��o para mostrar acentros
	_tsetlocale(LC_ALL, _T("portuguese"));
	int NumVidas = 5;
	int Pontuacao = 1350;

	std::cout << "********** INICIO DO JOGO **********" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Potua��o: " << Pontuacao << std::endl;
	std::cout << "Endere�o que NumVidas Ocupa na Mem�ria RAM: " << &NumVidas << std::endl;
	std::cout << "Endere�o que Pontua��o Ocupa na Mem�ria RAM: " << &Pontuacao << std::endl;
	
	std::cout << "Tamanho da vari�vel NumVidas: " << sizeof(NumVidas) << "Bytes" << std::endl;
	std::cout << "Tamanho da vari�vel Pontua��o: " << sizeof(Pontuacao) << "Bytes" << std::endl;

	std::cout << "********** DURANTE O JOGO **********" << std::endl;
	Pontuacao = Pontuacao + 150;
	NumVidas -= 1;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Potua��o: " << Pontuacao << std::endl;

	system("PAUSE");
	return 0;
}