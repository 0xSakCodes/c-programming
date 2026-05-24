// Taking password as userinput & add the salt (123) at the end of the password;
/// (24/05/2026) {0xSakCodes}

#include <stdio.h>
#include <string.h>

// user defined function declaration:
void passwordInput(char passwordStr[]);
void saltThePassword(char oldPassword[]);

int main() {
    // defining variables:
    char password[25];
    passwordInput(password);

    printf("salted password: %s", password);
    return 0;
}

// defining function:
void passwordInput(char passwordStr[]){
    printf("enter your password: ");
    gets(passwordStr);
    // calling another function:
    saltThePassword(passwordStr);
}

void saltThePassword(char oldPassword[]) {
    char salt[] = "123";
    // concatenates salt to password string;
    strcat(oldPassword, salt);
}