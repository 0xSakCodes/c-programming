// WAP to check if a number is odd or even:
#include <stdio.h>

int main() {
    // defining variable to store user input
    int num;

    // taking the values from user input;
    printf("enter a number: ");
    scanf("%d", &num);

    // main logic:
    if (num % 2 == 0) {
        printf("%d is even number!", num);
    } else {
        printf("%d is odd number!", num);
    }
};