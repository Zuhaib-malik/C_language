/*
    Structures (Structs) in C Language

    Structures (or `structs`) are user-defined data types that allow you to combine data items of different kinds under a single name.
        Basic Structure Definition

    struct structure_name {
        data_type member1;
        data_type member2;
        // ... more members
    };

        Common Uses of Structures

    1. Representing real-world entities (employees, products, etc.)
    2. Creating complex data structures (linked lists, trees, etc.)
    3. Grouping related data together
    4. Function parameter organization
    5. File I/O operations

    Structures are fundamental for organizing data in C programs and form the basis for more complex data structures and object-oriented concepts in other languages.
*/
#include <stdio.h>
#include <string.h>  // Add for strcpy()

// Example of basic definition:
struct Person {
    char name[50];
    int age;
    float height;
};

// Function prototypes
void printPerson(struct Person p);
void updateAge(struct Person *p, int newAge);
struct Person createPerson(char *name, int age);

int main() {
    // Method 1: Using the previously defined struct
    struct Person person1, person2;

    // Method 2: Alternative struct definition (commented out as it conflicts with the first definition)
    /*
    struct Person2 {
        char name[50];
        int age;
    } person3, person4;
    */

    // Method 3: Using typedef
    typedef struct {
        char name[50];
        int age;
    } PersonShort;
    
    PersonShort person5, person6;

    // Accessing Structure Members
    person1.age = 25;  // Accessing using dot operator

    struct Person *ptr = &person1;
    ptr->age = 25;     // Accessing using arrow operator

    // Initializing Structures
    // Method 1: Initializer list
    struct Person person7 = {"John Doe", 30, 5.9};

    // Method 2: Designated initializers (C99+)
    struct Person person8 = {
        .age = 30,
        .name = "John Doe",
        .height = 5.9
    };

    // Nested Structures
    struct Address {
        char street[50];
        char city[30];
        int zip;
    };

    struct Employee {
        char name[50];
        struct Address addr;
        int emp_id;
    };

    // Array of Structures
    struct Person people[100];  // Array of 100 Person structures
    people[0].age = 25;

    // Structures and Pointers
    ptr = &person1;
    (*ptr).age = 30;  // Method 1
    ptr->age = 30;    // Method 2 (preferred)

    // Structures containing pointers
    struct String {
        char *text;
        int length;
    };

    struct String s;
    s.text = "Hello";
    s.length = 5;

    // Structures and Functions
    printPerson(person1);
    updateAge(&person1, 31);
    struct Person newPerson = createPerson("Alice", 28);

    // Size of Structures
    printf("Size: %zu bytes\n", sizeof(struct Person));

    // Bit Fields
    struct {
        unsigned int is_keyword : 1;
        unsigned int is_extern : 1;
        unsigned int is_static : 1;
    } flags;

    return 0;
}

// Function definitions
void printPerson(struct Person p) {
    printf("Name: %s\nAge: %d\n", p.name, p.age);
}

void updateAge(struct Person *p, int newAge) {
    p->age = newAge;
}

struct Person createPerson(char *name, int age) {
    struct Person p;
    strcpy(p.name, name);
    p.age = age;
    p.height = 0.0;  // Initialize all members
    return p;
}