// WAP to calculate sum of two numbers and replace them with their sum;
/// (04/06/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration
void readFile(char fileLoc[]);

int main() {
    char file[100];
    printf("write the location of file: ");
    scanf("%s", &file);

    // calling function with arguments;
    readFile(file);
    return 0;
}

// defining function
void readFile(char fileLoc[]) {
    FILE *fptr;
    FILE *wptr;

    // opening file;
    fptr = fopen(fileLoc, "r");
    int a,b;
    if (fptr != NULL) {
        fscanf(fptr, "%d", &a);
        fscanf(fptr, "%d", &b);
    } else {
        printf("FILE: not found;");
    }
    // closing the file;
    fclose(fptr);

    /*
    | opening the file again in write mode rather than append mode
    | so it automatically clears the past written records that needs to be replaced;
    */
    wptr = fopen(fileLoc, "w");
    fprintf(wptr, "sum: %d", (a+b));
    // closing the file;
    fclose(wptr);
}