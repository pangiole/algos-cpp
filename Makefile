# GNU toolchain
CC := g++-15


.PHONY: all
all: app


# Preprocessor --> Compiler --> Assembler
searching.o: src/searching.cpp
	$(CC) -c src/searching.cpp -o searching.o

searching.o: include/searching.hpp

# Preprocessor --> Compiler --> Assembler
main.o: main.cpp
	$(CC) -c main.cpp -o main.o


# Linker
app: main.o searching.o
	$(CC) main.o searching.o -o app


.PHONY: clean
clean:
	rm -f main.o searching.o app
