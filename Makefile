# ----- Makefile Grupo 49 Ejercicio 2 -----

OBJETOS = obj/utils.o

FUENTES = src/utils.cpp \
main.cpp

CC = g++
OPCIONES = -g -Wall
SINUSO =

main: $(OBJETOS) main.cpp
	$(CC) $(OPCIONES) $(OBJETOS) $(SINUSO) main.cpp -o main

obj/utils.o: src/utils.cpp
	$(CC) $(OPCIONES) -c src/utils.cpp -o obj/utils.o

.PHONY: clean rebuild

clean:
	rm -f $(OBJETOS) main

rebuild:
	make clean
	make