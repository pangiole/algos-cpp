# algos-cpp
Algorithms and data structures in C++ language.

## requirements

```sh
brew install gcc
brew install catch2
```

Operating systems' package managers (such as `brew` for macOS, or `apt` for Ubuntu Linux) install header files into standard paths like `/usr/include/` and the compiled library blobs (binary large object files) into `/usr/lib/`. Your compiler searches these directories automatically. 

```sh
ls /opt/homebrew/include
ls /opt/homebrew/lib
```


## build
To build this project, just use the `make` tool:

```
make clean
make all
```



### Makefile
The Makefile is a simple way to automate the build process. A Makefile is made up of rules. Each rule looks like this:

```makefile
target: prerequisites
    command
    command
    # ... 
```

The target is usually the name of the file that the rule will create (for example `app`). Sometimes, targets can also label tasks that are not files (for example the `all` and `clean` phony targets). The prerequisites are the files that the rule depends on (for example `main.cpp`). The commands are the command lines that will be executed when the rule is invoked (for example `g++ -o app main.cpp`). 

```makefile
all: app

app: main.cpp
    g++ -o app main.cpp

clean:
    rm -f app    
```


## run
To run this project, once it's built, use the following command:
```sh
./app
```

## questions
Ask for the following questions:
- What is make tool and Makefile?
- What are the best alternatives to make tool?