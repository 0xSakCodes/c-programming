// understanding pointers;
/// (12/5/2026) {0xSakCodes}

#include <stdio.h>

int main() {
    int age = 18;
    // * -> value at;
    // & -> address of;
    int *pointer = &age;
    printf("address of age: %d\n", pointer);

    printf("value of pointer: %d", *pointer);
    return 0;
}