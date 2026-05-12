// WAP (function) to make your own power function;
/// (12/05/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration:
int powerOf(int number, int powerValue);

// main function:
int main() {
    // variables;
    int number;
    int powerValue;

    printf("enter number: ");
    scanf("%d", &number);
    printf("%d to the power of:", number);
    scanf("%d", &powerValue);

    // print
    printf("%d to the power of %d => %d", number, powerValue, powerOf(number, powerValue));
    return 0;
}

// defining function:
int powerOf(int number, int powerValue) {
    // power = n * n * n (powerValue times);
    int defaultNumber = number;
    int power;
    for (int i=1; i<powerValue; i++){
        // power = 2*2 = 4
        power = number * defaultNumber;
        // number = 4;
        number = power;
    }
    return power;
}