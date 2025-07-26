/*
4. Include Guards:
This pattern, known as an include guard, prevents a header file from being included multiple times in a single compilation unit, which can lead to redefinition errors. The #ifndef checks if MY_HEADER_H is not defined; if so, it defines it and includes the header content. If it's already defined (meaning the header has been included before), the content is skipped.
*/



// myheader.h
#ifndef MY_HEADER_H
#define MY_HEADER_H

// Header content here

#endif // MY_HEADER_H
