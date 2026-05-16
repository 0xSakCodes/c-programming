// WAP (function) to swap/interchange the value of a & b;
/// (16/05/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration
void swapNumByPointer(int* a, int* b);


// main function:
int main() {
    // defining variables;
    int a, b;

    printf("enter number a: ");
    scanf("%d", &a);

    printf("enter number b: ");
    scanf("%d", &b);

    // calling the function:
    swapNumByPointer(&a, &b);
    printf("number a> %d\nnumber b> %d", a,b);
    return 0;
}

// defining function
void swapNumByPointer(int* a, int* b) {
    // assuming int;
    int c;
    c = *b;
    // c is assigned with value at address (b);
    *b = *a;
    // value at address (b) is assigned with value at address (a);
    *a = c;
    // value at address (a) is assigned with value of (c);
}