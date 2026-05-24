// Taking password as userinput & add the salt (123) at the end of the password;
/// (24/05/2026) {0xSakCodes}

#include <stdio.h>
#include <string.h>

// user defined function declaration:
void passwordInput(char passwordStr[]);
void saltThePassword(char oldPassword[], char newPassword[]);

int main() {
    // defining variables:
    char password[25];
    char saltedPassword[25];
    passwordInput(password);

    saltThePassword(password, saltedPassword);
    printf("main password: %s\nsalted password: %s", password, saltedPassword);
    return 0;
}

// defining function:
void passwordInput(char passwordStr[]){
    printf("enter your password: ");
    gets(passwordStr);
}

void saltThePassword(char oldPassword[], char newPassword[]) {
    char salt[] = "123";
    // copies main password to new password
    strcpy(newPassword, oldPassword); // 2nd -> 1st;
    // concatenates salt to new password;
    strcat(newPassword, salt);
}