objs =	main.o posicao.o casa.o mapa.o nivel.o gernivel.o \
        mob.o inimigo.o heroi.o cinto.o pilha.o mochila.o \
	elemento.o arma.o pocao.o  \
	tela.o 

jogoRPG: $(objs) 
	g++ $(objs) -o jogoRPG

main.o: main.cpp

posicao.o: posicao.h
casa.o: casa.h
mapa.o: mapa.h
nivel.o: nivel.h
gernivel.o: gernivel.h

mob.o: mob.h
inimigo.o: inimigo.h
heroi.o: heroi.h
cinto.o: cinto.h
pilha.o: pilha.h
mochila.o: mochila.h

elemento.o: elemento.h
arma.o: arma.h
pocao.o: pocao.h

tela.o: tela.h

.PHONY: clean
clean:
	rm $(objs) jogoRPG
