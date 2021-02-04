#include <iostream>
#include <locale.h>
#include "FuncoesMenu.h"

// Aqui � COMO? como as func�es do arquivo .h ser�o implementadas?
// neste arquivo .cpp voc� coloca a implementa��o de todas as fun��es do arquivo .h relacionando

//Implementa��o das fun��es

//a fun��o n�o retorna nada, logo o tipo de retorno � vazio(void). Al�m disso a fun��o n�o possui nenhuma vari�vel local(Par�metros). Como n�o retorna nada n�o precisamos usar comando return
void ExibirMenu()
{
	setlocale(LC_ALL, "portuguese");

	do // as instru��es abaixo ser�o executadas pelo menos uma vez!
	{
		std::cout << "****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		// TO DO Fun��o Retornar EScolha

		//Aqui a fun��o chama outra fun��o e passar como argumento para a fun��o ProcessrEscolha a vari�vel escolha que cont�m o que foi digitado pelo usu�rio como op��o de escolha de menu

		//aqui a fun��o processar escolha deve receber como par�metro um inteiro. Colocamos abaixo a chamada da fun��o RetornarEscolha que ao ser executada ir� retornar (Return) um inteiro que foi digitado pelo usu�rio

	} while (ProcessarEscolha(RetornarEscolha()) != 3);//enquanto o retorno da fun��o RetornarEscolha for diferente de 3 o menu vai aparecer! pois voc� est� solicitando que fique em loop at� que escolha seja igual a 3 e resultado seja falso saindo do loop do-while
}

int RetornarEscolha()
{
	int escolha = 0;
	std::cout << "\nEscolha sua op��o: ";
	std::cin >> escolha;
	//Colocar a chamada da fun��o ProcessarEscolha
	ProcessarEscolha(escolha);
	return escolha;
}

//ProcessarEscolha recebe como par�metro um numero inteiro
//e armazena este argumento passado no par�metro TipoEscolha que � uma vari�vel local a esta fun��o. Significa que esta vari�vel somente existe na mem�ria quando a fun��o est� sendo executada. Quando a fun��o chegar a seu final esta vari�vel deixa de existir na mem�ria.
//Portanto fun��es s�o fundamentais para otimizar o uso de mem�ria, pois se todas estas vari�veis estivessem na fun��o main elas somente seriam destruidas quando o programa fosse fechado.
int ProcessarEscolha(int TipoEscolha)
{
	switch (TipoEscolha)
	{
	case 1: std::cout << "\nTicket Meia Entrada Comprada\n";
		break;
	case 2: std::cout << "\nTicket Inteira Comprado\n";
		break;
	case 3: std::cout << "\nSaindo Menu Tickets...\n";
		break;
	default: std::cout << "\nOp��o Inv�lida!!!\n";
	}

	return TipoEscolha;
}