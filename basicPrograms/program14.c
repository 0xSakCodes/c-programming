// WAP to print factorial of n; (user input)
#include <stdio.h>

int main() {
    // define the variable:
    int n;
    int factorial = 1;

    printf("enter a number to check factorial: ");
    scanf("%d", &n);
    
    // main loop:
    for (n; n>=1; n--) {
        factorial *= n;
    }

    // using while loop:
    while (n>=1) {
        factorial *= n;
        n--;
    }
    printf("factorial is: %d", factorial);

}