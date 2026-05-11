#include <stdio.h>
#include <math.h>

int main() {
    
    // variables for storing numbers;
    int num1, num2;

    // taking input of 1st number (printf + scanf);
    printf("enter number 1: ");
    scanf("%d", &num1);

    // taking input of 2nd number (printf + scanf);
    printf("enter number 2: ");
    scanf("%d", &num2);

    int finalAnswer = num1 + num2;
    int power = pow(num1, num2); // num1^num2;
    printf("\nAddition of both the numbers: %d \nPower of both numbers: %d",finalAnswer, power);
};