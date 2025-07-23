/*
The ternary operator is also known as the conditional operator, provides a concise way to express conditional logic within a single line. It serves as a shorthand alternative to simple if-else statements, particularly useful for conditional assignments or returning values based on a condition.

        Syntax:

                condition ? expression_if_true : expression_if_false;


Explanation:
    condition:
        This is a boolean expression that evaluates to either true (non-zero) or false (zero).
    expression_if_true:
        If the condition is true, this expression is evaluated, and its result becomes the result of the entire ternary operation.
    expression_if_false:
        If the condition is false, this expression is evaluated, and its result becomes the result of the entire ternary operation.


*/

// Example

#include <stdio.h>

int main() {

    int age = 16;
    char* message;

    // Using the ternary operator to assign a message based on age
    message = (age >= 13 & age <= 19) ? "teen ager" : "Not a teen ager";

    printf("%s\n", message); // Output: Can vote

    return 0;
}