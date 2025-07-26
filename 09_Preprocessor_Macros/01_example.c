// Object-like Macros (Constants):
// In this example, PI is a macro that the preprocessor replaces with 3.14159 before compilation.

#include <stdio.h>

#define PI 3.14159 // Defines PI as a constant value

int main() {
    float radius = 5.0;
    float area = PI * radius * radius;
    printf("Area of circle with radius %.2f is %.2f\n", radius, area);
    return 0;
}