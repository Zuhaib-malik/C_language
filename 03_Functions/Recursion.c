/*
Recursion in C is a programming technique where a function calls itself to solve a problem. This approach is particularly useful for problems that can be broken down into smaller, self-similar sub-problems. 

    Key Components of Recursion:
        Base Case:

            This is a condition that stops the recursion. Without a base case, a recursive function would call itself indefinitely, leading to a stack overflow error. The base case provides a direct 
            solution for the simplest instance of the problem.
        Recursive Step:

            This is where the function calls itself, but with a modified input that moves closer to the base case. Each recursive call works on a smaller version of the original problem.

        How Recursion Works:

            When a recursive function is called, a new stack frame is created on the call stack for that invocation. This stack frame stores local variables and the return address. When the function
            makes a recursive call, another stack frame is pushed onto the stack. This process continues until the base case is reached. Once the base case returns a value, the stack frames are popped off the stack in reverse order of their creation, and the results are combined to produce the final solution.


    Advantages of Recursion:
        Elegance and Readability:

        Recursive solutions can be more concise and easier to understand for problems with inherent recursive structures.

        Problem Decomposition:

        It naturally breaks down complex problems into simpler, manageable sub-problems.

    Disadvantages of Recursion:

        Performance Overhead: Recursive calls involve function call overhead (stack frame creation and destruction), which can be slower than iterative solutions for large inputs.

        Stack Overflow Risk: Deep recursion can lead to stack overflow if the maximum recursion depth is exceeded.

        Debugging Complexity: Tracing recursive calls can be more challenging during debugging.

Example: Factorial Calculation using Recursion

        In this example, factorial(n) calls factorial(n-1) until n becomes 0 or 1 (the base case). The results are then multiplied back up the call stack to calculate the final factorial.

*/
#include <stdio.h>

int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } 
    // Recursive step: n * factorial of (n-1)
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num)); // Output: Factorial of 5 is 120
    return 0;
}
