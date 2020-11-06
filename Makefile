CC=g++

trabalho4: main.o pacient.o cadastro.o
	$(CC) -o trabalho4 main.o pacient.o cadastro.o
