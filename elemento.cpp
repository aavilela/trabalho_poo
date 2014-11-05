#include "elemento.h"

Elemento::Elemento()
{
	// ctor
}

std::string Elemento::getNome()
{
	return nome;
}

void Elemento::setNome(std::string str)
{
	this->nome = str;
}

int Elemento::getPeso()
{
	return peso;
}

void Elemento::setPeso(int p)
{
	this->peso = p;
}
