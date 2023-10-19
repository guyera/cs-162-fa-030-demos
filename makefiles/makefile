COMPILER = g++
EXE = my_exe
CFLAGS = -Wall -g

$(EXE): baseball_player.o main.o
	$(COMPILER) baseball_player.o main.o -o my_exe

baseball_player.o: baseball_player.cpp
	$(COMPILER) $(CFLAGS) -c baseball_player.cpp

main.o: main.cpp
	$(COMPILER) $(CFLAGS) -c main.cpp
