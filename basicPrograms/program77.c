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
        for (int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int numOfRows;
    printf("enter number of rows: ");
    scanf("%d", &numOfRows);

    printPattern(numOfRows);
    return 0;
}