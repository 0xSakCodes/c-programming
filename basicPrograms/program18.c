// WAP to check if the number is prime or not.
// divisible by 1 and itself;
#include <stdio.h>

int main() {
    int num;

    printf("enter a number: ");
    scanf("%d", &num);

    int isPrime;

    for (int i=2; i<num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }

        isPrime = 1;
    }

    if (isPrime == 1) {
        printf("number is prime");
    } else if ( isPrime == 0) {
        printf("number is not prime");
    }
}