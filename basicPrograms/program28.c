// WAP to print fibonacci series from 0 -> tillNumber;
// fibonacci 3rd number -> 1st number + 2nd Number;
/// (12/05/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration;
void printFibonacci(int endNum);

// main function
int main() {
    // variables;
    int endNum;

    printf("enter ending number: ");
    scanf("%d", &endNum);

    // calling the void function;
    printFibonacci(endNum);

    return 0;
}

// defining function
void printFibonacci(int endNum) {
    // starting the series from 0;
    int startNum = 0;
    // next number will be 1;
    int nextNum = 1;
    // c is a variable where we will store sum of both numbers;
    int c = startNum;

    if(endNum <= 0){
        if(endNum == 0){
            printf("%d", startNum);
        } else {
            printf("Error: cant be negative.");
        }
        return;
    }

    // prints 0
    if(endNum >= 1){
        printf("%d \n", startNum);
    }

    // prints 1;
    if(endNum >= 2){
        printf("%d \n", nextNum);
    }

    // loop till c is smaller than end of number;
    for (int i=0; c + nextNum<=endNum; i++){
        // c contains sum of start number & next number;
        c = startNum + nextNum;
        // startNum is updated to value of nextNum (considering to be new previous number);
        startNum = nextNum;
        // and the next number this time would be value of c (added number);
        nextNum = c;
        // prints the number;
        printf("%d\n",c);
    }
}