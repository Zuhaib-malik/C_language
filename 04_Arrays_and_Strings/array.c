/* Array is also a data type in c language in which we can store data and do processing after storing it 
Arrays are used to store multiple values in a single variable,
instead of declaring separate variables for each value.

To create an array,
 define the data type (like int) and specify the name of the array followed by square brackets [].

To insert values to it, use a comma-separated list inside curly braces, and make sure all values are of the same data type:
Example 
*/
#include <stdio.h>
int main(){ 
    int arr[5] = {3,4,5,3, 2};
    int num = arr[0];
    printf("%d\n", num);
    // we can print all the values of array using loop like this
    printf("All the elements of arr are below\n");
    for(int i = 0 ; i <5 ; i++){
        int ele = 0;
         ele = arr[i];
        printf("%d\n", ele);
        

    }


    return 0;
}
/*
we can also do operation on array like we can delete items and can insert new items these we will cover in practice directory latter
*/