#include "pilha.h"

const int BLOCO = 2;

Pilha::Pilha()
{
	topo = -1;
	capacidade = BLOCO;
	armas = new Arma[capacidade];
}

// Redimensiona
bool Pilha::Redim()
{
	// copiar os armas do vetor
	Arma *tmp = new Arma[capacidade];
	for(int i = 0; i < capacidade; i++)
	{
		tmp[i] = armas[i];
	}

	// apagar o vetor de armas
	delete []armas;

	// realocar o vetor de armas
	armas = new Arma[capacidade + BLOCO];
	if ( armas == NULL )
		return false;
	// copiar os armas de volta
	for(int i=0; i<capacidade; i++)
		armas[i] = tmp[i];

	// atualizar a capacidade
	capacidade += BLOCO;

	// deletar o vetor temporario
	delete []tmp;
	return true;
}
bool Pilha::Vazia()
{
	return topo == -1;
}

void Pilha::Empilha(Arma elem)
{
	bool sucesso = true;
	if ( topo+1 == capacidade )
		sucesso = Redim();
	if (!sucesso)
	{
		std::cerr<<"  NAO HA ESPACO SUFICIENTE NA MOCHILA!!!";
		//   exit(0);
	}
	armas[++topo] = elem;

}

Arma Pilha::Desempilha()
{
	if ( !Vazia() )
	{
		std::cout << " MOCHILA => ";
		Arma result = armas[topo];
		topo--;
		return result;
	}
	else
	{
		std::cerr<<"  MOCHILA VAZIA!!!\n\n";
	//     exit(0); // fecha o programa
	}
}

void Pilha::Imprimir()
{
	for(int i = 0; i < topo + 1; i++)
	{
		std::cout << armas[i].getNome() << std::endl;
	}
	std::cout << std::endl;
}
