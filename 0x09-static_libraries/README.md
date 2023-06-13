# 0x09-static_libraries

This project is part of the ALX Software Engineering curriculum. It focuses on creating and using static libraries in C programming.

## Description

The "0x09-static_libraries" project contains a collection of C source files and a Makefile to build a static library named "libmy.a". The library includes various functions that can be used in C programs.

The main objectives of this project are:

- Creating a static library using the `ar` command.
- Understanding the concept of static libraries and their usage.
- Compiling programs using the created static library.

## Project Structure

The project has the following structure:

```
0x09-static_libraries/
├── README.md
├── create_static_lib.sh
├── libmy.a
├── liball.a
├── main.h
```

- `create_static_lib.sh`: Shell script to create the static library.
- `libmy.a`: Static library file.
- `main.h`: Header file with function prototypes (for future use in other projects).
- C source files: Files containing the implementation of various functions.

## Getting Started

To use the static library in your own C programs, follow these steps:

1. Clone the repository:

   ```
   $ git clone https://github.com/cfcife/0x09-static_libraries.git
   ```

2. Navigate to the project directory:

   ```
   $ cd 0x09-static_libraries
   ```

3. Compile the static library using the provided Makefile:

   ```
   $ make
   ```

   This will generate the `libmy.a` static library file.

4. Link the static library with your C program. For example, to compile `main.c` with the static library, use:

   ```
   $ gcc main.c -L. -lmy -o my_program
   ```

   This will create an executable named `my_program` that uses the functions from the static library.

5. Run your program:

   ```
   $ ./my_program
   ```

## Author

This project was created by [CFCIFE]. You can find me on [GitHub](https://github.com/cfcife) and [LinkedIn](https://www.linkedin.com/in/abolude-peter/).

```