// WAP (function) to count the occurrence of vowels in a string;
/// (24/05/2026) {0xSakCodes}

#include <stdio.h>
#include <string.h>

// user defined function declaration:
int countVowels(char countString[]);

// main function:
int main() {
    char string[30];

    printf("enter a string: ");
    gets(string);

    printf("vowels in the string (%s): %d",string, countVowels(string));
    return 0;
}

// defining function:
int countVowels(char countString[]) {
    // length of string;
    int len = strlen(countString);
    int countOfVowels = 0;
    // printf("%d", len);
    
    // for loop to iterate over the string;
    for (int i=0; i<len; i++){
        char currentLetter = countString[i];
        if(currentLetter == 'a' || currentLetter == 'a' || currentLetter == 'e' 
            || currentLetter == 'i' || currentLetter == 'o' || currentLetter == 'u') {
            countOfVowels++;
        }
    }
    return countOfVowels;
}