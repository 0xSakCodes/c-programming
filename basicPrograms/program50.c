// WAP to take user input of their first name and print it back to them.
/// (23/05/2026) {0xSakCodes}

#include <stdio.h>

// main function
int main() {
    // defining variable
    char firstName[10];
    char fullName[25];

    // taking user input %s;
    printf("enter your first name: ");
    scanf("%s", firstName);

    // printing the name:
    printf("your first name: %s", firstName);
    return 0;
}