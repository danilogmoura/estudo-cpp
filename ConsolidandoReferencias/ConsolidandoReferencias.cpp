#include <iostream>

int main()
{
	int Numero{ 1024 };
	int Numero2{ 2048 };

	//Uma referencia nao pode ficar sem ser atribuida logo na sua criacao!!!
	// E uma referencia só pode ser atribuida uma UNICA VEZ!!!
	int &RefNum{ Numero2 };
	//Agora esta OK pois RefNum passa a ser uma referencia de Numero2

	RefNum = 5644;
	//Podemos alterar o valor do referenciado apenas com o nome da referencia sem precisar de *
	
	
	int* ptr = &Numero;
	*ptr = 4096;

	std::cout << "\nValor de Numero: " << *ptr << "\n";
	//No ciclo de vida de um ponteiro podemos reatribuir, colocar um novo endereço,
	//fazer ele apontar para outra variavel. Isso é PERMITIDO!!!
	ptr = &Numero2;
	*ptr = Numero + 2000; 
	
	return 0;
}