# algos-cpp
Algorithms and data structures in C++ language.

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