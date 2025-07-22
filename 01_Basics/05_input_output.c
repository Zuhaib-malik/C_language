/*
Input/Output (I/O) refers to how a program interacts with the outside world, primarily through reading data from input sources and writing data to output destinations. This functionality is provided by the C Standard Library, specifically through functions defined in the <stdio.h> header file.

Types of I/O in C:
    Standard I/O:
        Standard Input (stdin): Typically the keyboard, used for receiving input from the user.
    Standard Output (stdout):
        Typically the console screen, used for displaying output to the user.
    Standard Error (stderr):
         Also typically the console screen, used for displaying error messages.
    
    Common Functions:
    
        printf(): Used to print formatted output to stdout.
        scanf(): Used to read formatted input from stdin.
        getchar(), putchar(): Used for single character I/O.
        gets(), puts(): Used for string I/O (though gets() is generally discouraged due to buffer overflow risks).


*/

#include <stdio.h>

int main()
{
    int age;
    // printf function is used to Print something on Screen or show output to user
    printf("Enter your age: ");
    // scanf Function is used to get input from user
    scanf("%d", &age);
    printf("You are %d years old.\n", age);
    return 0;
}