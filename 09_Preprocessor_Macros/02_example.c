//Function-like Macros:
/*
Here, SQUARE(x) is a macro that takes an argument x. 
When SQUARE(num) is encountered, the preprocessor substitutes it with ((num) * (num)).
Parentheses are crucial in function-like macros to prevent unexpected order of operations during expansion.
*/
#include <stdio.h>

#define SQUARE(x) ((x) * (x)) // Defines a function-like macro to square a number

int main()
{
    int num = 4;
    int result = SQUARE(num); // Macro call
    printf("Square of %d is %d\n", num, result);
    return 0;
}