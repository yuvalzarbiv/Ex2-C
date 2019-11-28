#-*-MakeFile-*-

all: libmyBank.a mains

mains: main.o  libmyBank.a	 
	gcc -Wall -o mains main.o libmyBank.a

myBanks:libmyBank.a

libmyBank.a: myBank.o myBank.h
	ar -rcs libmyBank.a myBank.o

main.o: main.c myBank.h
	gcc -Wall -c main.c

myBank.o: myBank.c myBank.h
	gcc -Wall -c myBank.c

.PHONY: clean all myBanks

clean:
	rm -f *.o *.a mains
