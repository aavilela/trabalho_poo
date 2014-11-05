#include "pocao.h"

const int CURA = 0;
const int AUM_ATAQUE = 1; 
const int AUM_DEFESA = 2; 

Pocao::Pocao()
{
	setEfeito(CURA);	
}

Pocao::Pocao(int efeito)
{
	setEfeito(efeito);	
}

/*std::string Pocao::TrataEfeito(int efeito)
{	
	if (efeito == CURA) return "CURA";
	else if (efeito== AUM_ATAQUE) return "AUM_ATAQUE";
	else if (efeito == AUM_DEFESA) return "AUM_DEFESA";
}*/

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
