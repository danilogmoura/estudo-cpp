#include <iostream>

//PROTOTIPO

/*
	Você pode colocar valores padrões no protótipo e então
	quando você chamar a função poderá omitir argumentos pois
	a função irá utilizar o argumento padrão se você não
	informar o argumento quando da chamada da função

	Para coloca um valor padrão basta colocar =
*/

void Coordenadas(int x = 5, int y = 7, int z = 1);
/*
	Não é obrigado a colocar todos os argumentos padrão.
	Porém se deixar algum de fora deve seguir a 
	regra que precisa colocar da direita para esquerda.
*/

int main()
{
	Coordenadas(5, 4, 3);


	/*
		apesar da função solicitar na chamada a colocação
		de 3 argumentos que serão enviados aos parametros x, y, z.
		Esta chamada sem você colocar argumento irá funcionar, pois
		eles tem argumentos padrão.
	*/
	Coordenadas();
	return 0;
}

void Coordenadas(int x, int y, int z)
{
	x *= 10;
	y *= 10;
	z *= 10;
	
	std::cout << "(" << x << " - " << y << " - " << z << ")\n";
}