#include <iostream>
//A diretiva de pr�-processador #include
//indica para incluir o arquivo de cabe�alho iostream

int main()
//fun��o principal. Todo programa C++ coma�a com esta
//fun��o principal main()
{
	//cout comando de sa�da de dados, neste caso est� solicitando para
	//colocar na saida padr�o(tela) a frase especificada
	std::cout << "Primeiro Codigo" << std::endl;

	/*endl indica para inserir um caracter de quebra 
	de linha na frase ("string")*/
	
	system("PAUSE");
	//chama comando PAUSE do sistema

	return 0;
	//retorna para o sistema operacional zero
	//zero � o padr�o para informar que tudo deu certo!
	//assim se a fun��o main der certo ela retornar� 0 (zero)
}