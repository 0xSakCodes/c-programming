//  WAP (function) to take two numbers from user and print their sum and products;
/// (5/11/2026) {0xSakCodes}

#include <stdio.h>

// function delcaration:
int sumOf(int num1, int num2);
// void sum:
void voidSum(int num1, int num2);

// main function:
int main() {
    int num1;
    int num2;

    // take two numbers as user input;
    printf("enter number 1: ");
    scanf("%d", &num1);
    printf("enter number 2: ");
    scanf("%d", &num2);

    // function call; (returns value);
    // value gets assigned to variable (sumCall);
    int sumCall = sumOf(num1, num2);
    
    // calling void sum: (doesnt returns value)
    voidSum(num1, num2);

    printf("%d + %d = %d \n",num1, num2, sumCall);
    return 0;
}

// function description:
int sumOf(int a, int b) {
    int sum;
    sum = a + b;
    return sum;
}

void voidSum(int num1, int num2) {
    int sum = num1 + num2;
    printf("%d\n", sum);
}