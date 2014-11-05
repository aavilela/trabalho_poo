#include "heroi.h"

Heroi::Heroi()
{
	// ctor
}

int Heroi::UsarElemento(Elemento elem)
{
	//
}

Cinto Heroi::getCinto()
{
	return cinto;
}

void Heroi::setCinto(Cinto cin)
{
	this->cinto = cin;
}

Arma Heroi::getArmaEqp()
{
	return armaEqp;
}

void Heroi::setArmaEqp(Arma arma)
{
	this->armaEqp = arma;
}
