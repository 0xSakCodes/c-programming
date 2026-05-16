// WAP (function) to calculate sum, product and average of two numbers and print in main function;
/// (16/05/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration:
void calculate(int num1, int num2, int *sum, int *product, int *average);

// main function:
int main() {
    int num1, num2;
    // to calculate;
    int sum, product, average;

    printf("enter number1: ");
    scanf("%d", &num1);
    printf("enter number2: ");
    scanf("%d", &num2);

    // function call by reference;
    calculate(num1, num2, &sum, &product, &average);
    printf("sum of %d & %d => %d\nproduct of %d & %d => %d\naverage of %d & %d => %d", num1, num2, sum, num1, num2, product, num1, num2, average);
    return 0;
}

// defining function:
void calculate(int num1, int num2, int *sum, int *product, int *average) {
    // value at address of sum => num1 + num2;
    *sum = num1 + num2;
    // value at address of product => num1 * num2;
    *product = num1 * num2;
    // value at address of average => num1 + num2 / 2;
    *average = (num1 + num2) /2;
}