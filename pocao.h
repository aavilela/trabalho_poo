#ifndef POCAO_H
#define POCAO_H

#include "elemento.h"

extern const int CURA;
extern const int AUM_ATAQUE;
extern const int AUM_DEFESA; 

class Pocao : public Elemento
{
	public:
		Pocao();
		Pocao(int);
		//std::string TrataEfeito(int);
		
		/* Efeitos */
		int UsarEfeito(int);

		int getEfeito();
		void setEfeito(int);
	private:
		int efeito;
};

#endif // POCAO_H
