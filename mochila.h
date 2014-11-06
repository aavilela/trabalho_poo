#ifndef MOCHILA_H
#define MOCHILA_H

#include "pilha.h"

extern const int PESO_MAX;

class Mochila
{
	public:
		Mochila();
		void Add(Arma);
		Arma Remove();

		int getPeso();
		void setPeso(int);
	private:
		int peso;
		Pilha pilha;
};

#endif // MOCHILA_H
