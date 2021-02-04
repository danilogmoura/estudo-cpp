#include <iostream>
//A diretiva de pré-processador #include
//indica para incluir o arquivo de cabeçalho iostream

int main()
//função principal. Todo programa C++ comaça com esta
//função principal main()
{
	//cout comando de saída de dados, neste caso está solicitando para
	//colocar na saida padrão(tela) a frase especificada
	std::cout << "Primeiro Codigo" << std::endl;

	/*endl indica para inserir um caracter de quebra 
	de linha na frase ("string")*/
	
	system("PAUSE");
	//chama comando PAUSE do sistema

	return 0;
	//retorna para o sistema operacional zero
	//zero é o padrão para informar que tudo deu certo!
	//assim se a função main der certo ela retornará 0 (zero)
}