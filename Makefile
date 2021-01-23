sdl.o: sdl/sdl.c sdl/sdl.h
	gcc -Wall -c sdl/sdl.c -o build/sdl.o

main.o: main.c
	gcc -Wall -c main.c -o build/main.o

prog: main.o sdl.o
	gcc -Wall build/main.o build/sdl.o -o build/prog -lSDL2