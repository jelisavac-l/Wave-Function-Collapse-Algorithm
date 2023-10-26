# LIBS=-lsfml-graphics -lsfml-window -lsfml-system
# PTH=/home/luka/Documents/MaliProjekti/WaveFuncColAlgo/src

# Zasto se maltretirati sa svime ovime?
# Jednostavno resenje za one koji zele sami da builduju
# jeste sudo apt install libsfml-dev
# pa ga kompajliraj za sta god zelis.

main.o: main.cpp
	@echo "*** Building main.cpp ***"
	# g++ -c main.cpp -I $(PTH)/include
	g++ -c main.cpp

tile.o: tile.cpp
	@echo "*** Building class: tile.cpp ***"
	# g++ -c tile.cpp -I $(PTH)/include
	g++ -c tile.cpp

all:
#	g++ main.o -o sfml-app -L $(PTH)/lib -lsfml-graphics -lsfml-window -lsfml-system
	g++ main.o tile.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system && ./sfml-app
#exp:
#	export LD_LIBRARY_PATH=$(PTH)/lib
#
#run: exp all
#	export LD_LIBRARY_PATH=$(PTH)/lib && ./sfml-app
#

clear:
	@echo "*** I tako.... Ode... ***"
	rm sfml-app
	rm *.o
