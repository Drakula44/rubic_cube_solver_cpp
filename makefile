rubik:   matrica.o kocka.o strana.o  rubikovakocka.o grafika.o main.o
	g++ -g -o rubik matrica.o strana.o kocka.o   rubikovakocka.o grafika.o main.o -lglfw -lGLU -lGL
test:   matrica.o kocka.o strana.o  rubikovakocka.o grafika.o main.o
	g++ -g -o test matrica.o strana.o kocka.o   rubikovakocka.o grafika.o main.o -lglfw -lGLU -lGL ; ./test
grafika.o: ./src/grafika.cpp ./headers/grafika.h
	g++ -g -c -pthread -I/sw/include/root src/grafika.cpp
kocka.o: ./src/kocka.cpp ./headers/kocka.h
	g++ -g -c -pthread -I/sw/include/root src/kocka.cpp
rubikovakocka.o: ./src/rubikovakocka.cpp ./headers/rubikovakocka.h
	g++ -g -c -pthread -I/sw/include/root src/rubikovakocka.cpp
strana.o: ./src/strana.cpp ./headers/strana.h
	g++ -g -c -pthread -I/sw/include/root src/strana.cpp
matrica.o: ./src/matrica.cpp ./headers/matrica.h
	g++ -g -c -pthread -I/sw/include/root src/matrica.cpp
main.o: ./src/main.cpp
	g++ -g -c -pthread -I/sw/include/root src/main.cpp
