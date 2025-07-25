/*
Unions are a special data type in C that allow storing different data types in the same memory location. Unlike structures, where each member has its own memory, all members of a union share the same memory space.

    Key Features of Unions
        Only one member can hold a value at a time.

        The size of a union is equal to the size of its largest member.

        Useful for memory efficiency when different data types need to be stored but not simultaneously.

        1. Union Declaration & Definition:

        Syntax:     
            union union_name {
                data_type member1;
                data_type member2;
                // ... more members
            };

        Unions vs Structures:
            Unions:

                Share memory between members (only one active at a time)
                Size = largest member
                Used for storing different types at different times
                Pitfalls: Overwriting data, no active member tracking, uninitialized use risks

            Structures:

                Each member has separate memory
                Size = sum of all members (+ padding)
                Used for grouping related data together
                All members can be used simultaneously
                Unions save memory but require careful handling, while structures are safer but use more memory.

    Common Pitfalls:
            Only one member can be used at a time (others get overwritten).
            No way to track which member is currently active (must manage manually).
            Uninitialized unions can lead to undefined behavior.



    Conclusion:
        Unions are useful when:
            ✅ You need memory efficiency (e.g., embedded systems).
            ✅ You want to interpret data in multiple ways (type punning).
            ✅ You work with protocols or hardware registers.

            However, they require careful handling to avoid data corruption.
*/
#include <stdio.h>
#include <string.h>  // Needed for strcpy()
#include <stdint.h>  // Needed for uint32_t, uint8_t, etc.

int main() {
    // 1. Union Definition
    union Data {
        int i;
        float f;
        char str[20];
    };

    // 2. Creating Union Variables
    // Method 1: Using the defined union
    union Data data1, data2;

    // Method 3: Using typedef (alternative way)
    typedef union {
        int i;
        float f;
        char str[20];
    } DataAlt;
    
    DataAlt data3, data4;

    // 3. Accessing Union Members
    data1.i = 10;       // Store integer
    printf("%d\n", data1.i);

    data1.f = 3.14;     // Now store float (overwrites i)
    printf("%f\n", data1.f);

    strcpy(data1.str, "Hello"); // Now store string (overwrites f)
    printf("%s\n", data1.str);

    // Pointer Access
    union Data *ptr = &data1;  // Fixed typo in union name (was Dataa)
    ptr->i = 20;        // Access via pointer
    printf("%d\n", ptr->i);

    // 4. Size of a Union
    union Example {
        int x;      // 4 bytes
        char y;     // 1 byte
        double z;   // 8 bytes (largest)
    };

    printf("Size of Example union: %zu bytes\n", sizeof(union Example)); // Output: 8

    // 5. Practical Use Cases
    // 1. Memory-Efficient Storage
    union Number {
        int intNum;
        float floatNum;
    };

    union Number num;
    num.intNum = 10;    // Store as int
    num.floatNum = 3.14; // Now store as float (overwrites intNum)

    // 2. Type Punning (Accessing Data in Different Ways)
    union Bits {
        int num;
        struct {
            unsigned int bit0 : 1;
            unsigned int bit1 : 1;
            // ... more bits
        } bits;
    };

    union Bits b;
    b.num = 5;  // Binary: 0101
    printf("Bit 0: %d\n", b.bits.bit0); // 1
    printf("Bit 1: %d\n", b.bits.bit1); // 0

    // 3. Network Data Packing (Used in Protocols)
    union Packet {
        uint32_t raw;
        struct {
            uint8_t header;
            uint16_t payload;
            uint8_t checksum;
        } fields;
    };

    union Packet p;
    p.raw = 0xAABBCCDD;
    printf("Header: %X\n", p.fields.header); // Extracts first byte

    return 0;
}
