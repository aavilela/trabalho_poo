#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "nivel.h"
#include "posicao.h"

Nivel::Nivel()
{
	
}

void Nivel::GeraInimigos()
{
	int tam = mapa.getTam();

	for(int i = 0; i < 5; i++)
	{
		//Posicao pos(i * 2, i *5);
	}
}

Mapa Nivel::getMapa()
{
	return mapa;
}

void Nivel::setMapa(Mapa mapa)
{
	this->mapa = mapa;
}

