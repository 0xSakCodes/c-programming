// WAP to check if a student is passed or failed:
// conditions: marks >= 30 => pass; marks < 30 => fail;
// marks < 30 -> C; 30 <= marks < 70 -> B; 70 <= marks < 90 -> A; 90 <= marks <= 100 -> A+;

#include <stdio.h>

int main() {
    // defining the variable to store marks (user-input):
    int marks;

    printf("enter marks out of 100: ");
    scanf("%d", &marks);

    // main logic:
    if ( marks >= 30 && marks <= 100) {
        if ( marks >= 30 && marks < 70 ) {
            printf("Grade: B \n");
        } else if ( marks >= 70 && marks < 90 ) {
            printf("Grade: A \n");
        } else {
            printf("Grade: A+ \n");
        }
        printf("passed! :D");
    } else if ( marks < 30 && marks >= 0 ) {
        if ( marks < 30 ){
            printf("Grade: C \n");
        };
        printf("failed! :(");
    } else {
        printf("invalid input");
    }
};