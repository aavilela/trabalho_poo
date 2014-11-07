#ifndef GERENCIA_NIVEL
#define GERENCIA_NIVEL

#include "nivel.h"

// Responsável por gerenciar os níveis do jogo
class GerNivel
{
	public:
		GerNivel(int);
		void Prox();
		void Ant();

		Nivel getNivel();
		int getAtual();
		void setAtual(int);
	private:
		Nivel *niveis;
		int atual;
};

#endif // GERENCIA_NIVEL
