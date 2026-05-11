# algos-cpp
Algorithms and data structures in C++ language.

## build
The `g++` command might feel like a single step, but it is actually a "compiler driver" that coordinates a four-stage pipeline. Each stage takes the output of the previous one and transforms it closer and closer to machine code.

```text
    Source Code (.cpp, .h)
             |
             v
    +------------------+
    |   Preprocessor   |  Stage 1: Handles #include, #define, etc.
    +------------------+
             | (Preprocessed Source)
             v
    +------------------+
    |     Compiler     |  Stage 2: Translates C++ to Assembly
    +------------------+
             | (Assembly Code)
             v
    +------------------+
    |    Assembler     |  Stage 3: Translates Assembly to Machine Code
    +------------------+
             | (Object Code)
             v
    +------------------+
    |      Linker      |  Stage 4: Links object files and libraries
    +------------------+
             |
             v
         Executable
```

To build this project, by stopping at every stage of the pipeline, do the following:

1. **Preprocessor**  
    ```sh
    g++ -E main.cpp
    ```
2. **Compiler**
   ```sh
    g++ -S main.cpp
    ```
3. **Assembler**
   ```sh
    g++ -c main.cpp
    ```
4. **Linker**
   ```sh
   g++ main.o -o app
   ```


## run
To run this project, once it's built, use the following command:
```sh
./app
```

## questions
Ask for the following questions:
- How about the `#include<iostream>` directive and the role of the preprocessor?
- How about the linker and the symbol relocation mechanism?
- How about the loader and the process of loading the executable?
- What's the difference between the statically linked versus dynamically linked executable?
- What is the ELF - Executable and Linkable Format?