#include <iostream>

//PROTOTIPO

/*
	Voc� pode colocar valores padr�es no prot�tipo e ent�o
	quando voc� chamar a fun��o poder� omitir argumentos pois
	a fun��o ir� utilizar o argumento padr�o se voc� n�o
	informar o argumento quando da chamada da fun��o

	Para coloca um valor padr�o basta colocar =
*/

void Coordenadas(int x = 5, int y = 7, int z = 1);
/*
	N�o � obrigado a colocar todos os argumentos padr�o.
	Por�m se deixar algum de fora deve seguir a 
	regra que precisa colocar da direita para esquerda.
*/

int main()
{
	Coordenadas(5, 4, 3);


	/*
		apesar da fun��o solicitar na chamada a coloca��o
		de 3 argumentos que ser�o enviados aos parametros x, y, z.
		Esta chamada sem voc� colocar argumento ir� funcionar, pois
		eles tem argumentos padr�o.
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