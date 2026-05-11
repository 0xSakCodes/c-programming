// WAP (using library functions) to caluclate square of a number given by user;
/// (11/05/2026) {0xSakCodes}


#include <stdio.h>
#include <math.h>

int enterNumber();
int findSquare(int num);

// main function
int main() {
    // taking user input from manually defined function;
    int e = enterNumber();
    // squaring the entered number;
    int squaredNum = findSquare(e);
    // printing the output;
    printf("square of number: %d\n", squaredNum);
    return 0;
}

// function description:
int enterNumber() {
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    return num;
}

int findSquare(int num) {
    int squaredNum;
    squaredNum = pow(num, num);
    return squaredNum;
}