#ifndef HEROI_H
#define HEROI_H

#include "mob.h"
#include "elemento.h"

class Heroi : public Mob
{
	public:
		Heroi();
		int UsarElemento(Elemento);

		Cinto getCinto();
		void setCinto(Cinto);
		//Mochila getMochila();
		//void setMochila(Mochila);
		Arma getArmaEqp();
		void setArmaEqp(Arma);
	private:
		Cinto cinto;
		//Mochila mochila;
		Arma armaEqp;
}

#endif // HEROI_H
