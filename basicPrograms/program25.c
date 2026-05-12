// WAP (recursion) to print factorial of n;
// anything that can be done with iteration can also be done with recursion;
/// (12/05/2026) {0xSakCodes}

#include <stdio.h>


// user defined function - declaration;
int factoriseNumber(int number);

// main function:
int main() {
    // variable to store factorial of number;
    int factorialOf;

    // user input;
    printf("enter a number: ");
    scanf("%d", &factorialOf);

    // call the user-defined function;
    printf("factorial is: %d",factoriseNumber(factorialOf));
    return 0;
}

// defining function:
int factoriseNumber(int number) {
    // recurison (calling it-self);
    if (number == 1){
        // Base Case;
        /// Stops Recursion;
        return 1;
    }
    // int factor = factoriseNumber(number-1);
    int factorial = number * factoriseNumber(number-1);
    /*
    assume: number = 5;
    >> factorial = 5 * factoriseNumber(4); 5 * 24;
    >>> factoriseNumber(4) => 4 * factoriseNumber(3); 4 * 6;
    >>> factoriseNumber(3) => 3 * factoriseNumber(2); 3 * 2;
    >>> factoriseNumber(2) => 2 * factoriseNumber(1); 2 * 1;
    >>> factoriseNumber(1) => 1;
    */
   return factorial;
}