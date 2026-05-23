// WAP to take user input of their first name and print it back to them.
/// (23/05/2026) {0xSakCodes}

#include <stdio.h>

// main function
int main() {
    // defining variable
    char firstName[10];
    char fullName[25];

    // taking user input %s; 
    /// these types of input dont support multi-words input;
    printf("enter your first name: ");
    //scanf("%s", firstName);

    // in such scenarios, we must use (fgets -> input); (puts -> output);
    // followed by: fgets(string, maxLength, stdin);
    printf("enter your full name: ");
    fgets(fullName, 25, stdin);
    puts(fullName);
    // string -> variable where string will be stored;
    // maxLength -> maximum character input allowed; 
    // stdin -> standard input;

    // printing the name:
    printf("your first name: %s", firstName);
    return 0;
}