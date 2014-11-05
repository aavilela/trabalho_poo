#ifndef ELEMENTO_H
#define ELEMENTO_H

#include <string>

class Elemento
{
	public:
		Elemento();

		std::string getNome();
		void setNome(std::string);
		int getPeso();
		void setPeso(int);
	private:
		std::string nome;
		int peso;
};

#endif // ELEMENTO_H
