/*
The switch statement is a control flow statement that allows for multi-way branching based on the value of an expression. It provides an efficient way to execute different blocks of code depending on a single variable or expression's value, serving as an alternative to a series of if-else if-else statements.


Syntax:

    switch (expression) {
        case constant1:
            // code to execute if expression matches constant1
            break; 
        case constant2:
            // code to execute if expression matches constant2
            break;
        // ... more cases
        default:
            // code to execute if no case matches
    }

Components:

    expression:
        This is evaluated once and its value must be an integer or character type.

    case constant:
        Each case label represents a specific constant value that the expression is compared against. Each case constant within a switch statement must be unique.

    break statement:
        The break statement is crucial within a switch block. When a case matches the expression, the code within that case is executed. Without break, execution "falls through" to the next case's code block, regardless of whether that case matches.

    default (optional):
        The default case is executed if the expression's value does not match any of the provided case constants. It is not mandatory but is often used for error handling or providing a fallback.

    How it works:

        The expression within the switch parentheses is evaluated.

        The result of the expression is compared sequentially with the constant values of each case label.

        If a match is found, the code block associated with that case is executed.

        Execution continues until a break statement is encountered, which exits the switch block, or until the end of the switch block is reached.

        If no case matches the expression's value and a default case is present, the code within the default block is executed.

break;:
        The break statement is crucial. It terminates the switch statement and transfers control to the statement immediately following the switch block. Without break, execution would "fall through" to subsequent case blocks, even if their conditions are not met.
*/

// Example

#include <stdio.h>

int main() {

    int choice;

    printf("Enter a number (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose One.\n");
            break;
        case 2:
            printf("You chose Two.\n");
            break;
        case 3:
            printf("You chose Three.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}