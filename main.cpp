#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "tela.h"

int main(void)
{
	Mapa mapa("O mundo de xanao", 8);
	Tela tela;
	tela.Render(mapa);
	return 0;
}
