// WAP to print average of 3 numbers & isDigit or not & smallest number;
#include <stdio.h>

int main() {
    // definding variables to take user input;
    int num1, num2, num3;
    int smallestNumber;
    float avgNum;

    // taking user inputs for variables:
    printf("enter number 1: ");
    scanf("%d", &num1);
    printf("enter number 2: ");
    scanf("%d", &num2);
    printf("enter number 3: ");
    scanf("%d", &num3);

    avgNum = (num1 + num2 + num3)/3.0;

    // main logic:
    /// assuming num1 to be smallest:
    smallestNumber = num1;
    if (num2 < smallestNumber) {
        smallestNumber = num2;
    };
    if (num3 < smallestNumber) {
        smallestNumber = num3;
    };
    
    // final execution:
    printf("\nsmallest number: %d\naverage of entered numbers: %f", smallestNumber, avgNum);
    return 0;
};