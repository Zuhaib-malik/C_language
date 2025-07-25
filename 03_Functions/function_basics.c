/*
Function is a self-contained block of code designed to perform a specific task. Functions are fundamental to modular programming, enabling code reusability, organization, and easier maintenance.
    Key Aspects of Functions in C:

        Definition: A function definition provides the actual implementation of the function's logic. It includes the return_type, function_name, parameter_list (optional), and the function body enclosed in curly braces {}.
    
    Syntax

        return_type function_name(parameter_list) {
            // Function body (statements to be executed)
        }

    Declaration (Prototype):

     A function declaration, or prototype, informs the compiler about a function's return_type, name, and parameter_types before its actual definition. This allows the compiler to check for correct usage when the function is called.

    Syntax

        return_type function_name(parameter_types);

    Call: To execute the code within a function, it must be called from another part of the program, such as main() or another function. Arguments are passed during a function call to initialize the function's parameters.

    Syntax

        function_name(arguments);


    Types of Functions:

        Standard Library Functions:

            Pre-defined functions provided by the C standard library (e.g., printf(), scanf(), strlen()). These are typically declared in header files (e.g., stdio.h, string.h).

        User-Defined Functions:

            Functions created by the programmer to fulfill specific program requirements.

        Benefits of Using Functions:

            Modularity: Breaks down large programs into smaller, manageable units.
            Reusability: Code defined in a function can be called multiple times, reducing redundancy.
            Readability: Improves code clarity and understanding by organizing related logic.
            Easier Debugging and Maintenance: Isolating specific tasks in functions simplifies error identification and modifications.


Best practices for functions in C programming focus on creating code that is readable, maintainable, and efficient.

    Core Principles:

        Single Responsibility Principle:

            Each function should perform one specific, well-defined task. Avoid creating functions that try to do too many things.

        Meaningful Names:

            Use descriptive names for functions that clearly indicate their purpose (e.g., calculateSum, printReport).

        Conciseness:

            Keep functions relatively short to improve readability and reduce complexity. If a function becomes too long, consider breaking it down into smaller, helper functions. 

        Proper Declarations and Definitions:

            Always declare functions before their first use (prototypes) and ensure the definition matches the declaration.

        Effective Parameter Usage:

            Pass only the necessary parameters to a function. Use const for parameters that should not be modified within the function. 

        Minimize Global Variables:

            Reduce reliance on global variables within functions, as they can lead to unintended side effects and make debugging harder. Pass data via parameters instead.

        Error Handling:

            Implement robust error handling within functions, especially when dealing with external resources or potential failure points.

        Documentation:

            Add comments to explain the function's purpose, its parameters, return values, and any special considerations.

        Modularity and Independence:

            Design functions to be as independent as possible, avoiding tight coupling between different parts of your code.

        Memory Management:

            If dynamic memory allocation is used within a function, ensure corresponding deallocation to prevent memory leaks.

        Code Style Consistency:

            Adhere to a consistent coding style for naming conventions, indentation, and overall formatting.
*/

// Example

#include <stdio.h>

// we derclear all the functions here and implement it at the end of out side the main function and we call them inside main function

int fun(int x, int y);

int main(){
    int w = fun(2,4);
       printf("%d",  w);
 

    return 0;
}

int fun(int x, int y){
    int z = x + y;
    return z;
}
