#include "casa.h"

const int VAZIO = 0;
const int CHAO_TIPO = 1;
const int MURO_TIPO= 2; 
const int SAIDA_TIPO= 3;
const int ENTRADA_TIPO = 4; 

const char CHAO_SPRITE = '.';
const char MURO_SPRITE = '#';
const char SAIDA_SPRITE = '.';
const char ENTRADA_SPRITE = '.';

Casa::Casa()
{
	setEstado(VAZIO);
	setTipo(CHAO_TIPO);
	setSprite(CHAO_SPRITE);
}

int Casa::CheckEstado()
{
	return getEstado();		
}

int Casa::getEstado()
{
	return estado;
}

void Casa::setEstado(int est)
{
	this->estado = est;
}

int Casa::getTipo()
{
	return tipo;
}

void Casa::setTipo(int tipo)
{
	this->tipo = tipo;
}

char Casa::getSprite()
{
	return this->sprite;
}

void Casa::setSprite(char sprite)
{
	this->sprite = sprite;
}

Elemento Casa::getElemento()
{
	return elemento;
}

void Casa::setElemento(Elemento elem)
{
	this->elemento = elem;
}

Inimigo Casa::getInimigo()
{
	return inimigo;
}

void Casa::setInimigo(Inimigo inim)
{
	this->inimigo = inim;
}
