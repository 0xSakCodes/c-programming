// WAP to find if a character entered by user is uppercase or not;
#include <stdio.h>

int main() {
    // definding char variable to be taken as input from the user;
    char var;

    // taking user input:
    printf("enter a character: ");
    scanf("%c", &var);

    // main logic:
    // A -> 65; Z -> 90;
    var >= 'A' && var <= 'Z' ? printf("its upper case!") : printf("its not upper case!"); 
};