#ifndef ARMA_H
#define ARMA_H

#include "elemento.h"

class Arma: public Elemento
{
	public:
		Arma();

		int getAtaque();
		void setAtaque(int);
	private:
		int ataque;
};

#endif // ARMA_H
