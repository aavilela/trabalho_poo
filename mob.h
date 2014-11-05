#ifndef MOB_H
#define MOB_H

#include <iostream>
#include <string>
#include "posicao.h"

class Mob
{
	public:
		Mob();
		int Ataca(Mob);
		int Move(Posicao);

		std::string getNome();
		void setNome(std::string);
		Posicao getPos();
		int getVida();
		void setVida(int);
		int getAtaque();
		void setAtaque(int);
		int getDefesa();
		void setDefesa(int);
	private:
		std::string nome;
		Posicao pos;
		int vida;
		int ataque;
		int defesa;
};

#endif // MOB_H
