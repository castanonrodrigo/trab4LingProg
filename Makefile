CC=g++

trabalho4: main.o pacient.o cadastro.o oncologistPacient.o
	$(CC) -o trabalho4 main.o pacient.o cadastro.o oncologistPacient.o
