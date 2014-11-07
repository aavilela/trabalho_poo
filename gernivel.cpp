#include <iostream>
#include "gernivel.h"

GerNivel::GerNivel(int n)
{
	niveis = new Nivel[n];
	atual = 0;
}

Nivel GerNivel::getNivel()
{
	return niveis[atual];
}

void GerNivel::Prox()
{
	int tmp = getAtual() + 1;
	setAtual(tmp);
}

void GerNivel::Ant()
{
	int tmp = getAtual() - 1;
	setAtual(tmp);
}

int GerNivel::getAtual()
{
	return atual;
}

void GerNivel::setAtual(int atual)
{
	this->atual = atual;
}
