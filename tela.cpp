#include "tela.h"
#include <iostream>

Tela::Tela()
{
	// ctor
}

void Tela::Render(Mapa mapa, Heroi heroi)
{
	std::cout << "----------------------------------------------" << std::endl;

	std::cout << "Heroi: " << heroi.getNome() << std::endl;
	std::cout << "VIDA: " << heroi.getVida() << std::endl;
	std::cout << "ATAQUE: " << heroi.getAtaque() << std::endl;
	std::cout << "DEFESA: " << heroi.getDefesa() << std::endl;

	heroi.getMochila().Imprimir();
	heroi.getCinto().Imprimir();

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
	std::cout << std::endl << "(w,s,a,d)-Movimentacao - (c)-Cinto" << std::endl;
	
}
