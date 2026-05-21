# GNU toolchain
CC := g++-15

# macOS toolchain
#CC := clang++

.PHONY: all
all: app

#                   ----------------
# 1)   main.cpp -->   PREPROCESSOR   --> main.i  (still human readable)
#                   ----------------
#
main.i: main.cpp
	$(CC) -E main.cpp -o main.i


#                    ----------
# 2)   main.i  -->    COMPILER   --> main.s      (still human readable)
#                    ----------
main.s: main.i
	$(CC) -S main.i -o main.s

#                   -------------
# 3)   main.s  -->    ASSEMBLER    --> main.o     (machine binary code)
#                   -------------
main.o: main.s
	$(CC) -c main.s -o main.o


#                  -----------
# 4)   main.o  -->   LINKER    --> app (final executable)
#                  -----------
app: main.o
	$(CC) main.o -o app


.PHONY: clean
clean:
	rm -f main.i main.s main.o app
