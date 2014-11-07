#include "pocao.h"

const int VAZIA = 0;
const int CURA = 1;
const int AUM_ATAQUE = 2; 
const int AUM_DEFESA = 3; 

Pocao::Pocao()
{
	setEfeito(VAZIA);	
}

Pocao::Pocao(int efeito)
{
	setEfeito(efeito);	
}

std::string Pocao::TrataEfeito()
{	
	if (efeito == VAZIA) return "VAZIA";
	else if (efeito == CURA) return "CURA";
	else if (efeito== AUM_ATAQUE) return "AUM_ATAQUE";
	else if (efeito == AUM_DEFESA) return "AUM_DEFESA";
}

int Pocao::UsarEfeito(int pontos)
{
	if (getEfeito() == CURA)
	{
		return pontos + 25;
	}
	if (getEfeito() == AUM_ATAQUE)
	{
		return pontos + 20;
	}
	if (getEfeito() == AUM_DEFESA) 
	{ 
		return pontos + 10; 
	}
}

int Pocao::getEfeito()
{
	return efeito;
}

void Pocao::setEfeito(int ef)
{
	this->efeito = ef;
}
