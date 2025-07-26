//  Conditional Compilation:
/*
The #ifdef and #ifndef directives allow parts of the code to be conditionally included or excluded based on whether a macro is defined. This is useful for creating different versions of a program (e.g., debug vs. release) or for platform-specific code.
*/

#include <stdio.h>

#define DEBUG // Defining DEBUG macro for conditional compilation

int main()
{
    printf("This message always prints.\n");

    #ifdef DEBUG // If DEBUG is defined, this block is included
        printf("Debug mode is active.\n");
    #endif

    #ifndef RELEASE // If RELEASE is NOT defined, this block is included
        printf("This is a development build.\n");
    #endif

    return 0;
}