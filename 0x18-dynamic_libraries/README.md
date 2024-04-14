# Dynamic Libraries Project

Welcome to the Dynamic Libraries Project. This project is designed to demonstrate the creation and use of dynamic libraries in C programming. Below is the information on how to compile the source files, create the dynamic library, and run programs using the library.

## Project Structure

The project includes various C source files, object files, scripts, and a dynamic library (`libdynamic.so`). Here's a brief overview of the essential files:

- **Source Files**: Contains functions like `isupper`, `isdigit`, `strlen`, `puts`, `strpbrk`, etc.
- **Object Files**: Compiled versions of the source files.
- **Scripts**:
  - `1-create_dynamic_lib.sh`: Script to create a dynamic library from all object files.
- **Dynamic Libraries**:
  - `libdynamic.so`: The dynamic library containing all compiled source code.
- **Header Files**:
  - `main.h`: Header file with declarations for all functions used in the source files.

## Files List

Here's a complete list of files in this project:

- `0-isupper.c`
- `0-isupper.o`
- `0-memset.c`
- `0-memset.o`
- `0-strcat.c`
- `0-strcat.o`
- `100-atoi.c`
- `100-atoi.o`
- `100-operations.c`
- `100-operations.o`
- `100-operations.so`
- `101-make_me_win.sh`
- `1-create_dynamic_lib.sh`
- `1-isdigit.c`
- `1-isdigit.o`
- `1-memcpy.c`
- `1-memcpy.o`
- `1-strncat.c`
- `1-strncat.o`
- `2-strchr.c`
- `2-strchr.o`
- `2-strlen.c`
- `2-strlen.o`
- `2-strncpy.c`
- `2-strncpy.o`
- `3-islower.c`
- `3-islower.o`
- `3-puts.c`
- `3-puts.o`
- `3-strcmp.c`
- `3-strcmp.o`
- `3-strspn.c`
- `3-strspn.o`
- `4-isalpha.c`
- `4-isalpha.o`
- `4-strpbrk.c`
- `4-strpbrk.o`
- `5-strstr.c`
- `5-strstr.o`
- `6-abs.c`
- `6-abs.o`
- `9-strcpy.c`
- `9-strcpy.o`
- `liball.so`
- `libdynamic.so`
- `_putchar.c`
- `_putchar.o`
- `main.h`
- `trydynamicstatic`

## How to Compile and Run

### Creating a Dynamic Library

Run the `1-create_dynamic_lib.sh` script to compile all `.o` files into the `libdynamic.so` library:

```bash
sh 1-create_dynamic_lib.sh

``Using the Library
````gcc -o [program_name] [source_file.c] -L. -ldynamic

```export the path for the dynamic library before running the compiled program
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
./[program_name]
