// understanding pointers;
/// (12/5/2026) {0xSakCodes}

#include <stdio.h>

int main() {
    int age = 18;
    // * -> value at;
    // & -> address of;
    int *pointer = &age;
    // therefore: pointer has stored -> address of age;
    /// and (*) asks for value adress at pointer (which is of age);
    printf("address of age: %d\n", pointer);

    printf("value of pointer: %d", *pointer);
    return 0;
}