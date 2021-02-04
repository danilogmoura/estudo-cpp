#include <iostream>

class Casa
{
	//se o modificador de acesso não for indicado o padrão é ser private
	private:
		int NumQuartos{ 4 };
		float Tamanho{ 90.0f };
		bool bTemSuite{ true };

	public:
		void MostrarTamnho();
		int GetNumeroDeQuartos();
		void SetNumeroDeQuartos(int Num);
		bool TemSuite();
};

int main() {
	setlocale(LC_ALL, "portuguese");

	Casa CasaDePraia;
	
	CasaDePraia.SetNumeroDeQuartos(6);

	CasaDePraia.MostrarTamnho();
	std::cout << "\nNumero de quartos: " << CasaDePraia.GetNumeroDeQuartos();
	std::cout << "\nTem suite: " << CasaDePraia.TemSuite() ? std::cout << "Sim" : std::cout << "Não" << "\n";

	return 0;
}

void Casa::MostrarTamnho() 
{
	std::cout << "\nTamanho: " << Tamanho;
}

int Casa::GetNumeroDeQuartos() 
{
	return NumQuartos;
}

void Casa::SetNumeroDeQuartos(int Num) 
{
	if (Num <= 6 && Num >= 0) 
	{
		NumQuartos = Num;
	}
	else
	{
		std::cout << "\nNúmero de quartos Inválido\n";
	}
}

bool Casa::TemSuite() 
{
	return bTemSuite;
}