#include "casa.h"

const int VAZIO = 0;

Casa::Casa()
{
	estado = VAZIO;
}

int Casa::CheckEstado(){
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

char Casa::getSprite()
{
	return sprite;
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
