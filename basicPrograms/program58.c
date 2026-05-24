// WAP (function) to check if the given character is present in the string or not;
/// (24/05/2026) {0xSakCodes}

#include <stdio.h>
#include <string.h>

// user defined function declaration:
int isPresent(char string[], char character);


// main function:
int main() {
    // string;
    char mainStr[20];
    char toFind;
    printf("enter a string: ");
    gets(mainStr);

    printf("find character in string: ");
    scanf("%c", &toFind);

    int checkStr = isPresent(mainStr, toFind);
    // printf("%d", checkStr);
    if (checkStr == 1){
        printf("Character Found! :D");
    } else {
        printf("Character NOT Found! :(");
    }

    return 0;
}

int isPresent(char str[], char character){
    int len = strlen(str);
    
    // for loop to iterate over string;
    for (int i=0; i<len; i++){
        if (str[i] == character) {
            return 1;
        }
    }
    return 0;
}