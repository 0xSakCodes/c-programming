// WAP (function) which has a string firstName and lastName to store details of user & print the character using loop:
/// (23/05/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration
void printString(char array[]);

// main function
int main() {
    char firstName[] = "Sak";
    char lastName[] = "Codes";

    printString(firstName);
    printString(lastName);
    return 0;
}

// defining function
void printString(char array[]) {
    for (int i=0; array[i] != '\0'; i++) {
        printf("%c", array[i]);
    }
    printf("\n");
}