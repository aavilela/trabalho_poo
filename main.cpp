#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "tela.h"
#include "mochila.h"
#include "heroi.h"
#include "casa.h"
#include "gernivel.h"

int main(void)
{
	Tela tela;
	Heroi heroi;

	Mapa mapa1("Primeiro Mundo", 15);
	Mapa mapa2("Segundo Mundo", 8);
	Mapa mapa = mapa1;

	tela.Render(mapa, heroi);
	char opcao;

	do
	{
		
		int y = heroi.getY();
		int x = heroi.getX();

		char tipoCasa;

		std::cin >> opcao;	
		switch (opcao)
		{
			case 'w':
			{
				x--;
				tipoCasa = mapa.getCasa()[x * mapa.getTam() + y].getTipo();
				if( tipoCasa != MURO_TIPO)
					heroi.setX(x);
				break;
			}
			case 's':
			{
				x++;
				tipoCasa = mapa.getCasa()[x * mapa.getTam() + y].getTipo();
				if( tipoCasa != MURO_TIPO)
					heroi.setX(x);
				break;
			}
			case 'a':
			{
				y--;
				tipoCasa = mapa.getCasa()[x * mapa.getTam() + y].getTipo();
				if( tipoCasa != MURO_TIPO)
					heroi.setY(y);
				break;
			}
			case 'd':
			{
				y++;
				tipoCasa = mapa.getCasa()[x * mapa.getTam() + y].getTipo();
				if( tipoCasa != MURO_TIPO)
					heroi.setY(y);
				break;
			}

		}
		if ( tipoCasa == SAIDA_TIPO)
		{
			mapa = mapa2;
			heroi.setX( mapa.getPosEntrada().getX() );
			heroi.setY( mapa.getPosEntrada().getY() );
		}
		if ( tipoCasa == ENTRADA_TIPO) {
			mapa = mapa1;
			std::cout << mapa.getPosSaida().getX() << std::endl;
			std::cout << mapa.getPosSaida().getY() << std::endl;
			heroi.setX( mapa.getPosSaida().getX() );
			heroi.setY( mapa.getPosSaida().getY() );
		}

		tela.Render(mapa, heroi);
	}while(opcao != 'q');
	
	return 0;
}
