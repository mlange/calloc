CC=c89

all: clean main

main: main.o
	$(CC) main.o -lc -o main

clean: frc
	-@rm -f main
	-@rm -f main.o 

frc:
