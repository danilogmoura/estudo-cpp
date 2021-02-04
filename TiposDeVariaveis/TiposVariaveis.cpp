#include <iostream>
#include <iomanip>

int main() {

	int Numero;
	float Numero2;
	double Numero3 = 45245.904555;

	Numero = 45;
	Numero2 = 55.56f;

	char Caractere = '3';
	char Caractere2 = 'k';
	
	bool bAchou;
	bAchou = 1;

	// qualquer coisa diferente de zero vira true ao ser atribuido
	// a uma variável tipo bool!
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = 0;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = true;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = false;
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = 'd';
	std::cout << "Valor de bAchou: " << bAchou << "\n";
	bAchou = "1023460A";
	std::cout << "Valor de bAchou: " << bAchou << "\n\n";

	std::cout << "Valor Numero: " << Numero << std::endl;
	std::cout << "Tamanho da Variavel Numero: " << sizeof(Numero) << " Bytes" <<std::endl;
	std::cout << "Endereco Carregado na memoria: " << &Numero << "\n\n";

	std::cout << "Valor Numero2: " << Numero2 << std::endl;
	std::cout << "Tamanho da Variavel Numero2: " << sizeof(Numero2) << " Bytes" << std::endl;
	std::cout << "Endereco Carregado na memoria: " << &Numero2 << "\n\n";

	std::cout << "Valor Numero3: " << std::setprecision(12) << Numero3 << std::endl;
	std::cout << "Tamanho da Variavel Numero3: " << sizeof(Numero3) << " Bytes" << std::endl;
	std::cout << "Endereco Carregado na memoria: " << &Numero3 << "\n\n";

	std::cout << "Valor Caractere: " << Caractere << std::endl;
	std::cout << "Tamanho da Variavel Caractere: " << sizeof(Caractere) << " Bytes" << std::endl;
	std::cout << "Endereco Carregado na memoria: " << (void*)&Caractere << "\n\n";

	std::cout << "Valor Caractere2: " << Caractere2 << std::endl;
	std::cout << "Tamanho da Variavel Caractere2: " << sizeof(Caractere2) << " Bytes" << std::endl;
	std::cout << "Endereco Carregado na memoria: " << (void *)&Caractere2 << std::endl;

	system("PAUSE");
	return 0;
}