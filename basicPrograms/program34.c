// WAP to print value of 'i' from its pointer to pointer (pptr);
/// (16/05/2026) {0xSakCodes}

#include <stdio.h>

// main function
int main() {
    int i = 333;
    int *ptr = &i; // value at address of ptr (i); => 333;
    int **ptrs = &ptr; // value at address of ptrs (ptr) => 333;
    int **pointers = &*ptrs; // 333;

    printf("value of i via pointer of pointer: %d", **ptrs);
}