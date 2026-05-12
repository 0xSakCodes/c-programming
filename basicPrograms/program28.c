// WAP to print fibonacci series from 0 -> tillNumber;
// fibonacci 3rd number -> 1st number + 2nd Number;

#include <stdio.h>

// user defined function declaration;
void printFibonacci(int endNum);

// main function
int main() {
    // variables;
    int endNum;

    printf("enter ending number: ");
    scanf("%d", &endNum);

    printFibonacci(endNum);

    return 0;
}

// defining function
void printFibonacci(int endNum) {
    int startNum = 0;
    int nextNum = 1;
    int c = nextNum;

    for (int i=0; c<=endNum; i++){
        printf("%d \n", c);
        c = startNum + nextNum;
        startNum = nextNum;
        nextNum = c;
    }
}