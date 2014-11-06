#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "tela.h"
#include "mochila.h"

int main(void)
{
	/*Mapa mapa("O mundo de xanao", 30);
	Tela tela;
	tela.Render(mapa);
	*/

	Mochila moch;
	Arma arma1;
	Arma arma2;
	Arma arma3;
	Arma arma4;
	moch.Add(arma1);
	moch.Add(arma2);
	moch.Add(arma3);
	moch.Add(arma4);
	std::cout << moch.getPeso() << std::endl;

	return 0;
}
