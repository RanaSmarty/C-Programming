# Hello C Learner!

A simple beginner-friendly **C program** that prints a welcome message and confirms that the program is running successfully.

## Program Description

This program is created as a basic practice project while learning the fundamentals of **C programming**.

It demonstrates: 

- Using the `stdio.h` header file
- The `main()` function
- Using `printf()` to display output
- Using `return 0;` to end the program successfully
- Printing multiple lines of text.

## Source Code

```c
#include <stdio.h>

int main() {
    printf("Hello C Learners, welcome to the new world!\n");
    printf("Testing done successfully!");

    return 0;
}
```

## Expected Output

```bash
Hello C Learners, welcome to the new world!
Testing done successfully!
```

## How to Compile and Run
If You have GCC (GNU Compiler Collection) installed, open Your terminal in the project directory and run:

```bash
gcc program.c -o program.exe
```
Then execute the program:

```bash
program.exe
```

## Concepts Practiced

| **Concept** | **Purpose** |
|-------------|-------------|
| `#include <stdio.h>` | Provides standart input/output functions |
| `main()` | Starting point of the C program |
| `printf()` | Displays text on the console |
| `\n` | Move to cursore to a new line |
| `return 0` | Indicates successful program execution |

## Purpose
This is a small practice program created to strenghten My C Programming Fundamentals and become familiar with compiling and running C programs using GCC.

### Author
MaHiR

> Learning C step by step - one program @ a time ;)