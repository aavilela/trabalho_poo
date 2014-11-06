#include "arma.h"

Arma::Arma()
{
	setNome("Espada iniciante");
	setPeso(5);
	setAtaque(20);
}

int Arma::getAtaque()
{
	return ataque;
}

void Arma::setAtaque(int ataque)
{
	this->ataque = ataque;
}


