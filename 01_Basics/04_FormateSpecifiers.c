/*
Format specifiers in C are special placeholders used within input and output functions like printf() and scanf() to indicate the data type and format of the variables being processed. They always begin with a percent sign (%) followed by a character that denotes the data type.


Common Format Specifiers and their Data Types:

    %d or %i: Signed decimal integer (int).
    %c: Single character (char).
    %f: Floating-point number (float or double).
    %s: String (array of characters).
    %u: Unsigned decimal integer (unsigned int).
    %o: Octal integer.
    %x or %X: Hexadecimal integer (lowercase or uppercase, respectively).
    %p: Pointer address.
    %lf: Double-precision floating-point number (double) when used with scanf().


    Syntax of Format Specifiers:
    The general syntax for a format specifier is:
     ` %[flags][width][.precision][length]specifier `
    
     flags: Optional characters that modify the output, such as - for left alignment, + for displaying a sign, or 0 for zero-padding.
    
     width: Optional integer specifying the minimum field width.

    .precision: Optional integer specifying the number of decimal places for floating-point numbers or the maximum number of characters for strings.
    length: Optional characters indicating the size of the data type (e.g., l for long, ll for long long).
    
    specifier: The required character indicating the data type (e.g., d, f, s).

Example is Given Below:

*/

#include <stdio.h>

int main()
{
    int age = 20;
    float height = 5.5;
    char initial = 'Z';
    char name[] = "Zuhaib";

    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height); // .2f for 2 decimal places
    printf("Initial: %c\n", initial);
    printf("Name: %s\n", name);

    // In printf (output), %d and %i are functionally identical, both representing signed decimal integers. However, in scanf (input), %d reads integers as decimal (base 10) only, while %i can automatically detect and read integers in decimal, hexadecimal (prefixed with "0x"), or octal (prefixed with "0") formats. 

    int num_decimal, num_hex, num_octal;

    printf("Enter a decimal number: ");
    scanf("%d", &num_decimal); // Expects a decimal number

    printf("Enter a number (decimal, octal, or hex): ");
    scanf("%i", &num_hex); // Can handle decimal, octal, or hex

    printf("Enter an octal number: ");
    scanf("%i", &num_octal); // Can handle octal

    printf("Decimal: %d, Hex (interpreted as decimal): %d, Octal (interpreted as decimal): %d\n", num_decimal, num_hex, num_octal);

    return 0;
}