/*
if-else statement is a fundamental control flow structure used for decision-making. It allows a program to execute different blocks of code based on whether a specified condition evaluates to true or false. 


Syntax:

        if (condition) {
            // Code to execute if the condition is true
        } else {
            // Code to execute if the condition is false
        }


Explanation:

    if (condition):
    The if keyword initiates the conditional statement. The condition inside the parentheses is a logical or relational expression that evaluates to either true (any non-zero value) or false (zero).

    { // Code to execute if the condition is true }:

    If the condition evaluates to true, the code block within these curly braces is executed.
    else { // Code to execute if the condition is false }:

    The else keyword provides an alternative path. If the condition in the if statement evaluates to false, the code block within the else curly braces is executed. The else part is optional; an if statement can exist without an else clause if no alternative action is required when the condition is false. 


    multiple conditionals:
        else if construct is used to test multiple conditions sequentially. It provides a way to execute different blocks of code based on which condition is met first
        the syntax is 
        

        if (condition1) {

            // Code to execute if condition1 is true

        } else if (condition2) {

            // Code to execute if condition1 is false AND condition2 is true
        } else if (condition3) {

            // Code to execute if condition1 and condition2 are false AND condition3 is true

        } else {

            // Code to execute if all preceding conditions are false
        }
    
    We can also do nested Conditionals for some complex checks:

        Nested conditional statements in C involve placing one if or if-else statement inside another if or else block. This structure allows for the evaluation of multiple conditions in a hierarchical manner, where the inner conditions are only checked if the outer conditions are met.

        the Syntax is:
        if (condition1) {
            // This block executes if condition1 is true.
            if (condition2) {
            // This block executes if both condition1 and condition2 are true.
            } else {
            // This block executes if condition1 is true, but condition2 is false.
            }
        } else {
        // This block executes if condition1 is false.
        }

*/

// Examples are given Below

#include <stdio.h>

int main() {

    // simple conditional 
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote yet.\n");
    }

    // conditionals with else if for multiple conditional

    int score = 75;

    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F\n");
    }

    // Nested Conditionals

     int i = 10;

    if (i == 10) {
        if (i < 18)
            printf("Still not eligible for vote");
        else
            printf("Eligible for vote\n");
    }
    else {
        if (i == 20) {
            if (i < 22)
                printf("i is smaller than 22 too\n");
            else
                printf("i is greater than 25");
        }
    }

    
    return 0;
}

