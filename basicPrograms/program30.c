// WAP (function) to find sum of digits of number;
// WAP (function) to find square root of a number;
/// (12/05/2026) {0xSakCodes}


// WAP (function) to print Hot or Cold depending upon the temprature the user enters;
// WAP (function) to make your own power function;

#include <stdio.h>

// user defined function declaration
int sumOf();
int sqRootOf();

// main function:
int main() {
    // variable:
    char whatToFind;

    // taking input:
    printf("what do you want to find? \nA -> Sum of Digits :)\nB -> Square root of number :) \n >> ");
    scanf("%c", &whatToFind);

    // calling switch:
    switch(whatToFind){
        case 'A':
        case 'a':
            // calling the user defined function
            printf("sum of digits>> %d", sumOf());
            break;
        case 'B':
        case 'b':
            // calling the user defined function
            sqRootOf();
            break;
        default:
            printf("Error: Invalid Input! :(");
    }
    

    return 0;
}

int sumOf() {
    int num;
    printf("\nenter a number: ");
    scanf("%d", &num);

    // 123;
    int temp, digit, sum = 0;
    // temprorary variable is assigned with number;
    temp = num;

    // looped till temproary number is more than 0;
    while (temp > 0){
        // modulus with 10 will give remainder (digit);
        digit = temp % 10;
        // adding the digit to sum;
        sum = sum + digit;
        // removing the number from the temp variable;
        temp = temp / 10;
    }

    return sum;
}

int sqRootOf() {
    int num;
    printf("\nenter a number: ");
    scanf("%d", &num);

    int i = 0;
    int foundSq = 0;
    while (i<=num){
        if ( i * i == num){
            printf("square root is>> %d", i);
            foundSq = 1;
            break;
        }
        i++;
    }

    if (!foundSq) {
        printf("couldn't find square root! :(");
    }
}