// WAP to read a string from a file and print to the user;
// Replace the data in file with the number of vowels in the string;
/// (04/06/2026) {0xSakCodes}

#include <stdio.h>

int readFile();

// main function
int main() {
    printf("\n\nvowels: %d",readFile());
    return 0;
}

int readFile() {
    FILE *fptr;

    fptr = fopen("./programFiles/program73.txt", "r");
    int vowels=0;
    char string;

    if (fptr != NULL) {
        /*
        | understanding fgets:
        || fgets(char *, int, file);
        || char * -> variable where you want to store the read string;
        || int -> number of bytes you want to read at max;
        || file -> file pointer of opened file;
        ||| fgets would generally return NULL as soon as the content is finished;
        */
        string = fgetc(fptr);
        while (string != EOF) {
            printf("%c", string);
            if (string == 'a' || string == 'e' || string == 'i' || string == 'o' || string == 'u' ||
                string == 'A' || string == 'E' || string == 'I' || string == 'O' || string == 'U') {
                    vowels++;
                }
            string = fgetc(fptr);
        }
    } else {
        printf("ERROR: File not found;");
        return 0;
    }
    return vowels;
}