#include <iostream>
#include "posicao.h" 

// Construtor
Posicao::Posicao() {}

Posicao::Posicao(int x, int y)
{
	setX(x);
	setY(y);
}

int Posicao::Muda(int x, int y)
{
	int tmpX = getX() + x;
	int tmpY = getY() + y;	
	setX(tmpX);
	setY(tmpY);
}

bool Posicao::Compara(Posicao pos)
{
	if ((pos.getX() == this->x) && (pos.getY() == this->y))
	{
		return true;
	}
	else 
	{
		return false;
	}
}

void Posicao::Imprime()
{
	std::cout << "X = " << getX() << " Y = " << getY() << std::endl;
}

int Posicao::getX()
{
	return x;
}

void Posicao::setX(int nx)
{
	this->x = nx;
}

int Posicao::getY()
{
	return y;
}

void Posicao::setY(int ny)
{
	this->y = ny;
}


