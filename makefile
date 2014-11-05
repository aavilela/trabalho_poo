objs = posicao.o main.o casa.o mapa.o mob.o \
	inimigo.o elemento.o arma.o pocao.o cinto.o \
	tela.o nivel.o

jogoRPG: $(objs) 
	g++ $(objs) -o jogoRPG

main.o: main.cpp

posicao.o: posicao.h
casa.o: casa.h
mapa.o: mapa.h
nivel.o: nivel.h

mob.o: mob.h
inimigo.o: inimigo.h
cinto.o: cinto.h

elemento.o: elemento.h
arma.o: arma.h
pocao.o: pocao.h

tela.o: tela.h

.PHONY: clean
clean:
	rm $(objs) jogoRPG
