/*
Data types are like categories for the information your program will work with. They tell the computer what kind of "stuff" a variable will hold (example => whole numbers, decimals, letters)
*/

#include <stdio.h>
int main(){
    // Common DataTypes in c

    // this is the interger
    int integer = 2;

    // this is float
    float x = 4.555;

    // this is the character
    char Character = 'A';


    // this is String and String is the array of characters so we can built this like
    char myString[] = "This_is_string"; 

    // this is the const
    const pi = 3.148;
}
/*
Basic (or Primary) Data Types:
    These are fundamental and built-in types.

        int: Used to store whole numbers (integers) without decimal points. Can be combined with short, long, signed, and unsigned modifiers to specify size and sign.

        char: Used to store single characters. Represented by their ASCII values. Can be signed or unsigned.

        float: Used to store single-precision floating-point numbers (numbers with decimal points).

        double: Used to store double-precision floating-point numbers, offering more precision than float.

        void: A special data type indicating the absence of a value. It is commonly used in function declarations to specify no return value or as a generic pointer type.

Derived Data Types:
    These are built upon the basic data types.

        Arrays: Collections of elements of the same data type stored in contiguous memory locations.

        Pointers: Variables that store memory addresses of other variables.

        Functions: Blocks of code designed to perform a specific task, often returning a value of a particular data type.

User-Defined Data Types:
    These are created by the programmer.

        Structures (struct): Allow grouping of different data types under a single name.

        Unions (union): Similar to structures but allow different data types to share the same memory location.

        Enumerations (enum): Provide a way to assign symbolic names to a set of integer constants.

*/