#ifndef CASA_H
#define CASA_H

extern const int VAZIO; 

#include "inimigo.h"
#include "elemento.h"

class Casa
{
	public:
		Casa();
		int CheckEstado(); // Verifica estado atual da casa
		
		/* get's e set's */
		int getEstado();
		void setEstado(int);
		Elemento getElemento();
		char getSprite();
		void setSprite(char);
		void setElemento(Elemento);
		Inimigo getInimigo();
		void setInimigo(Inimigo);
	private:
		
		char sprite; /* Responsável pela representação gráfica da casa */
		int estado;
		Elemento elemento;
		Inimigo inimigo;
};

#endif //CASA_H
