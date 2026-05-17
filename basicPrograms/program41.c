// pointer can be incremented or decremented;
/// (17/05/2026) {0xSakCodes}


#include <stdio.h>


// main function
int main() {
    int age = 22;
    int *ptr = &age;
    printf(">> address of pointer: %u", ptr);
    ptr++; // generally int takes 4 bytes (depends upon machine) so +4 byte from original addr;
    printf("\n>> address of pointer after increment: %u", ptr);
    ptr--;
    printf("\n>> address of pointer after decrement: %u", ptr);
    ptr--;
    printf("\n>> address of pointer after decrement twice: %u", ptr);
    return 0;
}