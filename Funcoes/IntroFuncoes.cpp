#include <iostream>

int SomarUmNumero(int Numero, int NumeroASerSomado)
{
	int SomaDosNumeros = Numero + NumeroASerSomado;
	return SomaDosNumeros;
}

void Mensagem()
{
	std::cout << "\nMensagem de Marte... Chegamos bem... \n\n";
}

int main() 
{ 
	int Numero;
	int NumeroASerSomado;

	Mensagem();

	std::cout << "Digite um numero: ";
	std::cin >> Numero;

	std::cout << "Digite o numero a ser somado: ";
	std::cin >> NumeroASerSomado;

	std::cout << "A soma deste numero " << Numero << " com o numero " <<
		NumeroASerSomado << " sera: " << SomarUmNumero(Numero, NumeroASerSomado) << "\n";

	return 0; 
}