/*
A pointer is a variable that stores the memory address of another variable as its value.
A pointer variable points to a data type (like int ) of the same type, and is created with the * operator.
Syntax:
    dataType *pointer_name = &varibale_which_pointer_points

    simple Rule 
    use *ptr to get the actual value stored in ptr
    use &ptr to see the address of ptr 
    use ptr to see the address of varibale stored in ptr

*/
#include <stdio.h>
int main(){
    int x = 9;
    int* ptr = &x;
    printf("use *ptr to get the actual value stored in ptr = ");
    printf("%d\n", *ptr);
    printf("use &ptr to see the address of ptr = ");
    printf("%d\n", &ptr);
    printf("use ptr to see the address of varibale stored in ptr = ");
    printf("%d\n", ptr);

    // the formate specifier we use for pointer is %p like this 
    printf("this is actual value which is stored on address = ");
    printf("%p", *ptr);

    return 0;
}

// More Detail are given below and we will cover all these in practice directory of pointers

/*
Pointers are one of the most powerful and fundamental concepts in C programming. They allow you to work directly with memory addresses, enabling efficient memory management and advanced data manipulation.

Basic Concepts

What is a Pointer?
A pointer is a variable that stores the memory address of another variable.


int var = 10;     // integer variable
int *ptr = &var;  // pointer to integer


Pointer Declaration
c
data_type *pointer_name;


#Address-of Operator (&)
Returns the memory address of a variable.

c
int x = 5;
printf("Address of x: %p", &x);


### Dereference Operator (*)
Accesses the value at the address stored in a pointer.

c
int y = *ptr;  // gets the value at the address stored in ptr


Pointer Operations

 Pointer Arithmetic
Pointers can be incremented/decremented to point to next/previous memory locations.

c
int arr[5] = {1, 2, 3, 4, 5};
int *p = arr;  // points to first element

p++;  // now points to second element


 Pointer Comparison
Pointers can be compared using relational operators.

c
if (ptr1 == ptr2) {
    // both point to same location
}

 Types of Pointers

 Null Pointer
A pointer that doesn't point to any valid memory location.

c
int *ptr = NULL;


 Void Pointer (Generic Pointer)
Can point to any data type but cannot be dereferenced directly.

c
void *vptr;
int n = 10;
vptr = &n;


 Pointer to Pointer
A pointer that stores the address of another pointer.

c
int x = 10;
int *p = &x;
int **pp = &p;


 Array of Pointers
c
int *arr_ptr[5];  // array of 5 integer pointers


 Function Pointer
Points to a function.

c
int (*func_ptr)(int, int);  // pointer to function taking two ints and returning int


Common Pointer Use Cases

1. **Dynamic Memory Allocation**
   c
   int *arr = (int*)malloc(5 * sizeof(int));
   free(arr);
   

2. **Passing Arguments by Reference**
   c
   void swap(int *a, int *b) {
       int temp = *a;
       *a = *b;
       *b = temp;
   }
   

3. **Arrays and Strings**
   c
   char str[] = "Hello";
   char *ptr = str;
   

4. **Data Structures**
   c
   struct Node {
       int data;
       struct Node *next;
   };
   

Pointer Pitfalls

1. **Dangling Pointer**: Pointer pointing to freed memory
2. **Memory Leaks**: Not freeing allocated memory
3. **Wild Pointer**: Uninitialized pointer
4. **Pointer Arithmetic Errors**: Going beyond array bounds

Pointers are powerful but require careful handling to avoid memory-related bugs in your programs.
*/