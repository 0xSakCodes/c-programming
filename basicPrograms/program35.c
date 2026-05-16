// Understanding: Function Call (Call by Value) & (Call by Reference);
/// (16/05/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration:
void squareOfByValue(int num);
void squareOfByReference(int* num); // int* num => pointer input;

// main function:
int main() {
    int number; // variable;

    printf("enter a number: ");
    scanf("%d", &number);

    // calls the function to square by direct value;
    squareOfByValue(number);
    printf("number => %d\n", number);

    squareOfByReference(&number);
    printf("number => %d\n", number);
    return 0;
}

// defining functions:
void squareOfByValue(int num) {
    num = num * num;
    printf("square => %d\n", num);
}

void squareOfByReference(int* num) {
    *num = *num * *num;
    // value at address of pointer (number);
    printf("square => %d\n", *num);
}