snake: main.o board.o
	gcc -o snake main.o board.o -lncurses -Wall

main.o: main.o 
	gcc -c -o snake main.o  -lncurses -Wall

board.o: board.o
	gcc -c -o snake board.o -lncurses -Wall