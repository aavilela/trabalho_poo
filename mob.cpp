#include <iostream>

#include "mob.h"

Mob::Mob()
{
	//pos = Posicao();
	setNome("nenhum");
	setVida(100);
	setX(2);
	setY(2);
	setAtaque(20);
	setDefesa(10);
}

int Mob::getX()
{
	return x;
}

void Mob::setX(int x)
{
	this->x = x;
}

int Mob::getY()
{
	return y;
}

void Mob::setY(int y)
{
	this->y = y;
}

std::string Mob::getNome()
{
	return nome;
}

void Mob::setNome(std::string str)
{
	this->nome = str;
}

/*Posicao Mob::getPos()
{
	return pos;
}*/

int Mob::getVida()
{
	return vida;
}

void Mob::setVida(int v)
{
	this->vida = v;
}

int Mob::getAtaque()
{
	return ataque;
}

void Mob::setAtaque(int atq)
{
	this->ataque = atq;
}

int Mob::getDefesa()
{
	return defesa;
}

void Mob::setDefesa(int def)
{
	this->defesa = def;
}
