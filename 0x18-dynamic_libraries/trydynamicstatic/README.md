# Creating a Dynamic Library in Linux

### 1. First, create the source file(s) for your library. Here’s an example of a simple function that we can compile into a shared library; file: libexample.c

### 2. Compile the Source Code to an Object File
` gcc -c -fpic libexample.c`
// This generates libexample.o, an object file.
### 3. Create the Shared Library
```Next, turn the object file into a shared library i.e gcc -shared -o libexample.so libexample.o```

````Using the Library To use this library in a program, you need to compile the program and link it with```
````the shared library. For instance````
        #### gcc -shared -o libexample.so libexample.o
### 4. Using the Library
`this is with file main.c`
#### i.e gcc -o main main.c -L. -lexample
`Before running, make sure the operating system knows where to find the shared library`

`export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH`

`./main`

