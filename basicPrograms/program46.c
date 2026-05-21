// WAP to store the first n fibonacci numbers;
/// (21/05/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration:
void storeFibonacci(int array[], int maxLength);
int fibonacci(int n);
void printFibonacci(int array[], int maxLength);

// main function: 
int main() {
    int till;
    printf("enter the number: ");
    scanf("%d", &till);

    int fibonacci[till];
    storeFibonacci(fibonacci, till);
    printFibonacci(fibonacci, till);
    return 0;
}

// defining function:
void storeFibonacci(int array[], int maxLength){
    for (int i=0; i<maxLength; i++){
        // accessing array till-1; (5-1->4 index);
        array[i] = fibonacci(i);
    }
}

int fibonacci(int n) {
    if (n==0) {
        return 0;
    }
    if (n==1) {
        return 1;
    }
    int newNum = fibonacci(n-2) + fibonacci(n-1);
    return newNum;
}

void printFibonacci(int array[], int maxLength) {
    for (int i=0; i<maxLength; i++) {
        printf(">> %d \n", array[i]);
    }
}