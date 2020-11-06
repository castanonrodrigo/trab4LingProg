CC=g++

trabalho4: main.o pacient.o cadastro.o oncologistPacient.o pediatricPacient.o
	$(CC) -o trabalho4 main.o pacient.o cadastro.o oncologistPacient.o pediatricPacient.o
