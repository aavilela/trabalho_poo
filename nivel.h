#ifndef NIVEL_H
#define NIVEL_H

#include "mapa.h"
#include "inimigo.h"

class Nivel
{
	public:
		// colocar no construtor receber numero de inimigos,elementos e nome do mapa como parametros
		Nivel();
		void GeraInimigos();
		Mapa getMapa();
		void setMapa(Mapa);
	private:
		Mapa mapa;
		Inimigo inimigos[5];
};

#endif // NIVEL_H
