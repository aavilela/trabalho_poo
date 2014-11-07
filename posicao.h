#ifndef POSICAO_H
#define POSICAO_H

class Posicao
{
	public:
		Posicao();
		Posicao(int, int);
		int Muda(int, int);
		bool Compara(Posicao);
		void Imprime();
		// get's e set's
		int getX();
		void setX(int x);
		int getY();
		void setY(int);
	protected:
		int x;
		int y;
};

#endif // POSICAO_H
