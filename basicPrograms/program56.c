// WAP (function) named slice, which takes a string & returns a sliced string from index start -> end;
/// (24/05/2026) {0xSakCodes}

#include <stdio.h>
#include <string.h>

// user defined function declaration:
char slice(char stringToSlice[], int startIndex, int endIndex);

int main() {
    // defining variable:
    char mainString[33];
    int startIndex;
    int endIndex;

    printf("enter a string: ");
    gets(mainString);
    printf("enter starting index to slice from: ");
    scanf("%d", &startIndex);
    printf("enter ending index to slice till: ");
    scanf("%d", &endIndex);

    int getStrLen = strlen(mainString);
    // printf("%d", getStrLen);
    if (startIndex >= 0 && endIndex < getStrLen) {
        slice(mainString, startIndex, endIndex);
    } else {
        printf("ABORT: INDEX VALUES MISMATCED! :(");
    }
    return 0;
}

// defining function:
char slice(char sliceString[], int startIndex, int endIndex) {
    // printf("%c\n",sliceString[startIndex]);
    // printf("%c\n",sliceString[endIndex]);

    /// starting slice:
    int i = startIndex;
    char slicedString[33];
    for(i; i<=endIndex; i++){
        // printf("%c", sliceString[i]);
        char toBeAdded = sliceString[i];
        strncat(slicedString, &toBeAdded, 1);

    }
    printf("sliced string: %s", slicedString);
}