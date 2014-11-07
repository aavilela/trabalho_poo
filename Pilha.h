#ifndef PILHA_H_
#define PILHA_H_

#include <iostream>
#include <stdlib.h>
using namespace std;

template <class TIPO, int BLOCO = 10>
class Pilha
{
    private:
        TIPO *dados;
        int topo, capacidade;
        bool Resize() // redimensiona o vetor de dados
        
    public:
        Pilha()
        {
            topo = -1;
            capacidade = BLOCO;
            dados = new TIPO[capacidade];
        }

	bool Resize()
	{
            // copiar os dados do vetor
            TIPO *tmp = new TIPO[capacidade];
            for(int i=0; i < capacidade; i++)
                tmp[i] = dados[i];

            // apagar o vetor de dados
            delete []dados;

            // realocar o vetor de dados
            dados = new TIPO[capacidade + BLOCO];
            if ( dados == NULL )
                return false;
            // copiar os dados de volta
            for(int i=0; i<capacidade; i++)
                dados[i] = tmp[i];

            // atualizar a capacidade
            capacidade += BLOCO;

            // deletar o vetor temporario
            delete []tmp;
            return true;
        }
        bool Vazia()
        {
            return topo == -1;
        }

        void Empilha(TIPO elem)
        {
            bool ok=true;
            if ( topo+1 == capacidade )
                ok = Resize();
            if (!ok)
            {
                cerr<<"  NAO HA ESPACO SUFICIENTE NA MOCHILA!!!";
             //   exit(0);
            }
            dados[++topo] = elem;
        }

        TIPO Desempilha()
        {
            if ( !Vazia() )
            {
                cout << " MOCHILA => ";
                TIPO result = dados[topo];
                topo--;
                return result;
            }
            else
            {
                cerr<<"  MOCHILA VAZIA!!!\n\n";
           //     exit(0); // fecha o programa
            }
        }
};

#endif // PILHA_H_INCLUDED
