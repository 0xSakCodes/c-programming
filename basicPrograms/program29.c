// WAP (function) to print nth term of fibonacci series;
/// (12/05/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration
int fibonacciSeries(int n);

// main loop:
int main() {
    // variable
    int n;

    printf("enter number: ");
    scanf("%d", &n);

    printf("%d(th) term of fibonacci is: %d",n, fibonacciSeries(n));
    return 0;
}

// define function:
int fibonacciSeries(int n) {
    // via recursion:
    if (n == 0){
        return 0;
    }

    if (n == 1){
        return 1;
    }

    // fibonacci => f = f(n-2) + f(n-1);
    int fibonacci;
    // for example: 2
    /// fibonacciSeries(0) + fibonacciSeries(1);
    fibonacci = fibonacciSeries(n-2) + fibonacciSeries(n-1);
    return fibonacci;
}