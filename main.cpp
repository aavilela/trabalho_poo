#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "tela.h"
#include "heroi.h"
#include "mapa.h"
#include "nivel.h"

int main(void)
{
	std::string nome;
	std::cout << "Digite o nome do heroi" << std::endl;
	std::cin >> nome;
	Heroi heroi(nome);

	Mochila moch;
	Arma arma1;
	Arma arma3;
	Arma arma2;
	moch.Add(arma1);
	moch.Add(arma2);
	moch.Add(arma3);
	heroi.setMochila(moch);

	Cinto cinto;
	cinto.GuardarPocao(CURA);
	cinto.GuardarPocao(CURA);
	heroi.setCinto(cinto);

	Tela tela;
	Nivel nivel;
	Mapa mapa1("Mapa1",10);
	nivel.setMapa(mapa1);
	Mapa mapa = nivel.getMapa();
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

			case 'c':
			{
				
				Cinto cinto = heroi.getCinto();
				if(cinto.getQtd() > 0){
					int opcao;
					std::cout << "Escolha uma pocao para usar: " << std::endl << "1-CURA 2-AUM_ATAQUE 3-AUM_DEFESA" << std::endl;
					std::cin >> opcao;
					int ind = cinto.CheckDisp(opcao);
					if (ind != NAO_ACHOU)
					{
						if(opcao == CURA)
						{
								int vida = heroi.getVida();
								vida += cinto.getPocoes(ind).UsarEfeito(0);
								cinto.RemoverPocao(CURA);
								heroi.setCinto(cinto);
								heroi.setVida(vida);
						}
					}
				}	
				else std::cout << "O cinto nao possui pocoes!" << std::endl;
			}

		}
		if ( tipoCasa == SAIDA_TIPO)
		{
			heroi.setX( mapa.getPosEntrada().getX() );
			heroi.setY( mapa.getPosEntrada().getY() );
		}
		if ( tipoCasa == ENTRADA_TIPO) {
			heroi.setX( mapa.getPosSaida().getX() );
			heroi.setY( mapa.getPosSaida().getY() );
		}
		
		tela.Render(mapa, heroi);
	}while(opcao != 'q');
		
	return 0;
}
