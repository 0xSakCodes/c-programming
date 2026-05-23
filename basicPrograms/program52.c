// Strings Concatination:
/// (23/05/2026) {0xSakCodes}

#include <stdio.h>
#include <string.h>

// user defined function declaration
void takeInput(char string[]);
void concatenateString(char string1[], char string2[]);
void printString(char string[]);

// main function
int main() {
    char mainString[25];
    char secondString[25];

    takeInput(mainString);
    takeInput(secondString);

    concatenateString(mainString, secondString);
    printString(mainString);
    return 0;
}

// defining function:
void takeInput(char string[]) {
    printf("enter string value: ");
    // fgets(string, 25, stdin);
    gets(string);
}

void concatenateString(char string1[], char string2[]) {
    strcat(string1, string2);
    printf("\n----\t----\n");
    printf("concatenated success! ;)");
    printf("\n----\t----\n");
}

void printString(char string[]) {
    printf("output>> %s", string);
}