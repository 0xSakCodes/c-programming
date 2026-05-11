// WAP to continuously take input from user until user enters odd number;
#include <stdio.h>

int main() {
    int enteredNumber;
    do {
        printf("enter a number: ");
        scanf("%d", &enteredNumber);
    } while (enteredNumber % 2 == 0);

    /*
    for(int i=0; ;i++) {
        printf("enter a number: ");
        scanf("%d", &enteredNumber);

        if (enteredNumber % 2 != 0) {
            printf("\Exit: Odd Number Detected!");
            break;
        }
    }
    */
}