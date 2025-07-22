/*
Operators in C are special symbols that instruct the compiler to perform specific operations on variables and data, known as operands. They are fundamental for manipulating data, performing calculations, making decisions, and controlling program flow. 

    Types of Operators in C:

    Arithmetic Operators:
        Perform mathematical calculations.
        + (addition)
        - (subtraction)
        * (multiplication)
        / (division)
        % (modulo - remainder of division)

    Relational Operators:
        Compare two operands and return a boolean value (true or false, represented by 1 or 0).
        == (equal to)
        != (not equal to)
        > (greater than)
        < (less than)
        >= (greater than or equal to)
        <= (less than or equal to)

    Logical Operators:
        Combine or modify boolean expressions.
        && (Logical AND)
        || (Logical OR)
        ! (Logical NOT)

    Bitwise Operators:
        Perform operations on individual bits of integer operands.
        & (Bitwise AND)
        | (Bitwise OR)
        ^ (Bitwise XOR)
        ~ (Bitwise NOT/Complement)
        << (Left Shift)
        >> (Right Shift)

    Assignment Operators:
        Assign values to variables.
        = (Simple assignment)
        +=, -=, *=, /=, %=, &=, |=, ^=, <<=, >>= (Compound assignment operators)

    Increment/Decrement Operators:
        Increase or decrease the value of an operand by one.
        ++ (Increment)
        -- (Decrement)

    Conditional (Ternary) Operator:
        A shorthand for simple if-else statements.
        (condition) ? expression1 : expression2;

    Special Operators:
        sizeof (Returns the size of a variable or data type)
        & (Address-of operator)
        * (Pointer dereference operator)
        . (Member access operator for structures/unions)
        -> (Arrow operator for pointers to structures/unions)
        [] (Array subscript operator)
*/


#include <stdio.h>

int main() {

// This is the demonstration of Arithmatic Operators

    int a = 25, b = 5;

    // using operators and printing results
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a % b = %d\n", a % b);
    printf("+a = %d\n", +a);
    printf("-a = %d\n", -a);
    printf("a++ = %d\n", a++);
    printf("a-- = %d\n", a--);

    // These are Relational Operators

    printf("a < b  : %d\n", a < b);
    printf("a > b  : %d\n", a > b);
    printf("a <= b: %d\n", a <= b);
    printf("a >= b: %d\n", a >= b);
    printf("a == b: %d\n", a == b);
    printf("a != b : %d\n", a != b);
    return 0;
}