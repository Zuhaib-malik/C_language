#include <stdio.h>     // For input/output functions
#include <stdlib.h>    // For malloc, calloc, realloc, free

int main() {
    int *arr;   // Pointer to int, will hold address of dynamically allocated memory
    int n, i;

    // Step 1: Ask user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Step 2: Allocate memory using malloc
    arr = (int *)malloc(n * sizeof(int));  // Allocating memory for 'n' integers

    // Step 3: Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed using malloc!\n");
        return 1;  // Exit the program if memory not allocated
    }

    // Step 4: Accept values from user
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Step 5: Display the entered values
    printf("\nYou entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Step 6: Resize the memory using realloc
    printf("\n\nEnter new size for the array: ");
    scanf("%d", &n);

    arr = (int *)realloc(arr, n * sizeof(int));  // Resize memory block

    // Check if realloc succeeded
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Step 7: Initialize new elements if expanded
    printf("Enter values for any new elements:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Step 8: Display new array
    printf("\nUpdated Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Step 9: Free allocated memory
    free(arr);  // Important to prevent memory leaks
    arr = NULL; // Good practice to avoid dangling pointer

    return 0;
}
