#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "tela.h"
#include "mochila.h"
#include "heroi.h"
#include "casa.h"

int main(void)
{

	Mapa mapa("Primeiro Mundo", 15);
	Tela tela;
	Heroi heroi;
	std::cout << heroi.getX() << std::endl;
	
	char opcao;
	do
	{
		int y = heroi.getY();
		int x = heroi.getX();

		tela.Render(mapa, heroi);
		std::cin >> opcao;	
		switch (opcao)
		{
			case 'w':
			{
				x--;
				char tipo = mapa.getCasa()[x * mapa.getTam() + y].getTipo();
				if( tipo != MURO_TIPO)
					heroi.setX(x);
				break;
			}
			case 's':
			{
				x++;
				char tipo = mapa.getCasa()[x * mapa.getTam() + y].getTipo();
				if( tipo != MURO_TIPO)
					heroi.setX(x);
				break;
			}
			case 'a':
			{
				y--;
				char tipo = mapa.getCasa()[x * mapa.getTam() + y].getTipo();
				if( tipo != MURO_TIPO)
					heroi.setY(y);
				break;
			}
			case 'd':
			{
				y++;
				char tipo = mapa.getCasa()[x * mapa.getTam() + y].getTipo();
				if( tipo != MURO_TIPO)
					heroi.setY(y);

				break;
			}

		}
	}while(opcao != 'q');
	
	return 0;
}
