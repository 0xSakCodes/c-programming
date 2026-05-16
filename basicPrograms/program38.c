// WAP (function) to find maximum number between two number using pointer;
/// (16/05/2026) {0xSakCodes}

// WAP (function) to print elements of array in reverse order;
// WAP (function) to print all the letters in english alphabet using pointer;

#include <stdio.h>

// user defined function declaration
void maximumNumber(int num1, int num2, int *max);


// main function
int main() {
    int num1, num2, max;
    printf("enter number 1: ");
    scanf("%d", &num1);
    printf("enter number 2: ");
    scanf("%d", &num2);

    maximumNumber(num1, num2, &max);
    printf("maximum number => %d", max);
    return 0;
}

void maximumNumber(int num1, int num2, int *max) {
    // suppose num1 is max;
    *max = num1;
    if (num2 > *max) {
        *max = num2;
    }
}