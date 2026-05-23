// Taking string input from character by character:
/// (23/05/2026) {0xSakCodes}

#include <stdio.h>
#include <string.h>

// user defined function declaration:
void takeInput(char string[]);

// main function:
int main() {
    char mainString[25];

    takeInput(mainString);
    printf("%s", mainString);
}

void takeInput(char string[]) {
    char strings[10];
    for (int i=1; i<=10; i++){
        printf("enter %d character: ", i);
        gets(strings);
        strcat(string, strings);
    }
}