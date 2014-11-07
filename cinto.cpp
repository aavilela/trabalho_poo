#include "cinto.h"
#include <iostream>

const int NAO_ACHOU = -1;

Cinto::Cinto()
{
	setQtd(0);
}

int Cinto::GuardarPocao(Pocao poc)
{
	if (qtd < 5)
	{
		pocoes[qtd] = poc;
		IncremQtd();		
		return 1;
	}
	else{
		std::cout << "Cinto esta cheio!" << std::endl;
		return 0;
	}
}

// Passar indice sempre da forma [0...n]
Pocao Cinto::RemoverPocao(int ind)
{
	if (ind != NAO_ACHOU){
		Pocao poc = pocoes[ind];
		int i;
		// foi retirado 1 de qtd para se adequar ao indice [0...n]
		for (i = ind; i < qtd - 1; i++)
		{
			pocoes[ind] = pocoes[ind+1];
		}	
		DecremQtd();
		return poc;
	}

}

int Cinto::CheckDisp(int efeito)
{
	int i;
	for (i = 0; i < qtd  ; i++)
	{
		if (pocoes[i].getEfeito() == efeito)
		{
			std::cout << i << std::endl;
			return i;
		}
	}

	std::cout << "O cinto não possui uma pocao com efeito " << efeito << std::endl;

	return NAO_ACHOU;
}

void Cinto::Imprimir()
{
	std::cout << "CINTO: ";
	if( qtd > 0 ) std::cout << "===";
	else std::cout << "Vazio";
	for(int i = 0; i < qtd; i++)
	{
		std::cout << "[" << getPocoes(i).TrataEfeito() << "]=";
	}
	if( qtd != 0 )std::cout << "===" << std::endl;
	else std::cout << std::endl;
	std::cout << std::endl;
}

// dando erro
Pocao Cinto::getPocoes(int ind)
{
	return pocoes[ind];
}

void Cinto::setPocoes(Pocao poc, int ind)
{
	this->pocoes[ind] = poc;
}
int Cinto::getQtd()
{
	return qtd;
}

void Cinto::setQtd(int qtd)
{
	this->qtd = qtd;
}

void Cinto::IncremQtd()
{
	int tmp = getQtd();
	setQtd(++tmp);
}

void Cinto::DecremQtd()
{
	int tmp = getQtd();
	setQtd(--tmp);
}
