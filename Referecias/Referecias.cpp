#include <iostream>

int main()
{
	int Numero{ 1024 };
	char Letra{ 'A' };

	/*
		Declara uma referencia
		Significa que foi criado um apelido, um rotulo, um alias para a variavel Numero
		Neste caso nao e criada uma regia de memoria que vai conter algo dentro e que 
		seria chamada Ref. Ref nao tem endereco na RAM..
		Nao e uma variavel que podemos colocar algo dentro!
		E apenas um atalho para Numero.
	*/
	int& Ref = Numero;

	// Para colocar na tela o valor que a referencia referencia basta coloca o nome da referencia.
	// Nao precisa desreferenciar como nos ponteiros. *ptr
	std::cout << "Valor de Numero usando Ref: " << Ref << "\n";
	std::cout << "Valor endereco de Numero: " << &Numero << "\n";

	//Observe que &Ref ira retornar o endereco de Numero pois uma referencia nasce e fica como novo
	//rotulo da variavel que ela referencia estando portanto no mesmo endereco de Numero, neste caso.
	std::cout << "Valor endereco de Ref: " << &Ref << "\n";
	
	int* ptr = &Numero;
	std::cout << "\nValor do endereco de ptr: " << &ptr << "\n";
	std::cout << "Valor de Numero usando ptr: " << *ptr << "\n";
	std::cout << "Valor de endereco contido dentro de ptr: " << ptr << "\n";

	return 0;
}