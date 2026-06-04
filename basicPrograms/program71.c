// WAP to write all the odd numbers from 1 to n in a file;
/// (04/06/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration:
void writeOddNumbers(char fileLocation[], int max);

// main function:
int main() {
    char fileLoc[100];
    int till;

    printf("write file location: ");
    scanf("%s", &fileLoc);

    printf("enter number till you want to write odd numbers: ");
    scanf("%d", &till);

    // calling the function;
    writeOddNumbers(fileLoc, till);
    return 0;
}

void writeOddNumbers(char fileLocation[], int maximumLimit) {
    FILE *fptr;
    // opening file in write mode;
    fptr = fopen(fileLocation, "w");
    // running loop till the maximumLimit;
    for (int i=1; i<=maximumLimit; i++) {
        // odd = i%2!=0;
        if (i%2 != 0) {
            fprintf(fptr, "odd: %d;\t", i);
        }
    }
    // closing the opened file;
    fclose(fptr);
}