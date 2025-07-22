
/*
==========================
 Variables in C Language
==========================

Variable is like a container in which we can store data and then can use them.
OR By definition:
A variable is a named storage location in memory used to hold data. Variables allow programs to store and manipulate data dynamically during execution

C is the Statically typed language means we need to tell the type of variable

Declaration: Before using a variable, it must be declared, which involves specifying its data type and a unique name (identifier). The data type determines the type of values the variable can store (e.g., int for integers, float for floating-point numbers, char for characters) and the amount of memory allocated



*/

#include <stdio.h>
void main()
{

    int age;     // declares an integer variable named 'age'
    float price; // declares a float variable named 'price'

    // Initialization: Variables can be assigned an initial value during declaration or later in the program.

    int marks = 80; // declares and initializes 'marks' to 80
    char grade;
    grade = 'B'; // initializes 'grade' later
}

/*
====================================
Notes: Variables in C
====================================

Naming Rules:
Variable names (identifiers) in C must follow specific rules:

    They can contain letters (A-Z, a-z), digits (0-9), and underscores (_).
    They must begin with a letter or an underscore.
    They are case-sensitive (e.g., myVar and myvar are different).
    Reserved keywords (like int, float, return) cannot be used as variable names.

Scope and Lifetime:

    Variables have a defined scope (where they are accessible in the program) and lifetime (how long they exist).
    Common types include:
        Local variables: Declared inside a function or block, accessible only within that scope, and their lifetime ends when the function/block exits.

        Global variables: Declared outside any function, accessible throughout the entire program, and exist for the program's duration.

        Static variables: Can be local or global; static local variables retain their value between function calls, while static global variables have internal linkage.


Mutability:
    Unlike constants, the value stored in a variable can be changed multiple times during the program's execution.
*/