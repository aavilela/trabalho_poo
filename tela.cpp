#include "tela.h"
#include <iostream>

Tela::Tela()
{
	// ctor
}

void Tela::Render(Mapa mapa)
{

	int i, j;
	for (i = 0; i < mapa.getTam(); i++)
	{
		for (j = 0; j < mapa.getTam(); j++)
		{
			std::cout << mapa.getCasa()[i][j].getSprite();
		}
		std::cout << std::endl;
	}
}
