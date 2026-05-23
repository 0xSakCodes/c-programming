// Compare Two Strings using Library Function;
/// 0 -> String Equal; +ve -> First > Second; -ve -> First < Second; {ASCII values};
/// (23/05/2026) {0xSakCodes}

#include <stdio.h>
#include <string.h>

// user defined function declaration:
void takeInput(char string[]);
int compareStrings(char string1[], char string2[]);

// main function:
int main() {
    char firstStr[20];
    char secndStr[20];

    takeInput(firstStr);
    takeInput(secndStr);

    int f = compareStrings(firstStr, secndStr);
    if (f == 0) {
        printf("equal string values~");
    } else if (f > 0) {
        printf("First String is greator than Second String! :)");
    } else if (f < 0) {
        printf("Second String is greator than First String! :) ");
    }

    return 0;
}

// defining functions:
void takeInput(char string[]) {
    printf("enter string value: ");
    gets(string);
}

int compareStrings(char string1[], char string2[]) {
    return strcmp(string1, string2);   
}