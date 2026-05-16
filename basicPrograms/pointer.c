// understanding pointers;
/// (12/5/2026) {0xSakCodes}

#include <stdio.h>

int main() {
    int age = 18;
    // * -> value at;
    // & -> address of;
    // %p -> pointer address; (hexadecimal) %u -> unsigned int (pointer address);
    int *pointer = &age; // value at address of age;
    // therefore: pointer has stored -> address of age;
    /// and (*) asks for value adress at pointer (which is of age);
    printf("address of age: %p\n", pointer);
    printf("value of pointer: %d", *pointer);


    /// stored value data type must have same pointer data type;
    /// int age -> int *pointer;
    //// float age -> float *pointer;
    float ages = 22.0;
    float *ptr = &ages;
    printf("\n\naddress of ages: %p\nvalue of pointer: %f", ptr, *ptr);
    ///// char hash -> char *pointer;
    char hash = '#';
    char *ptrs = &hash;
    printf("\n\naddress of hash: %p\nvalue of pointer: %c", ptrs, *ptrs);
    return 0;
}