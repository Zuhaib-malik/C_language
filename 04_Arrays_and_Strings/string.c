/*
In C, strings are simply arrays of characters. 
Here's how you can create a string: 
    char greet[] = "Hello"; 
    In this example, greet is a string variable that contains the text "Hello".
*/
#include <stdio.h>
int main(){
    char greet[] = "Hello"; 
    printf("%s",greet);
    return 0;
}