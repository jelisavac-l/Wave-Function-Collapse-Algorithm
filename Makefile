LIBS=-lsfml-graphics -lsfml-window -lsfml-system
PTH=/home/luka/Documents/MaliProjekti/WaveFuncColAlgo/src

Main.o: main.cpp
	@echo "*** Building ***"
	g++ -c main.cpp -I $(PTH)/include

all: main.o
	g++ main.o -o sfml-app -L $(PTH)/lib -lsfml-graphics -lsfml-window -lsfml-system

expnrun:
	export LD_LIBRARY_PATH=$(PTH)/lib && ./sfml-app

run: all expnrun

clear:
	@echo "*** I tako.... Ode... ***"
	rm sfml-app
	rm *.o
