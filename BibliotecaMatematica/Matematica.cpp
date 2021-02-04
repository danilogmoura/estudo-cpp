#include <iostream>
#include <math.h>
#include "Matematica.h"

int NumeroGlobal = 5;

//Variavel Global pois declarei fora de qualquer
//função. Logo ela será acessivel em qualquer função
// incluindo a função main()

float Soma(float num1, float num2)
{
	// esta variável só é acessivel dentro da função soma
	int NumeroLocal = 5;

	return num1 + num2;
}

float Subtracao(float num1, float num2)
{
	return num1 - num2;
}

float Multiplicacao(float num1, float num2)
{
	return num1 * num2;
}

float Divisao(float num1, float num2)
{
	return num1 / num2;
}

float Potencia(float num1, float num2)
{
	return pow(num1, num2);
}

float RaizQuadrada(float num1)
{
	return sqrt(num1);
}
