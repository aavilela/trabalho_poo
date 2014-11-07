#include "heroi.h"

Heroi::Heroi() 
{	
	Arma espada;
	espada.setAtaque(15);
	setArmaEqp(espada);	
	setSprite('H');
}

int Heroi::UsarElemento(Elemento elem)
{
	//
}

char Heroi::getSprite()
{
	return sprite;
}

void Heroi::setSprite(char sprite)
{
	this->sprite = sprite;
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

Mochila Heroi::getMochila()
{
	return mochila;
}

void Heroi::setMochila(Mochila mochila)
{
	this->mochila = mochila;
}
