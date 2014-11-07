#include "tela.h"
#include <iostream>

Tela::Tela()
{
	// ctor
}

void Tela::Render(Mapa mapa, Heroi heroi)
{

	std::cout << "Nivel: " << mapa.getNome() << std::endl  << std::endl;
	int i, j;
	for (i = 0; i < mapa.getTam(); i++)
	{
		for (j = 0; j < mapa.getTam(); j++)
		{
			if (i == heroi.getX() && j == heroi.getY())
			{
				std::cout << heroi.getSprite() << " ";
			}
			else 
			{
				std::cout << mapa.getCasa()[i * mapa.getTam() + j].getSprite() << " ";
			}
		}
		std::cout << std::endl;
	}
	
}
