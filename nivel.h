#ifndef NIVEL_H
#define NIVEL_H

#include "mapa.h"

class Nivel
{
	public:
		// colocar no construtor receber numero de inimigos,elementos e nome do mapa como parametros
		Nivel();
		Mapa getMapa();
		void setMapa(Mapa);
	private:
		Mapa mapa;
};

#endif // NIVEL_H
