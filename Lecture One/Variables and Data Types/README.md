# Variables and Data Types in C

A beginner-friendly C program that demonstrates how to declare, initialize, and use variables with different data types.

## Program Description

Variables are used to store data in a C program. Each variable has a **data type** that determines what kind of value it can store.

This program demonstrates some of the commonly used data types in C:

- `int` — Stores whole numbers
- `float` — Stores decimal numbers
- `double` — Stores decimal numbers with higher precision
- `char` — Stores a single character

## 💻 Source Code

```c
#include <stdio.h>
int main() {

    /*
     Structure of variable declaration

     Data type Variable_Name = Value;
    */


    // Integer variable
    int age = 23; 

    // Floating-point variable
    float my_height = 5.11;

    // Double variable
    double PI = 3.14159;

    // Character variable
    char cgpa = 'A';
    
    printf("My age is %d \n", age);
    printf("Height: %f\n", my_height);
    printf("Value of PI: %1f\n", PI);
    printf("CGPA: %c", cgpa);

    return 0;
}
```

## Expected Output
```bash
Age: 20
Height: 5.8 feet
Value of Pi: 3.1415926535
Grade: A
```

## Variables and Data Types
|**Data Type**|**Description**|**Example**|
|-------------|---------------|-----------|
| `int` | stores whole numbers | `int age = 23;` |
| `float` | Stores decimal numbers | `float my_height = 5.11;` |
| `double` | Stores decimal numbers with higher precision | `double PI = 3.14159;` |
| `char` | Stores a single character | `char cgpa = 'A';` |

## Format Specifires
| **Format Specifire** | **Used For** |
|----------------------|--------------|
| `%d` | `integer data type` |
| `%f` | `floating-point data type`|
| `%1f` | `double data type` |
| `%c` | `character data type` |

## How to Compile and Run
If You have GCC(GNU Compiler Collection)  installed, open your terminal in the project directory and run:

```bash
gcc variables_datatypes.c -o variables_datatypes.exe

```
Then execute the program:

```bash
variables_datatypes.exe
```

## 🎯 Purpose

This program provides a basic introduction to **variables and data types** in C, helping beginners get started with writing simple C programs. These concepts will be explored in more detail in the upcoming chapters...


### Author
MaHiR

> Learning C step by step - One program @ a time!