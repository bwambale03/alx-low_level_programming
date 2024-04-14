# Dynamic Libraries in C with Docker

## Introduction
This guide walks you through the Docker setup for a C project that uses dynamic libraries, ideal for ensuring a consistent development and testing environment across different systems. This Dockerfile uses Debian Buster as a base image and sets up a C environment for compiling and running C code.

## Docker Setup

### Base Image
- **Debian Buster**: We start with `debian:buster` as the base image. This is a stable Debian release with broad support for packages, providing a reliable foundation for our development environment.

### Working Directory
- **Setting Up the Working Directory**: The `WORKDIR` is set to `/usr/src/app`. This command sets the directory inside the container where all subsequent commands will be run.

### Installing Dependencies
- **Install Essential Packages**:
  ```dockerfile
  RUN apt-get update && apt-get install -y gcc make libc6-dev

## Docker Setup Instructions

### 1. Copy Source Files to Container
Ensure all your project files are in the same directory as your Dockerfile. Use the following Docker instruction to copy all files into the working directory `/usr/src/app` in the container:
```dockerfile
COPY . /usr/src/app

### 2. Compile and Build Dynamic Library
``RUN gcc -c -fPIC *.c && gcc -shared -o libdynamic.so *.o

### 3. Compile Main Program
``Compile your main program, main, ensuring it links properly with the newly created dynamic library:
    RUN gcc -L. -o main 0-isupper.c -ldynamic

### 4. Set the Command to Run the Main Program
    CMD ["./main"]

#### Building and Running the Docker Container
`` docker build -t mycproject .

#### Run the Docker Container
`` docker run --rm mycproject
