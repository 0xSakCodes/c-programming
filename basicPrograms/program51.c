// WAP that takes name from user input and print its length;
/// (23/05/2026) {0xSakCodes}

#include <stdio.h>
#include <string.h>

int main() {
    // via pointer;
    char fullName[25];
    int length = 0;

    printf("enter full name:");
    fgets(fullName, 25, stdin);
    // scanf("%s", &fullName);
    
    // for loop:
    for (int i=0; fullName[i] != '\0'; i++) {
        length++;
    }

    // using library:
    printf("str length: %d\n", strlen(fullName));
    printf("length: %d", length-1);
    return 0;
}