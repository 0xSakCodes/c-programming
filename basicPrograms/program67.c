// Understanding FILE (file pointers);
/// (02/06/2026) {0xSakCodes}

#include <stdio.h>


// main function:
int main() {
    // initializing file pointer (fptr);
    FILE *fptr;

    /* 
    | opening file;
    || in reading mode;
    || fopen(location, mode);
    */
    fptr = fopen("./programFiles/test.txt", "r");

    /* 
    | closing the opened file;
    || fclose(fileLoc);
    */
    fclose(fptr);
    return 0;
}