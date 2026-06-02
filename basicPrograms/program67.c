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
    || if file doesn't exist NULL will be passed to the variable;
    */
    fptr = fopen("./programFiles/test.txt", "r");

    /* 
    | closing the opened file;
    || fclose(fileLoc);
    ||| creating a condition to check if the file exists before we perform operations on it;
    */
    if (fptr != NULL) {
        /*
        | define a variable to store file values;
        || usage of fscanf(fileLoc, dataType, &variable);
        || fileLoc -> variable of opened file;
        || dataType -> data type in which you are willing to access data;
        || &variable -> address of variable where the fetched data would be stored;
        */
        char fileData[20];
        fscanf(fptr, "%s", &fileData);
        // prints the data;
        printf("string: %s", fileData);
        fclose(fptr);
    } else {
        printf("file not found :(");
    }
    return 0;
}