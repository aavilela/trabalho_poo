#include <iostream>

#include "mob.h"

Mob::Mob()
{
	setNome("nenhum");
	pos = Posicao(0, 0);
	setVida(100);
	setAtaque(20);
	setDefesa(10);
}

std::string Mob::getNome()
{
	return nome;
}

void Mob::setNome(std::string str)
{
	this->nome = str;
}

Posicao Mob::getPos()
{
	return pos;
}

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
