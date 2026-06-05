# GNU toolchain
CC := clang++

CXXFLAGS = -std=c++23 -Wall -Wextra

CATCH2 := $(shell brew --prefix catch2)

INCLUDEDIR = ./include
CXXFLAGS += -I$(INCLUDEDIR)
CXXFLAGS += -I$(CATCH2)/include
LDFLAGS = -L$(CATCH2)/lib -lCatch2Main -lCatch2


.PHONY: all
all: test
	@echo "Running test"
	./test

searching.o: src/searching.cpp
	$(CC) $(CXXFLAGS) -c src/searching.cpp -o searching.o

searching.o: $(INCLUDEDIR)/searching.hpp

# Preprocessor --> Compiler --> Assembler
test.o: tests/main.cpp
	$(CC) $(CXXFLAGS) -c tests/main.cpp -o test.o


# Linker
test: test.o searching.o
	$(CC) $(LDFLAGS) test.o searching.o -o test


.PHONY: clean
clean:
	rm -f test.o searching.o test
