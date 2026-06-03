// Writing in text file using c;
/// (03/06/2026) {0xSakCodes}

#include <stdio.h>

// main function

int main() {
    // defining file pointer;
    FILE *fptr;
    FILE *fwtr;

    // opening file in read mode.
    fptr = fopen("./programFiles/test.txt", "r");
    char character;
    // fgetc would scan the opened file character by character :)
    character = fgetc(fptr);
    while (character != EOF) {
        printf("%c", character);
        // reading another character;
        character = fgetc(fptr);
    }
    // close reading mode file;
    fclose(fptr);

    // opening file in append mode;
    fwtr = fopen("./programFiles/test.txt", "a");
    /* 
    | fputc would put the character into opened file;
    | another way to do so would be: fprintf(fileLoc, dataType, variable);
    || therefore, fprintf would append : at last of the file;
    || then, putc would append ) after :
    */
    fprintf(fwtr, "%c", ':');
    fputc(')', fwtr);
    fclose(fwtr);
    return 0;
}