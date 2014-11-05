#ifndef INIMIGO_H
#define INIMIGO_H

#include "mob.h"

class Inimigo : public Mob
{
	public:
		Inimigo();

		int getTipo();
		void setTipo(int);
	private:
		int tipo;
};

#endif // INIMIGO_H
