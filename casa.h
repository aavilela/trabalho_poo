#ifndef CASA_H
#define CASA_H

extern const int VAZIO; 
extern const int CHAO_TIPO; 
extern const int MURO_TIPO; 
extern const int SAIDA_TIPO; 
extern const int ENTRADA_TIPO; 

extern const char CHAO_SPRITE;
extern const char MURO_SPRITE;
extern const char SAIDA_SPRITE;
extern const char ENTRADA_SPRITE;

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
		int getTipo();
		void setTipo(int);
		char getSprite();
		void setSprite(char);
		Elemento getElemento();
		void setElemento(Elemento);
		Inimigo getInimigo();
		void setInimigo(Inimigo);
	private:
		
		int estado;
		int tipo;
		char sprite;
		Elemento elemento;
		Inimigo inimigo;
};

#endif //CASA_H
