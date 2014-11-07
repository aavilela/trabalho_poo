#ifndef PILHA_H
#define PILHA_H

#include "arma.h"
#include <stdlib.h>
#include <iostream>

extern const int BLOCO;

class Pilha
{
	public:
		Pilha();
		bool Redim();
		bool Vazia();
		void Empilha(Arma);
		Arma Desempilha();
		void Imprimir();
	private:
		Arma *armas;
		int topo, capacidade;
};

#endif // PILHA_H

