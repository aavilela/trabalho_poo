#include <iostream>
#include <stdlib.h>
#include "mapa.h"

Mapa::Mapa()
{
	setTam(10 + (rand() % 10));
	setNome("Mundo random");
	casas = new Casa[getTam() * getTam()];
	CriaMuro();
	GeraSaida();
	GeraEntrada();
}

Mapa::Mapa(std::string nome, int tam)
{
	setNome(nome);
	setTam(tam);
	casas = new Casa[tam *tam];
	CriaMuro();
	GeraSaida();
	GeraEntrada();
}

void Mapa::GeraSaida()
{
	int ind = 1 + ( rand() % (getTam() - 3));
	Posicao saida(ind, getTam() - 1);
	setPosSaida(saida);	
	int x = getPosSaida().getX();
	int y = getPosSaida().getY();
	int pos = ind * getTam() + (getTam() - 1);
	getCasa()[pos].setSprite(SAIDA_SPRITE);
	getCasa()[pos].setTipo(SAIDA_TIPO);
	
}

void Mapa::GeraEntrada()
{
	int ind = 1 + ( rand() % (getTam() - 3));
	Posicao entrada(ind, 0);
	setPosEntrada(entrada);
	int x = getPosEntrada().getX();
	int y = getPosEntrada().getY();

	int pos = ind * getTam() + 0;
	getCasa()[pos].setSprite(ENTRADA_SPRITE);
	getCasa()[pos].setTipo(ENTRADA_TIPO); 
}

void Mapa::CriaMuro()
{
	for (int j = 0; j < tam; j++)
	{
		// Primeira linha
		getCasa()[j].setSprite(MURO_SPRITE);
		getCasa()[j].setTipo(MURO_TIPO);	

		// Última linha
		getCasa()[(tam - 1) * tam + j].setSprite(MURO_SPRITE);
		getCasa()[(tam - 1) * tam + j].setTipo(MURO_TIPO);

		// Coluna direita
		getCasa()[tam * j + (tam - 1)].setSprite(MURO_SPRITE);
		getCasa()[tam * j + (tam - 1)].setTipo(MURO_TIPO);

		// Coluna esquerda
		getCasa()[tam * j ].setSprite(MURO_SPRITE);
		getCasa()[tam * j ].setTipo(MURO_TIPO);

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

Casa * Mapa::getCasa()
{
	return casas;
}

Posicao Mapa::getPosSaida()
{
	return this->posSaida;
}

void Mapa::setPosSaida(Posicao pos)
{
	this->posSaida = pos;	
}

Posicao Mapa::getPosEntrada()
{
	return posEntrada;
}

void Mapa::setPosEntrada(Posicao pos)
{
	this->posEntrada = pos;
}
