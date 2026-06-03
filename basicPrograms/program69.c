// WAP (function) to read 5 integers from a file;
/// (03/06/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration:
void readFile(char fileLocation[]);

int main() {
    char fileLocation[100];
    printf("enter file location: ");
    scanf("%s", &fileLocation);

    readFile(fileLocation);
    return 0;
}

// defining function:
void readFile(char fileLocation[]) {
    FILE *fptr;

    fptr = fopen(fileLocation, "r");
    int readInt;
    int i=0;

    fscanf(fptr, "%d", &readInt);
    // running the loop
    while (i < 5) {
        printf(">> %d\n", readInt);
        fscanf(fptr, "%d", &readInt);
        i++;
    }
    // close the opened file;
    fclose(fptr);
}