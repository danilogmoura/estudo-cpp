#include <iostream>

/*
	Agora estamos indicando que a funcao tera dois parametros que serao referencias
	dos argumentos passados para esta funcao
	Ou seja o que for enviado para esta funcao passara a ser referenciado
	por Num1 e Num2 respectivamente.
*/
void TrocaNumeros(int& Num1, int& Num2);

/*
	Referencia. Só que agora utilizando ponteiro
	Lembre-se ponteiros sao variaveis que possuem dentro delas um endereco de outra variavel
	Alem disse eles precisam ser desreferenciados para chegar ao valor apontado ou altera-lo

	Aqui foi indifica que a funcao deve receber endereco de memoria, pois trata-se de dois ponteiros.
	Entao quando enviar para funcao voce deve enviar o enderecos memoria das variaveis.
*/ 
void TrocaNumeros2(int* Num1, int* Num2);

int main()
{
	setlocale(LC_ALL, "portuguese");

	int Numero1;
	int Numero2;

	std::cout << "\nPor referencia (&)";
	std::cout << "\nDigite o primero número: ";
	std::cin >> Numero1;
	
	std::cout << "Digite o segundo número: ";
	std::cin >> Numero2;

	std::cout << "\nValores antes da troca\n";
	std::cout << "Numero 1 = " << Numero1 << "\n";
	std::cout << "Numero 2 = " << Numero2 << "\n";

	std::cout << "\nValores depois da troca\n";

	TrocaNumeros(Numero1, Numero2);
	std::cout << "Numero 1 = " << Numero1 << "\n";
	std::cout << "Numero 2 = " << Numero2 << "\n";

	std::cout << "\n\nPor referencia usando ponteiros (*)";
	std::cout << "\nDigite o primero número: ";
	std::cin >> Numero1;

	std::cout << "Digite o segundo número: ";
	std::cin >> Numero2;

	std::cout << "\nValores antes da troca\n";
	std::cout << "Numero 1 = " << Numero1 << "\n";
	std::cout << "Numero 2 = " << Numero2 << "\n";

	std::cout << "\nValores depois da troca\n";

	TrocaNumeros2(&Numero1, &Numero2);
	std::cout << "Numero 1 = " << Numero1 << "\n";
	std::cout << "Numero 2 = " << Numero2 << "\n";

	return 0;
}

/*
	Agora Num1 e Num2 não recebem simplemente uma copia do valor de Numero1 e Numero2.
	Eles passam a ser Referencias de Numero1 e Numero2 respectivamente. Assim se eles alterarem o valor
	isso ira aferar as variaveis, pois agora eles sao referencias!
*/
void TrocaNumeros(int& Num1, int& Num2)
{
	int Temp{ Num1 };
	Num1 = Num2;
	Num2 = Temp;
}

void TrocaNumeros2(int* Num1, int* Num2)
{
	int Temp{ *Num1 };
	*Num1 = *Num2;
	*Num2 = Temp;
}
