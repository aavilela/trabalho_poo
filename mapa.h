#ifndef MAPA_H
#define MAPA_H

#include "casa.h"
#include <string>
#include <vector>

class Mapa
{
	public:
		Mapa();
		Mapa(std::string, int);
		int GeraMapa();
		void GeraSaida();
		int GeraEntrada();
		void CriaChao();
		void CriaMuro();
		bool CheckSaida(Posicao);
		bool CheckEntrada(Posicao);

		/* get's e set's */
		std::string getNome();
		void setNome(std::string);
		int getTam();
		void setTam(int);
		std::vector<std::vector<Casa> > getCasa();
		void setCasa(Casa);
		Posicao getPosSaida();
		void setPosSaida(Posicao);
		Posicao getPosEntrada();
		void setPosEntrada(Posicao);
	private:
		std::string nome;
		int tam;
		std::vector< std::vector<Casa> > casas;
		Posicao posSaida;
		Posicao posEntrada;
};

#endif // MAPA_H
