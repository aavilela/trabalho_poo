#ifndef HEROI_H
#define HEROI_H

#include "mob.h"
#include "elemento.h"
#include "mochila.h"
#include "cinto.h"

class Heroi : public Mob
{
	public:
		Heroi(); 
		int UsarElemento(Elemento);

		char getSprite();
		void setSprite(char);
		Cinto getCinto();
		void setCinto(Cinto);
		Mochila getMochila();
		void setMochila(Mochila);
		Arma getArmaEqp();
		void setArmaEqp(Arma);
	private:
		char sprite;
		Cinto cinto;
		Mochila mochila;
		Arma armaEqp;
};

#endif // HEROI_H
