#include "mochila.h"


const int PESO_MAX = 15;

Mochila::Mochila()
{
	setPeso(0);	
}

// Adiciona uma arma à mochila
void Mochila::Add(Arma arma)
{
	if ( getPeso() + arma.getPeso() <= PESO_MAX)
	{
		pilha.Empilha(arma);
		int p = peso + arma.getPeso();
		setPeso(p);
	}
	else
	{
		std::cout << "Mochila esta com seu maximo de peso" << std::endl;
	}
}

int Mochila::getPeso()
{
	return peso;
}

void Mochila::setPeso(int peso)
{
	this->peso = peso;
}

void Mochila::Imprimir()
{
	std::cout << std::endl << "======MOCHILA======" << std::endl;
	pilha.Imprimir();
}
