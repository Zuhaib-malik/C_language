/*
Loops in C are control structures that allow a block of code to be executed repeatedly until a specified condition is met. They are fundamental for tasks requiring iteration, such as processing arrays, repeating calculations, or handling user input until a valid entry is provided. 
There are three primary types of loops in C:
    for loop: This loop is typically used when the number of iterations is known beforehand. Its structure includes initialization, a condition for continuation, and an update expression, all within the loop's declaration.
        Syntax:

            for (initialization; condition; update) {
                // code to be executed repeatedly
            }
    while loop: This loop executes a block of code as long as a specified condition remains true. The condition is checked before each iteration.
        Syntax:

            while (condition) {
                // code to be executed repeatedly
            }
    do-while loop: Similar to the while loop, but the code block is executed at least once before the condition is checked. This ensures the loop body runs even if the condition is initially false.
        Syntax:

            do {
                // code to be executed repeatedly
            } while (condition);

    Note: Each type of loop serves distinct purposes based on when the iteration condition needs to be evaluated and whether at least one execution of the loop body is required And we will discuss in loops.txt file that where should we use which type of loop.
    
*/

#include <stdio.h>

int main() {

    // This is example of for loop

    int i; // Declare the loop control variable

    // Loop to print numbers from 1 to 5
    for (i = 1; i <= 5; i++) {
        printf("%d ", i); // Print the current value of i
    }

    printf("\n"); // Print a newline character for formatting

    //This is the Example of While loop 

    int j = 1; // Initialize a counter variable 'j' to 1

    // The while loop continues as long as 'j' is less than or equal to 5

    while (j <= 5) {
        printf("%d\n", j); // Print the current value of 'j'
        j++; // Increment 'i' for the next iteration
    }


    // This is the example of do while loop 

      int k = 1; // Initialize loop control variable

        do {
            printf("%d\n", k); // Print the current value of k
            k++;               // Increment k
        } while (k <= 5);      // Condition: continue as long as k is less than or equal to 5

    return 0;
}