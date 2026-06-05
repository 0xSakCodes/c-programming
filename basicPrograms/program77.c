// WAP to print star pattern in reversed format as of program76;
/// (05/06/2026) {0xSakCodes}

#include <stdio.h>

// user defined function declaration:
void printPattern(int numOfRows) {
    /*
    | i would be assumed same to max numberOfRows and reduce after every iteration;
    || for instance; numOfRows (argument is 3): 
    ||| 3; ***
    ||| 2; **
    ||| 1; *
    */
    for (int i=numOfRows; i>=1; i--){
        /*
        | j=1; j<=i;
        || so, j will iterate and print number of stars as same as maxRows
        ||| value of i: 3 -> 1,2,3; *,*,*;
        ||| value of i: 2 -> 1,2; *,*;
        ||| value of i: 1 -> 1; *;
        */
        for (int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

/*
| function to print number pattern by number of rows;
|| 1
|| 1 2
|| 1 2 3
|| 1 2 3 4
*/
void printNumberPattern(int numberOfRows) {
    for (int i=1; i<=numberOfRows; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

/*
| function to print number reversed pattern by number of rows;
|| 1 2 3 4
|| 1 2 3
|| 1 2 
|| 1 
*/
void printReversedNumPattern(int numberOfRows) {
    // 4, 3, 2, 1,
    for (int i=numberOfRows; i>0; i--) {
        for (int j=1; j<=i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int main() {
    int numOfRows;
    printf("enter number of rows: ");
    scanf("%d", &numOfRows);

    printPattern(numOfRows);
    printNumberPattern(numOfRows);
    printReversedNumPattern(numOfRows);
    return 0;
}