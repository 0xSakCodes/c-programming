// Analysis of code-execution;
/// (16/05/2026) {0xSakCodes}

#include <stdio.h>

// main function
int main() {
    int *ptr; // defining (valueAt) ptr variable;
    int x; // defining x variable;

    ptr = &x; // ptr stores address of variable x; 
    *ptr = 0; // value at address (of x) is updated to 0;

    printf(" x = %d\n", x);
    // above statement should print value of x;
    printf(" *ptr = %d\n", *ptr);
    // above statement should print 0;

    *ptr += 5; // value at address (of x) is increased by 5; 0 + 5 => 5;
    printf(" x = %d\n", x);
    // prints the value of x: 5;
    printf(" *ptr = %d\n", *ptr);
    // should print the value at address of ptr (x) => 5;

    (*ptr)++; // +1 to value at address of ptr (x);  x = x (5) + 1 => 6;
    printf(" x = %d\n", x);
    // prints the value of x: 6;
    printf(" *ptr = %d\n", *ptr);
    // prints the value at address of ptr (x) => 6;
}