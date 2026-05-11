// WAP to print 1 (true) & 0 (false) for following:
/// if its sunday and its snowing
/// if its monday or its raining
/// if a number is greater than 9 and less than 100;
#include <stdio.h>

int main() {
    // 1: (sunday and snowing)
    int isSunday = 1, isSnowing = 1;
    // 2: (monday and raining)
    int isMonday = 1, isRaining = 0;

    printf("%d\n", isSunday && isSnowing); // expected: 1
    printf("%d\n", isMonday || isRaining); // expected: 1

    // defining variable to store number:
    int num;
    // taking value from user input:
    printf("\nEnter a number: ");
    scanf("%d", &num);
    printf("%d", num > 9 && num < 100);
    return 0;
};