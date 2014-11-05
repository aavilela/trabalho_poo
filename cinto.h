#ifndef CINTO_H
#define CINTO_H

#include "pocao.h"

extern const int NAO_ACHOU;

class Cinto
{
	public:
		Cinto();
		int GuardarPocao(Pocao);
		Pocao RemoverPocao(int); // int representa o indice
		// recebe um efeito como parametro e procura no cinto
		int CheckDisp(int);
		void DecremQtd();
		void IncremQtd();

		Pocao getPocoes();
		void setPocoes(Pocao, int);
		int getQtd();
		void setQtd(int);
	private:
		Pocao pocoes[5];
		int qtd;
};

#endif // CINTO_H
