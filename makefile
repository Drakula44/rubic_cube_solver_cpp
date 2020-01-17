rubik: Stranice.o grafika.o matrica.o main.o
	g++ -g -o rubik Stranice.o grafika.o main.o matrica.o -lglfw -lGLU -lGL
Stranice.o: ./src/Stranice.cpp ./headers/Stranice.h
	g++ -g  -c -pthread -I/sw/include/root src/Stranice.cpp
grafika.o: ./src/grafika.cpp ./headers/grafika.h
	g++ -g -c -pthread -I/sw/include/root src/grafika.cpp
matrica.o: ./src/matrica.cpp ./headers/matrica.h
	g++ -g -c -pthread -I/sw/include/root src/matrica.cpp
main.o: ./src/main.cpp
	g++ -g -c -pthread -I/sw/include/root src/main.cpp
