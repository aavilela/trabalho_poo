#include <iostream>
#include <stdlib.h>
#include "mapa.h"

Mapa::Mapa()
{
	nome = "default";
	tam = 8;
}

Mapa::Mapa(std::string nome, int tam)
{
	setNome(nome);
	setTam(tam);
	getCasa() = new std::vector<Casa>(tam, std::vector<Casa>(tam));
	/*getCasa().resize(getTam());
	for (int i = 0; i < tam; i++)
	{
		getCasa()[i].resize(getTam());
		std::cout << "ok" << std::endl;
	}*/

	GeraSaida();
	CriaChao();
	CriaMuro();
}

/*
 * Gera um posição em uma das casas da ultima coluna da matriz
 * que assumirá o papel de saida do nível
 */
void Mapa::GeraSaida()
{
	srand(time(NULL));
	int ind =  ( rand() % (20 - 10 +1));
	std::cout << ind << std::endl;
	Posicao saida(ind, getTam());

	setPosSaida(saida);	

	getPosSaida().Imprime();
}

void Mapa::CriaChao()
{
	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam; j++)
		{
			getCasa()[i][j].setSprite('.');
		}
	}
}

void Mapa::CriaMuro()
{
	for (int j = 0; j < tam; j++)
	{
		getCasa()[0][j].setSprite('#');
	}
}

bool Mapa::CheckSaida(Posicao posHeroi)
{
	if (posHeroi.Compara(posSaida))
	{
		return true;
	}
}

/* Get's e set's */

std::string Mapa::getNome()
{
	return this->nome;
}

void Mapa::setNome(std::string nome)
{
	this->nome = nome;
}

int Mapa::getTam()
{
	return tam;
}

void Mapa::setTam(int tam)
{
	this->tam = tam;
}

std::vector<std::vector<Casa> > Mapa::getCasa()
{
	return this->casas;
}

Posicao Mapa::getPosSaida()
{
	return this->posSaida;
}

void Mapa::setPosSaida(Posicao pos)
{
	this->posSaida = pos;	
}
